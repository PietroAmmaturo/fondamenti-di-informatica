
#define STOP 0
/*sottoprogramma che ricevuta in ingresso una lista la restituisce invertendo l'ordine degli elementi*/
typedef struct elem_s{
	int info;
	struct elem_s * next;
} elem_t

elem_t * invertilista(elem * listai)
{	
	elem_t * listao = NULL;
	elem_t * tmp;
	tmp = h;
	while(tmp != NULL){	/*  *tmp.info  */
		listao = push(listao, tmp->info);
		tmp = tmp->next;
	}
	listai = emptylist(listai);
	return listao;
}
