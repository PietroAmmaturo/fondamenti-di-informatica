
typedef struct _elem {
	char info;
	struct _elem * next;
} listc_t;

listc_t * rimuoviSottosequenza(listc_t * h)
{
	listc_t * p;
	listc_t * new;
		
	p = h;
		while(p != NULL && p->next != NULL){
			if (p->info == '('){
				if (p->next->info != ')'){
					p->next = pop(p->next);
				}
				else {
					if(new = malloc(sizeof(listc_t))){
						new->info = '#';
						new->next = p->next;
						p->next = new;
						p = p->next->next;
					} else {
						printf("errore");
					}
				}
			}
			else {
				p = p->next;
			}
		}
	} 
	return h;
}
		
	

