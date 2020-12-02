#include <stdio.h>
#include <stdlib.h>

#define T_APERTA '('
#define Q_APERTA '['
#define G_APERTA '{'
#define T_CHIUSA ')'
#define Q_CHIUSA ']'
#define G_CHIUSA '}'

typedef struct _elem {
	char info;
	struct _elem * next;
}list_t;

int validaParentesi(char[]);
list_t * pop(list_t * h, char * dato);
list_t * push(list_t * h, char val);
int main (int argc, char * argv[])
{
	int ris;
	char parentesi[200];
	scanf("%s", parentesi);
	ris = validaParentesi(parentesi);
	printf("%d\n", ris);
	return 0;
}

int validaParentesi(char str[]){
	list_t *stack;
	int valida;
	char p;
	int i;
	
	stack = NULL;
	valida = 1;
	for(i = 0; str[i] != '\0' && valida == 1; i++) {
		if (str[i] == T_APERTA || str[i]  == Q_APERTA || str[i] == G_APERTA){
			stack = push(stack, str[i]);
		} else {
			if (stack == NULL)
				valida = 0;
			else if (str[i] == T_CHIUSA) {
				stack = pop(stack, &p);
				if (p != T_APERTA) {
					valida = 0;
				}
			}
			else if (str[i] == Q_CHIUSA) {
				stack = pop(stack, &p);
				if (p != Q_APERTA) {
					valida = 0;
				}
			}
			else if (str[i] == G_CHIUSA) {
				stack = pop(stack, &p);
				if (p != G_APERTA) {
					valida = 0;
				}
			}
		}
	}
	if (stack != NULL)
		valida = 0;
		
	return valida;
}

list_t * pop(list_t * h, char * dato){
	list_t * del;
	if(h != NULL){
	*dato = h->info;
	del = h;
	h = h->next;
	free(del);
	} else
		printf ("la lista non deve essere vuota");
	return h;
}

list_t * push(list_t * h, char val)
{
	list_t * tmp;
	
	if(tmp = malloc(sizeof(list_t))){ /* 0 */
		tmp->info = val; /* 1 */
		/* 2 */
		tmp->next = h; /* tmp punta all' indirizzo a cui puntava la head */
		h = tmp; /* la head punta ora a tmp */
	} else
		printf("push: errore allocazione memoria %c", val);
		
	return h;
}


