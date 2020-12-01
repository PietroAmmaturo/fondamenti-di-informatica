#include <stdio.h>
#include <stdlib.h>

int validaParentesi(char[]);

int main (int argc, char * argv[])
{
	int ris;
	char parentesi[200];
	scanf("%s", parentesi);
	ris = validaParentesi(parentesi);
	printf("%d\n", ris);
	return 0;
}

int validaParentesi(char s[]){
	int tonde = 0;
	int quadre = 0;
	int graffe = 0;
	int i;
	
	for (i = 0; s[i] != '\0'; i++) {
		if (s[i] == '(')
			tonde++;
		if (s[i] == '[')
			quadre++;
		if (s[i] == '{')
			graffe++;
		if (s[i] == ')')
			tonde--;
		if (s[i] == ']')
			quadre--;
		if (s[i] == '}')
			graffe--;
		if (tonde < 0 || quadre < 0 || graffe < 0)
			return 0;
		if ((tonde != 0 || quadre != 0) && (graffe == 0))/*problema*/
			return 0;
		if ((tonde != 0) && (quadre == 0))
			return 0;
	}
	
	if ((tonde != 0) || (quadre != 0) || (graffe != 0))
		return 0;
		
	return 1;
}

/*
int validaParentesi(char[] s){
	int tonde = 0;
	int quadre = 0;
	int graffe = 0;
	
	elem_t * h, *p;
	h = NULL;
	h = stringtolist(validaParentesi);
	for (p = h; p != NULL; p = p->next) {
		if (p->dato == '(')
			tonde++;
		if (p->dato == '[')
			quadre++;
		if (p->dato == '{')
			graffe++;
		if (p->dato == ')')
			tonde++;
		if (p->dato == ']')
			quadre++;
		if (p->dato == '}')
			graffe++;
		if (tonde < 0 || quadre < 0 || graffe < 0)
			return 0;
		if ((tonde != 0 || quadre != 0) && (graffe == 0))
			return 0;
		if ((tonde == 0) && (graffe != 0))
			return 0;
	}
	if ((tonde != 0) || (quadre != 0) || (graffe != 0))
		return 0;
	return 1;
}
*/
