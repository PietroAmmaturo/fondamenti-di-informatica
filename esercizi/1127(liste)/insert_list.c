
elem_t * insert(elem_t * h, int val, int ordine); /*1 cres, 0 decr*/
{
	elem_t *new, *tmp;
	
	if(ordine){
		for(tmp = h; tmp != NULL; tmp = tmp->next){
			if (val < tmp->info){
				new->next = tmp->next;
				new->info = val;
				tmp->next = new;
			}
		}
	} else {
			for(tmp = h; tmp != NULL; tmp = tmp->next){
				if (val > tmp->info){
					new->next = tmp->next;
					new->info = val;
					tmp->next = new;
				}
			}
		}
	
	return h;
}
