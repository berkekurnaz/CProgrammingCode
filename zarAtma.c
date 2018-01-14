#include <stdio.h>
#include <stdlib.h>   //Rand fonksiyonu kullanmak i�in gerekli olan k�t�phane...
#include <time.h>    //Srand fonksiyonu kullanmak i�in gerekli olan k�t�phane...

void zar_at()
{
	srand(time(NULL));    //Srand kullan�lmazsa program �al��t���nda hep ayn� say� gelir...
	int deger=1+rand()%6; //Ba�taki 1 nerden ba�layaca��,sondaki 6 nereye kadar gidece�i...
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



