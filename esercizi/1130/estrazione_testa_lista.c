/*
int pop(elem_ * * h){
	
	if(*h != NULL){
	*h = *h->next;
	return *h->dato;
	}
	
	printf ("la lista non deve essere vuota");
	return 0;
}
*/

elem_t * pop(elem_ * h, int * dato){
	elem_t = del;
	if(h != NULL){
	*info = h->info;
	del= h;
	h = h->next;
	free(del);
	} else
		printf ("la lista non deve essere vuota");
	return h;
}


