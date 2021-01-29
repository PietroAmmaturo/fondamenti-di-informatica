
int main(int argc, char * argv[])
{
	char * str;
	int diff, diffreverse;
	int len;
	
	if(argc == 2){
		str = argv[1];
		len = strlen(str) - 1;
		buffa = 1;
		for (i = 0; i < len; i++){
			diff = abs(str[i + 1] - str[i]);
			diffrev = abs(str[len - i] -str[len - (i + 1)]);
			if (diff != diffreverse) {
				buffa = 0;
			}
		}
		printf("%d\n", buffa);
	} else {
		printf("errore");
	}

	return 0;
}
