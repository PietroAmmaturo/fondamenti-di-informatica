
elem * t rimuoviDuplicati(elem_h * h){
	elem *p;
	for (p = h; p != NULL && p->next != NULL; p = p->next)
		p->next = delete(p->next, p->dato);
	return h;
}
