
#include <stdio.h>
#include <stdlib.h>

typedef struct _elem{
	char car;
	struct _elem * next;
} car_t;

void contaLista(car_t * h);
car_t * append(car_t * h, char val);
void print(car_t * h);

int main (int argc, char * argv[])
{
	int i;
	char c;
	car_t * h;
	h = NULL;
	for (i = 0; i < 10; i++){
		scanf("%c", &c);
		h = append(h, c);
	}
	contaLista(h);
	return 0;
}

void contaLista(car_t * h){
	int cont;
	car_t * p;
	cont = 1;
	for (p = h; p != NULL; p = p->next){
		if (p->next == NULL || p->car != p->next->car){
			printf("%c: %d\n", p->car, cont);
			cont = 1;
		} else {
			cont++;
		}
	} 
}

car_t * append(car_t * h, char val)
{
	car_t * tmp;
	car_t * ptr;
	
	if(tmp = malloc(sizeof(car_t))){ /* 0 */
		tmp->car = val; /* 1 */
		/* 2 */
		tmp->next = NULL; /* tmp punta all' indirizzo NULL*/
		if (h){
			ptr = h;
			while (ptr->next != NULL)
				ptr = ptr->next;
			ptr->next = tmp;
		} else
				h = tmp;
	} else
			printf("push: errore allocazione memoria %d", val);
		
	return h;
}

void print(car_t * h)
{
	car_t * tmp;

	for (tmp = h; tmp != NULL; tmp = tmp->next)
			printf("%c", tmp->car);
}
