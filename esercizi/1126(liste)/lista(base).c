
typedef struct elem_s{
	int info;
	struct elem_s * next;
} elem_t

/* aggiunge un elemento in testa alla lista*/
elem_t * push(elem_t *, int);

/* aggiunge un elemento in coda alla lista*/
elem_t * append(elem_t *, int);

/* aggiunge un elemento nella lista in ordine*/
elem_t * insert(elem_t *, int, int);

/* rimuove un elemento nella lista in base al suo valore*/
elem_t * del(elem_t *, int);

/* rimuove un elemento nella lista in base alla posizione*/
elem_t * delpos(elem_t *, int);

/* cerca un elemento e ne restituisce il riferimento o NULL se non seiste*/
elem_t * find(elem_t *, int);

/* svuota la lista*/
elem_t * emptylist(elem_t *);

/* utilità */
void print(elem_t *);

int length(elem_t *);

int main(int argc, char * argv[])
{
	elem * head = NULL;/*occorre sempre inizializzare la testa della lista a null*/
	
}
