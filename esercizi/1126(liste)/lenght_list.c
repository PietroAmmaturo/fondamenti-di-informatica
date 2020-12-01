
int lenght(elem_t * h)
{
	int num;
	elem_t * tmp;
	
	num = 0;
	tmp = h;
	while (tmp != NULL) {
		num++;
		tmp = tmp->next;
	}
	return num;
}

int lenght(elem_t * h)
{
	int num;
	elem_t * tmp;
	
	num = 0;
	for (tmp = h; tmp != NULL; tmp = tmp->next)
		num++;
	return num;
}
