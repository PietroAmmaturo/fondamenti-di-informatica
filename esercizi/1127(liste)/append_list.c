

elem_t * append(elem_t * h, int val)
{
	elem_t * tmp;
	elem_t * ptr;
	
	if(tmp = malloc(sizeof(elem_t))){ /* 0 */
		tmp->info = val; /* 1 */
		/* 2 */
		tmp->next = NULL; /* tmp punta all' indirizzo NULL*/
		if (h){
			ptr = h;
			while (ptr->next != NULL)
					ptr = ptr->next;
			ptr->next = tmp;
		} else
				h = tmp;
	} else
			printf("push: errore allocazione memoria %d", val);
		
	return h;
}


elem_t * append(elem_t * h, int val)
{
	elem_t * tmp;
	elem_t * ptr;
	
	if(tmp = malloc(sizeof(elem_t))){ /* 0 */
		tmp->info = val; /* 1 */
		/* 2 */
		tmp->next = NULL; /* tmp punta all' indirizzo NULL*/
		if (h){
			for (ptr = h; ptr->next != NULL; ptr = ptr->next)
			;
			ptr->next = tmp;
		} else
				h = tmp;
	} else
			printf("push: errore allocazione memoria %d", val);
		
	return h;
}

/* quando scandisco le liste e le scandisco tutte posso fermarmi a null oppure all' elemento prima di null, in questo caso occorre fermarsi a null */
