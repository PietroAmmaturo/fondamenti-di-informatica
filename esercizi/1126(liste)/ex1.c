
#define STOP 0

typedef struct elem_s{
	int info;
	struct elem_s * next;
} elem_t

int main(int argc, char * argv[])
{
	elem_t * head = NULL;
	int val;
	
	scanf("%d", &val);
	while(val != STOP){
		/* inserisco nella lista*/
		head = push(head, val);
		scanf("%d", &val);
	}
	/* visualizzo */
	print(head);
	
	/* libero la lista*/
	head = emptylist(head);
	
	return 0;
}
