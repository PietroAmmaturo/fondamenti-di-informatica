

elem_t * delete(elem_t * h, int val)
{
	elem_t * ptr, * del;
	
	/* devo cancellare il primo della lista */
	while (h /* h != NULL */ && h->info == val){
		del = h;
		h = h->next; /* la testa guarda al successivo elemento */
		free(del);
	} 
	ptr = h;
	while(ptr && ptr->next){
		while(ptr->next /* ptr->next != NULL */  && 
					ptr->next->info == val)
		{
			del = ptr->next;
			ptr->next = del->next;
			free(del);
		}
		ptr = ptr->next;
	}
	return h;
}
