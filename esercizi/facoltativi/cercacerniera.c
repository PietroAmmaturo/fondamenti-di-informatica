#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 10

int cercacerniera(char s1[], char s2[] );
char *cerniera(char s1[], char s2[], int inizio);

int main(int argc, char * argv[]){
	char s2[MAX], s1[MAX];
	int n;
	char *s3;
	if(argc == 3){
		n=cercacerniera(argv[1], argv[2]);
		printf("%d\n", n);
		s3 = cerniera(argv[1], argv[2], n);
		printf("%s\n", s3);
		return 0;
	} else {
		printf("ERROR\n");
	}
	
}

int cercacerniera(char s1[], char s2[] ){
	
	int found;
	int i, j, tmp;
	for (i = 0; s2[i] != '\0'; i++){
		if(s1[0] == s2[i]){
			tmp = i;
			for(j = 1, found = 0; s2[j+i] != '\0' && found == 0; j++){
				if(s1[j] != s2[i + j]){
					found=1;

				}
		}
		if(s2[i+j] == '\0' && found == 0){
			return tmp;
		} else {
			return -1;
		}
		

		}

	}
	
}

char* cerniera(char s1[], char s2[], int inizio){

	int dim, i, j;
	dim = strlen(s1)-inizio + strlen(s2)-inizio;
	char *s3;
	s3 = malloc(sizeof(char) * (dim+1));
	for(i = 0; s1[inizio + i] != '\0'; i++){
		s3[i] = s1[i + inizio];
	}
	for(j = 0; j != inizio; j++){
		s3[j + inizio] = s2[j];
	}
	s3[j + inizio] = '\0';
	return s3;
}  