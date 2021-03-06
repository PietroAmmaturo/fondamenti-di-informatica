/*scrivere un sottoprogramma che unisce 2 insiemi propri (2 liste che hanno elementi tutti diversi unirle in una che ha tutti gli elementi distinti degli insiemi)*/

elem_t * unisciliste(elem_t * h1, elem * h2)
{
	elem * tmp, *ris;
	
	tmp = h1; /* non serve tmp dato che h1 è passato per copia */
	for(tmp = h1; tmp != NULL; tmp = tmp->next)
		ris = append(ris, tmp->info);
	
	for(tmp = h2; tmp != NULL; tmp = tmp->next)
		if(!find(h1, tmp->info))
			append(ris, tmp->info);
			
	return ris;
}
