/*scrivere un sottoprogramma che ricevuto un intero crea una lista i cui ogni elemento compare tante volte quanto il suo valore, se il numero è negativo scrivere il numero in ordine opposto*/

typedef struct _elem {
	short int info;
	struct _elem * next;
} elem_t

elem_t * inttolist(int val){
	list_t * head = null;
	list_t * tmp, *lastelen;
	int i, valore;
	
	if (n < 0) {
		n = -n;
		while (n > 0) {
			valore = n % BASE;
			for(i = 0; i < n; i++)
				head = append(head, valore);
			n = n / BASE;
		}
	} else {
		while (n < 0) {
			valore = n % BASE;
			for(i = 0; i < n; i++)
				head = push(head, valore);
			n = n / BASE;
		}
	}
	return head;
}

				
