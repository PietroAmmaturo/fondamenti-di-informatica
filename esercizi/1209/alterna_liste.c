
listi_t * alternaListe(listi_t * h1, listi_t * h2)
{
	list_t * h;
	list_t * p1, p2;
	h = NULL;
	
	p1 = h1;
	p2 = h2;
	while(p1 != NULL && p2 != NULL){
		h = append(h1, p1->info);
		h = append(h2, p2->info);
		p1 = p1->next;
		p2 = p2->next;
	}
	
	while(p1 != NULL){
		h = append(h1, p1->info);
		p1 = p1->next;
	}
	
	while(p2 != NULL){
		h = append(h2, p2->info);
		p2 = p2->next;
	}
	
	return h;
}

listi_t * append (h, val){
	
	list_t * new;
	list_t * p:
	if(new = malloc(sizeof(listi_t))){
		new->info = val;
		new->next = NULL;
 		if(p != NULL) {
			for(p = h; p->next != NULL; p=p->next)
				;
			p->next = new;
		} else {
			h = new;
		}
	}
	return h;
}
