#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include <math.h>
#define FILEIN "./futuribili.txt"
#define LENMAXVERSO 50
#define A_L 'a'
#define E_L 'e'
#define I_L 'i'
#define O_L 'o'
#define U_L 'u'
#define NVOC 5
#define PERCENTUALE 0.20
#define START 'a'
#define END 'z'
#define ALPHA 'a'
#define ALPHABET 26
#define PTO '.'
#define VIR ','
#define PTV ';'
#define AMAI 'A'
#define ZMAI 'Z'


int lunghezzaok (char[], char[]);
int rimaok(char [], char[]);
char * trovarima(char[]);
char * cesura(char []); /*restituisce la prima parte del verso (fino alla virgola)*/
char * trovacesura (void); /*restituisce il verso intero*/
int assonanza(char [], char[]);
char * trovaassonanza(char[]);
char allitterazione(char []);
char * trovaalliterazione(char);
void tolowerString ( char [] );
int isVowel(char);

int main (int argc, char * argv[]){
   int condizione, tmp;
   char * temp;
   char res;
   char verso1[LENMAXVERSO+1];
   char verso2[LENMAXVERSO+1];
   scanf("%d%*c", &condizione);
   while(condizione){
        if( condizione == 1){
        	gets(verso1);
        	gets(verso2);
        	tmp = lunghezzaok( verso1, verso2);
        	printf("%d\n", tmp);
        }
        if( condizione == 2){
        	gets(verso1);
        	gets(verso2);
        	tmp = rimaok( verso1 , verso2);
        	printf("%d\n", tmp);
        }
        if( condizione == 3){
        	gets(verso1);
        	temp = trovarima(verso1);
        	if(temp != NULL){
        		printf("%s\n", temp);
        		free(temp);
        	}
        }
        if( condizione == 4){
        	gets(verso1);
        	temp = cesura( verso1 );
        	if(temp != NULL){
        		printf("%s\n", temp);
        		free(temp);
        	}
        }
        if( condizione == 5){
        	temp= trovacesura();
        	if(temp != NULL){
        		printf("%s\n", temp);
        		free(temp);
        	}
        }
        if( condizione == 6){
        	gets(verso1);
        	gets(verso2);
        	tmp = assonanza( verso1, verso2);
        	printf("%d\n" tmp);
        }
        if( condizione == 7){
        	gets(verso1);
        	temp = trovaassonanza(verso1);
        	if(temp != NULL){
        		printf("%s\n", temp);
        		free(temp);
        	}
        }
        if( condizione == 8){
        	gets(verso1);
        	res= allitterazione(verso1);
        	if(res != NULL){
        		printf("%c\n", res);
        	}
        }
        if( condizione == 9){
        	scanf("%c", &res);
        	temp=trovaalliterazione(res);
        	if( temp != NULL){
        		printf("%s\n", temp);
        		free(temp);
        	}
        }
        scanf("%d%*c". &condizione);
   }
   return 0; 
}
void tolowerString (char seq[]){
	int i;
    for(i = 0; seq[i] != '\0'; i++){

        if(seq[i] >= AMAI  && seq[i] <= ZMAI )
            seq[i] = tolower(seq[i]);
    }
}
int lunghezzaok (char verso1[], char verso2[]) {   
   
    int len1, len2, n;
    float x1, x2;

	len1=strlen(verso1);
	len2=strlen(verso2);
	n= abs(len1 - len2);
	x1= n/len1;
	x2= n/len2;
	if(x1 > PERCENTUALE || x2 > PERCENTUALE)
		return 0;
	return 1;
}
char * trovarima(char v[]){
    FILE * fi;
    int len;
    char s[LENMAXVERSO + 2];
    char * verso;
    int i, j;

    if(fi = fopen(FILEIN, "r")){
        while(fgets(s, LENMAXVERSO + 2, fi) != EOF){
            len = strlen(s) - 1;
            s[len] = '\0';
            len--;
            if(rimaok(v, s)){
                if(verso = malloc((len) * sizeof(char))){
                    j = 0;
                    for(i = 0; s[i] != '\0'; i++){
                        *(verso + j) = s[i];
                        j++;
                    }
                    *(verso + j) = '\0';
                    return verso;
                } else {
                    printf("strvoc: alla locazione fallita %d char \n", (len));
                }
            }
        }
        fclose(fi);
    } else {
        printf("Errore nell'apertura del file: %s", FILE_IN);
    }
    return NULL;
}
char * trovaalliterazione(char lettera);
{
	FILE *fp;
	int dim;
	int trovato;
	int contall, contlett;
	float perc;
	char * dati;
	int i;
	char seq[LENMAXVERSO+1];


	if (fp = fopen (FILEIN, "r")){

		fgets (seq, LENMAXVERSO, fp);
		trovato = 0;
		while (!feof (fp) && trovato == 0){

			dim = strlen (seq);
			seq[strlen (seq) - 1] = '\0';
			tolowerstring (seq);
			contall = 0;
			contlett = 0;
			for (i = 0; seq[i] != '\0'; i++){

				if (seq[i] >= START && seq[i] <= END)
					contlett++;

				if (seq[i] == lettera)
					contall++;
			}

			perc = (float) contlett * PERCENTUALE;
			if (contall > perc){
				trovato = 1;

				if (dati = malloc ((dim - 1) * sizeof(char))){

					for (i = 0; i < dim; i++)
						*(dati + i) = seq[i];

				} else printf ("Errore nell'allocazione della memoria per %d caratteri: sottoprogramma ALLITTERAZIONE", (dim - 1));
			}

			fgets (seq, LENMAXVERSO, fp);
		}
		fclose(fp);
	} else printf ("Errore nell'apertura del file %s: sottoprogramma ALLITTERAZIONE\n", FILEIN);

	if (trovato == 0)
		dati = NULL;

	return dati;
}
int rimaok(char v1[], char v2[]){
    int lv1;
    int lv2;
    int i;

    char v1m[LENMAXVERSO + 1];
    char v2m[LENMAXVERSO + 1];

    strcpy(v1m, v1);
    strcpy(v2m, v2);

    tolowerString(v1m);
    tolowerString(v2m);

    lv1m = strlen(v1m);
    lv2m = strlen(v2m);

    if(lv1m < 3 || lv2m < 3)
        return 0;
    for (i = 0; i < 3; i++)
        if (v1m[lv1m - i] != v2m[lv2m - i])
            return 0;
    return 1;
}



