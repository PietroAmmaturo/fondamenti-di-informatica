/*caratteri e array di contatori*/
#include <stdio.h>
#define NCAR 10
#define LENALFA 26
#define PRIMO 'a'

/*acquisisce 50 caratteri uno dopo l'altro, tutti minuscoli, il programma calcola e visualizza per ogni carattere che compare nella sequenza il numero di volte in cui compare*/
int main(int argc, char*argv[]) {
	
	char string[NCAR];
	int num[26] = {0};
	int i, j;
	char alph[26] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
	
	j = 0;
	i = 0;
	
	for(j = 0; j < 26; j++)
		num[j] = 0;
	
	for(i = 0; i < NCAR; i++)
		scanf("%c", &string[i]);
	
	for(i = 0; i < NCAR; i++)
		for(j = 0; j < 26; j++)
			if (string[i] == alph[j])
				num[j]++;
			
	for(j = 0; j < 26; j++)
		printf("%c", num[j]);
		
	
	/*
	int numocc[LENALFA], pos;
	char seq[NUMCAR];
	int i;
	
	for(i = 0; i < NCAR; i++)
		scanf("%c", &string[i]);
		
	for(i = 0; i < LENALFA; i++)
		numocc[i] = 0;
		
	for(i = 0; i < NCAR; i++){
		pos = seq[i] - PRIMO;
		numocc[pos] = numocc [pos] + 1;
		}
		
	for(i = 0; i < NCAR; i++){
		if(numocc[i] > 0)
			printf("%c %d\n", PRIMO + i, numocc[i];

	*/
		return 0;
}

