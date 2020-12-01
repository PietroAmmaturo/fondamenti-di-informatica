#include <stdio.h>

#define MAX_LATI 10
#define FILE_NAME "./griglia.txt"
#define INIT 'A'
#define SIALB 1
#define NOALB 0

typedef struct occ_s{
    char colore;
    int albero;
} field;

void acquisisciGriglia(field [][MAX_LATI], int *, int *, FILE *);
int checkGriglia(field [][MAX_LATI], int, int[]);
int checkColore(field [][MAX_LATI], int, int []);
int checkDistanza(field[][MAX_LATI], int, int, int);
int checkAllDistanze(field [][MAX_LATI] ,int);
int checkRiga (field [][MAX_LATI], int);
int checkColonna(field[][MAX_LATI], int);

int main(int argc, char * argv[])
{
    field campo[MAX_LATI][MAX_LATI];
    FILE * fi;
    int colAlberi[MAX_LATI];
    int nAlberi;
    int dim;
    int ris = 0;


    if(fi = fopen(FILE_NAME, "r"))
    {
        acquisisciGriglia(campo, &nAlberi, &dim, fi);
        fclose(fi);
    }else
        printf("Problemi con %s\n", FILE_NAME);

    ris = checkGriglia(campo, dim, colAlberi);

    printf("%d\n", ris);
    return 0;
}

void acquisisciGriglia(field campo[][MAX_LATI], int * nAlberi, int * larg, FILE * fi){
    int i, j;
    int x, y;
    int alberi;
    int dim;
    char col;

    fscanf(fi, "%d", &dim);
    *larg = dim;

    for (i = 0; i < dim; i++)
        for (j = 0; j < dim; j++){
            fscanf(fi, "%c", &campo[i][j].colore);
            /*printf("%c ", campo[i][j].colore);*/
            /*if(campo[i][j].colore == '\n'){
                if(j > 0)
                    j--;
                else{
                    j = dim - 1;
                    i--;
                }
            }*/
            campo[i][j].albero = 0;
        }

    alberi = 0;
    fscanf(fi, "%d %d", &x, &y);
    while(!feof(fi)){
        campo[x][y].albero = 1;
        alberi++;
        fscanf(fi, "%d %d", &x, &y);
    }

    *nAlberi  = alberi;
}

int checkGriglia(field campo[][MAX_LATI], int dim, int alberiColore[]){
    if(checkColore(campo, dim, alberiColore)
    && checkAllDistanze(campo, dim)
    && checkRiga(campo, dim)
    && checkColonna(campo, dim))
        return 1;

    return 0;
}

int checkColore(field campo[][MAX_LATI], int dim, int alberiColore[])
{
    int i, j;
    int pos;
    int lim, isOk;

    isOk = 1;

    for(i = 0; i < dim; i++)
        alberiColore[i] = 0;

    for(i = 0; i < dim; i++){
        for(j = 0; j < dim; j++){
            if(campo[i][j].albero == 1){
                pos = campo[i][j].colore - INIT;
                alberiColore[pos]++;
            }
        }
    }

    if(dim < 6)
        lim = 1;
    else
        lim = 2;

    for(i = 0; i < dim && isOk == 1; i++){
        if(alberiColore[i] != lim)
            isOk = 0;
    }
    return isOk;
}

int checkRiga (field campo[][MAX_LATI], int dim){
    int  i, j;
    int cont;
    int n;

    if (dim>6){
        n=2;
    }else
        n=1;
    for(i=0; i<dim; i++){
        cont=0;
        for(j=0; j<dim; j++){

            if(campo[i][j].albero==1)
                cont++;
        }
        if(cont!=n)
            return 0;
    }
    return 1;
}

int checkColonna(field campo[][MAX_LATI], int dim){
    int i, j;
    int cont;
    int n;

    if(dim<6){
        n=1;
    }else
        n=2;
    for(j=0;j<dim;j++){
        cont = 0;
        for(i=0; i<dim;i++){
            if(campo[i][j].albero==1)
                cont++;

        }
        if(cont!=n)
            return 0;
    }
    return 1;
}

int checkDistanza(field campo[][MAX_LATI], int dim, int r, int c ){

    int i,j, jIni;
    int valido;
    int limitR, limitC;



    if(r == 0){
        i = r;
        limitR = r + 2;
    } else{
        i = r - 1;
        limitR = (r - 1) + 3;
    }

    if(c == 0){
        jIni = c;
        limitC = c + 2;
    } else{
        jIni = c - 1;
        limitC = (c - 1) + 3;
    }

    valido = 1;
    for(  ; i < limitR && i < dim; i++){

        for( j = jIni ; j < limitC && j < dim; j++){
                if(campo[i][j].albero == SIALB && i != r && j!= c){
                    valido = 0;
                }
        }

    }

    return valido;

}


int checkAllDistanze(field campo[][MAX_LATI], int dim){

    int i, j;
    int valido;


    valido = 1;
    for(i = 0; i < dim && valido; i++){
        for(j = 0; j < dim && valido; j++){

            if(campo[i][j].albero == SIALB){
                valido = checkDistanza( campo, dim, i, j);

            }

        }
    }

    return valido;
}
