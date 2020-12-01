
elem_t * find(elem_t * h, int val)
{
	elem_t * tmp;

	tmp = h;
	while (tmp != NULL) {
		if (tmp->info == val)
			return val;
		tmp = tmp->next;
	}
	return tmp;
}

elem_t * find(elem_t * h, int val)
{
	elem_t * tmp;

	for (tmp = h; tmp != NULL; tmp = tmp->next)
		if (tmp->info == val)
			return val;
	return num;
}
