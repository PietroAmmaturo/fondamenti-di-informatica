
elem_t * insert(elem_t * h1, elem_t * h2){
	elem_t * h;
	h = NULL;
	int riporto, v1, v2, somma;
	
	riporto = 0;
	result = NULL;
	p1 = n1;
	p2 = n2;
	while(p1 != NULL || p2 != NULL) {
		if (p1 != NULL) {
			v1 = p1->dato;
			p1 = p1->next;
		} else {
			v1 = 0;
		}
	
		if (p2 != NULL) {
			v2 = p2->dato;
			p2 = p2->next;
		} else {
			v2 = 0;
		}
		
		somma = v1 + v2 + riporto;
		result = append(result, somma % BASE);
		riporto = somma / BASE;
	}
	
	if (riporto != 0) {
		result = append(result, riporto);
	}
	
	return result;
}

