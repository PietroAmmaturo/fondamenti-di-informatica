int ischinstr(char s[], char ch)
{
	int found;
	if (s[0] != '\0')
		found = 0;
	else	if(s[0] == ch)
			found = 1;
		else
			ischinstr(s[1]);
	return size;
}
/*non finito*/

