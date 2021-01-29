/*scrivere un sottoprogramma che riceve in input il nome completo del file (con tanto di prcorso) e il carattere separatore, restituisce il nome completo senza percorso*/

char * nomefile(char * fullname, char separatore)
{
	int i;
	int fullnamelen;
	int indexsep;
	
	indexsep = 0;
	for(i = 0; fullname[i] != '\0'; i++)
		if(fullname[i] == separatore)
			indexsep = i;
	if (indexsep)
		indexsep++;
	
	return &fullname[indexsep];
}
