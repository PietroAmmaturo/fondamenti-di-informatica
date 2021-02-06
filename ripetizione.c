#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#define MAXLEN 40
#define MAXDIM 10
#define NR 3
#define NC 2
#define MAXLENRIGO 80

void ordinaarray(int arr[], int dim);
void rimuoviminimo(int mat[][NC], int nr, int nc);
void rimuoviduplicati(int * arr, int dim, int * * newarr, int * newdim);
void ripulisci(char rigo[]);

int main (int argc, char * argv[])
{
  int num;
  char car;
  float val;
  double var;
  char str[MAXLEN + 1];
  int arr[MAXDIM];
  int dim;
  int mat[NR][NC];
  int nr, nc;
  int i, j;
  int * dinarr;
  FILE * fi, * fo;
  char finame[MAXLEN + 1], foname[MAXLEN + 1];
  char rigo[MAXLENRIGO + 2];
  
  scanf("%d %c %f %lf", &num, &car, &val, &var);
  scanf("%s", str);
  /* acquisisci array */
  scanf("%d", &dim);
  for (i = 0; i < dim; i++)
    scanf("%d", &arr[i]);
  ordinaarray(arr, dim);
  /* acquisisci matrice*/
  scanf("%d %d", &nr, &nc);
  for (i = 0; i < nr; i++)
    for (j = 0; j < nc; j++)
      scanf("%d", &mat[i][j]);
  rimuoviminimo(mat, nr, nc);
  /* crea array dinamico */
  if (dinarr = malloc(sizeof(int) * dim)) {
    for (i = 0; i < dim; i++)
      *(dinarr + i) = arr[i];
  } else
    printf("errore malloc");
  rimuoviduplicati(dinarr, dim, &dinarr, &dim);
  /* leggi stringhe da file */
  scanf("%s %s", finame, foname);
  if(fi = fopen(finame, "r")) {
    fgets(rigo, MAXLENRIGO + 2, fi);
    while (!feof(fi)) {
      ripulisci(rigo);
      fgets(rigo, MAXLENRIGO + 2, fi);
    }
    fclose (fi);
  } else
    printf("errore fopen");
    
  printf("%d %c %f %lf\n", num, car, val, var);
  printf("%s\n", str);
  printf("%d %d", nr, nc);
  printf("\n");
  for (i = 0; i < nr; i++) {
    for (j = 0; j < nc; j++)
      printf("%d", mat[i][j]);
    printf("\n");
  }
  printf("%d\n", dim);
  for (i = 0; i < dim; i++)
    printf("%d ", *(dinarr + i));
  printf("\n");
  free (dinarr);
  if(fo = fopen(foname, "w")) {
    fputs(rigo, fo);
    fclose (fo);
  } else
    printf("errore apertura file");
  return 0;
}

void ordinaarray(int arr[], int dim)
{
  int i, j, minpos, tmp;
  
  for (i = 0; i < dim - 1; i++) {
    minpos = i;
    for (j = i + 1; j < dim; j++)
      if (arr[j] < arr[minpos])
        minpos = j;
    tmp = arr[minpos];
    arr[minpos] = arr[i];
    arr[i] = tmp;
  }
}

void rimuoviminimo(int mat[][NC], int nr, int nc)
{
  int i, j, min;
  
  min = mat[0][0];
  for (i = 0; i < nr; i++)
    for (j = 0; j < nc; j++)
      if (mat[i][j] < min)
        min = mat[i][j];
  for (i = 0; i < nr; i++)
    for (j = 0; j < nc; j++)
      mat[i][j] -= min;
}

void rimuoviduplicati(int * arr, int dim, int * * narr, int * ndim)
{
  int i, cont, j, newdim, * newarr, found;
  
  newdim = 0;
  for (i = 0; i < dim; i++) {
    found = 0;
    for (j = 0; j < i && !found; j++)
      if(*(arr + i) == *(arr + j))
        found = 1;
    if (!found)
      newdim++;
  }
  if(newarr = malloc(newdim * sizeof(int))) {
    cont = 0;
    for (i = 0; i < dim; i++) {
      found = 0;
      for (j = 0; j < i && !found; j++)
        if(*(arr + i) == *(arr + j))
          found = 1;
      if (!found) {
        *(newarr + cont) = *(arr + i);
        cont++;
      }
    }
    *narr = newarr;
    *ndim = newdim;
  } else
    printf("malloc error");
}

void ripulisci(char rigo[])
{
  int i;
  
  for (i = 0; rigo[i] != '\0' && rigo[i] != '\n'; i++)
    ;
  if (rigo[i] == '\n')
    rigo[i] = '\0';
}
