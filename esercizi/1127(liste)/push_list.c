
elem_t * push(elem_t * h, int val)
{
	elem_t = tmp;
	
	if(tmp = malloc(sizeof(elem_t))){ /* 0 */
		tmp->info = val; /* 1 */
		/* 2 */
		tmp->next = h; /* tmp punta all' indirizzo a cui puntava la head */
		h = tmp; /* la head punta ora a tmp */
	} else
		printf("push: errore allocazione memoria %d", val);
		
	return h;
}

/* per indirizzo?? funzionerà? */
void push(elem_t * * h, int val)
{
	elem_t = tmp;
	
	if(tmp = malloc(sizeof(elem_t))){ /* 0 */
		tmp->info = val; /* 1 */
		/* 2 */
		tmp->next = *h; /* tmp punta all' indirizzo a cui puntava la head */
		*h = tmp; /* la head punta ora a tmp */
	} else
		printf("push: errore allocazione memoria %d", val);
		
}
