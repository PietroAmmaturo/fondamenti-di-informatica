/*scrivere un sottoprogramma conta che riceve in ingresso due stringhec, info ed cars. il sottoprogramma conta e restituisce al chiamante il nmero di volte che ogni carattere presente in cars compare in info. Si crei un opportuna struttura dati per restituire al chiamante il risultato dell'elaborazione. Nella stringa cars non ci sono caratteri ripetuti. Tutti i caratteri di info sono presenti in cars*/

int main(int argc, char * argv[])
{
	char *seq, *lookup;
	int * caratteri;
	int i;
	
	if (argc == 3){
		seq = argv[1];
		lookup = argv[2]
		if(contatori = contacaratteri(seq, lookup)){
			for(i = 0; lookup[i] != '\0'; i++)
				printf("%c: %d\n", lookup[i], *(contatori + i);
			free(contatori);
		}
	} else 
		printf("%s: parametri d'ingresso sbagliati\n", trovanomefile(argv[0]);
	return 0;
}

int * contacaratteri(char info[], char cars[]){
	int * cont;
	int i, j;
	
	/*equivalente di strlen*/
	for(i = 0; cars[i] != '\0'; i++)
		;
	/*alloco memoria per l'array di contatori*/
	if(cont = malloc(sizeof(int) * i){
		/*scorro cars*/
		for(i = 0; cars[i] != '\0'; i++){
			*(cont + i) = 0;
			/*scorro info per ogni elemento di cars*/
			for(j = 0; info[j] != '\0': j++){
				/*conto*/
				if (cars[i] == info[j])
					*(cont + i)++;
			}
		}
	} else {
		printf("errore nell'allocare la memoria per %d interi\n", i);
	}
	return cont;
}

int * contacaratteri_short(char info[], char cars[]){/*migliore*/
	int * cont;
	int i, j;
	
	/*equivalente di strlen*/
	for(i = 0; cars[i] != '\0'; i++)
		;
	/*alloco memoria per l'array di contatori*/
	if(cont = malloc(sizeof(int) * i){
		/*azzero i contatori*/
		for(i = 0; cars[i] != '\0'; i++)
			*(cont + i) = 0;
		/*scorro info*/
		for(j = 0; info[j] != '\0': j++){
			/*scorro cars e controllo se ci sono caratteri uguali, se ci sono, incremento il contatore*/
			for(i = 0; info[j] != cars[i]: i++)
				;
			*(count + i)++;
		}
	} else {
		printf("errore nell'allocare la memoria per %d interi\n", i);
	}
	return cont;
}
				
