#include <stdio.h>
#include <stdlib.h>



int main() 
{
	char cumle[50];
	char harf;
	
	int i = 0;
	int sayac = 0;
	
	printf("Cumlenizi Giriniz : ");
	gets(cumle);
	
	printf("Cumle Icinde Aramak Istedigin Harf : ");
	harf = getche();
	
	for(i = 0;i<50;i++)
	{
		if(cumle[i] == harf)
		{
			sayac++;	
		}	
	}	
	
	printf("\nCumlenin Icinde %c Harfinin Sayisi : %d",harf,sayac);
	
	return 0;
}
