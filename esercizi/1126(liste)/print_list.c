
void print(elem_t * h)
{
	elem_t * tmp;

	tmp = h;
	while (tmp != NULL) {
		printf("%d", tmp->info);
		tmp = tmp->next;
	}
}

void print(elem_t * h)
{
	elem_t * tmp;

	for (tmp = h; tmp != NULL; tmp = tmp->next)
			printf("%d", tmp->info);
}
