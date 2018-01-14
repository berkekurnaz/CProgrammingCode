#include <stdio.h>
#include <stdlib.h>   //Rand fonksiyonu kullanmak için gerekli olan kütüphane...
#include <time.h>    //Srand fonksiyonu kullanmak için gerekli olan kütüphane...

void zar_at()
{
	srand(time(NULL));    //Srand kullanýlmazsa program çalýþtýðýnda hep ayný sayý gelir...
	int deger=1+rand()%6; //Baþtaki 1 nerden baþlayacaðý,sondaki 6 nereye kadar gideceði...
	printf("Zar Atilan Deger: %d\n",deger);
}

int main() 
{
	int i;
	
	for(;;)
	{
		printf("Zar Atmak Icin 1 Tusuna Basin: ");
		scanf("%d",&i);
	
		if(i==1)
		{
			zar_at();
		}
		else
		{
			printf("Hatali Giris Gerceklesti...\n");
		}
	}
	
	return 0;
}



