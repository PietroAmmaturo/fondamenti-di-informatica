
int fattoriale(int num) {

	int fatt;
	
	for (fatt = num; fatt > 0; fatt--)
		fatt = fatt * num;
		
  return fatt;
}
