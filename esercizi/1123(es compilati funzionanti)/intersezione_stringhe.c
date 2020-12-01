#include <stdio.h>
#include <stdlib.h>
char * intersezioneStringhe(char * s1, char * s2);
int main(int argc, char * argv[])
{
	printf("%s",intersezioneStringhe("abcdef", "ajfdjsplm"));;
	return 0;
}
char * intersezioneStringhe(char * s1, char * s2){
	char * intersezione;
	int i, j, cont;
	
	cont = 0;
	for(i = 0; s1[i] != '\0'; i++){
		for(j = 0; s2[j] != '\0'; j++){
			if(s1[i] == s2[j])
				cont++;
		}
	}
	cont++;
	if(intersezione = malloc(sizeof(char) * cont)){
		cont = 0;
		for(i = 0; s1[i] != '\0'; i++){
			for(j = 0; s2[j] != '\0'; j++){
				if(s1[i] == s2[j]){
					intersezione[cont] = s1[i];
					cont++;
				}
			}
		}
		intersezione[cont] = '\0';
	} else {
		printf("intersezioneStringhe: errore nell'allocamento della memoria per %d caratteri\n", cont);
	}
	
	return intersezione;
}


