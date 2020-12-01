
elem_t * insert(elem_t * h, int val, int ordine); /*1 cres, 0 decr*/
{
	elem_t *new, *tmp;
	if(new = malloc(sizeof(elem_t))){
		new->dato = val;
		if(ordine){
			if (h == NULL || h->info >= val) {
				n->next = h;
				h = n;
			} else {
				for(tmp = h; tmp != NULL && (val >= tmp->next->info); tmp = tmp->next){
						;
					new->next = tmp->next;
					tmp->next = new;
				}
			}
		} else {
				if (h == NULL || h->info >= val) {
					n->next = h;
					h = n;
				} else {
					for(tmp = h; tmp != NULL && (val < tmp->next->info); tmp = tmp->next){
						;
					new->next = tmp->next;
					tmp->next = new;
				}
			}
		}
	} else {
		printf("errore");
	}
	
	return h;
}
