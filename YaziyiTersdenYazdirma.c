#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void terstenYaz(char yazi[])
{
	int i,geciciUzunluk,uzunluk;
	
	uzunluk = strlen(yazi);
	
	for(i=0;i<uzunluk/2;i++)
	{
		geciciUzunluk=yazi[i];
		yazi[i]=yazi[uzunluk-1-i];
		yazi[uzunluk-1-i] = geciciUzunluk;
	}
	printf("%s",yazi);
}

int main() {
	
	char yazi[100];
	
	printf("Ters Cevirilecek Yaziyi Buraya Yazin: ");
	gets(yazi);
	
	terstenYaz(yazi);

	
	return 0;
}