char * cesura (char seq[]){

    int i;
    int dimCes;
    int found;
    char * vCes;

    found = 0;
    dimCes = 0;
    for(i = 0; seq[i] != '\0' && !found; i++){

        if(seq[i] == PTO || seq[i] == VIR || seq[i] == PTV)
            found = 1;
        if(!found)
            dimCes++;
    }

    vCes = malloc( (dimCes + 1) * sizeof( char ));

    if(vCes){

        for(i = 0; i < dimCes ; i++){
            *(vCes + i) = seq[i];
        }

        *(vCes + i) = '\0';


    } else {
        printf("cesura: errore allocazione %d caratteri\n",dimCes);
        
    }


    return vCes;


}

char * trovacesura (void){
    
    FILE * fp;

    char seqtmp[LENMAXVERSO + 1];
    char len;
    char * vCes;
    int end;
    int i;

    if(fp = fopen(FILEIN, "r")){

        fgets(seqtmp,LENMAXVERSO,fp);

        end = 0;
        while(!feof(fp) && !end){
            
            tolowerString(seqtmp);
            
            len = strlen(seqtmp);
            seqtmp[len - 1] = '\0';

            vCes = cesura(seqtmp);

            if(vCes != NULL)
                end = 1;

            fgets(seqtmp,LENMAXVERSO,fp);

        }
        fclose(fp);
    } else {
        printf("trovacesura: errore apertura file %s\n",FILEIN);
        vCes = NULL;
    }

    return vCes;
}
int allitterazione(char verso[])
{
    int allit[ALPHABET], i;
    int lett;
    int all;
    float suffAll, numlett;

    for(i = 0; i < ALPHABET; i++)
        allit[i] = 0;

    numlett = 0;
    for(i = 0; verso[i] != '\0'; i++)
        if(isalpha(verso[i])){
            numlett++;
            verso[i] =tolower(verso[i]);
        }

    suffAll = numlett * PERCENTUALE;
    all = 0;

    for(i = 0; verso[i] != '\0' && all == 0; i++)
        if(isalpha(verso[i])){
            lett = verso[i] - ALPHA;
            allit[lett]++;
            if(allit[lett] > suffAll)
                all = 1;
        }

    return all;
}
int assonanza(char s1[], char s2[]){
	int l1, l2;
	int i, nvoc;
	char voc[NVOC];
	int ris;
	
	tolowerString(s1);
	tolowerString(s2);
	
	l1 = strlen(s1);
	l2 = strlen(s2);
	
	nvoc = 0;
	for (i = l1 - 1; s1[i] != ' ' && i > 0; i--){
		if (isVowel(s1[i]) == 1){
			voc[nvoc] = s1[i];
			nvoc++;
		}
	}

	nvoc--;

	ris = 1;
	for (i = l2 - 1; s2[i] != ' ' && ris && i > 0; i--){
		if (isVowel(s2[i])){
			if (s2[i] == voc[nvoc])
				nvoc--;
			else
				ris = 0;
		}
	}
	return ris;
}

int isVowel(char c){
	if (c == A_L || c == E_L || c == I_L || c == O_L || c == U_L)
		return 1;
	return 0;
}

char * trovaassonanza(char s1[]){
	FILE *fp;
	int trovato;
	char tmparr[LENMAXVERSO];
	int find, i;
	char * out;
	
	tolowerString(s1);
	
	if ((fp = fopen(FILEIN, "r")) != NULL){
		find = 0;
		while(fgets(tmparr, LENMAXVERSO, fp) != EOF && !find){
			tolowerString(tmparr);
			tmparr[strlen(tmparr) - 1] = '\0';
			if (assonanza(s1, tmparr)){
				if ((out = malloc(strlen(tmparr) * sizeof(char))) != NULL){
					for (i = 0; tmparr[i] != '\0'; i++)
						*(out+i) = tmparr[i];
					find = 1;
				} else
					find = 1;
			}
		}
		fclose(fp);
	} else
		out = NULL;
	return out;
}
