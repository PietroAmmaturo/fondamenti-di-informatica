#include <stdio.h>

int main(int argc, char * argv[])
{
	char* ptr;
	int i, instr;
	
	printf("un carattere occupa %lu byte\n", sizeof(char));
	/*per ogni argomento*/
	(fori = 0; i < argc; i++){
		/*dove inizia la stringa di argv[i]*/
		ptr = argv[i];
		printf("%p\t%c\t%s\t\targv[%d]\n", ptr, *ptr, argv[i], i);
	
	}
	return 0;
}

