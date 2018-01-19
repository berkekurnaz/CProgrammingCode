#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void basla()
{
	printf("************Zar Atma Oyununa Hosgeldin************\n");
	printf("**************************************************\n");
	
	printf("Oyun Secenekleri: \n");
	printf("1-)Tekli Zar Atma...\n");
	printf("2-)Ciftli Zar Atma...\n");
	printf("3-)Bilgisayara Karsi Zar Oyunu...\n\n");
}

void tekliZarAtma()
{
	int no,no2;
	printf("\n*****Tekli Zar Atma Moduna Hosgeldin*****\n");
	
	printf("Zar Atmak Icin 1 Tusuna Basin: ");
	scanf("%d",&no);
	
	if(no==1)
	{
		teklizaryeni:
		
		srand(time(NULL));
		int deger=1+rand()%6;
		printf("Zar Icin Olusturulan Deger: %d\n",deger);
		
		printf("Tekrar Zar Atmak Icin 1 Tusuna Basin: \n Ana Menu Donmek Icin 2 Tusuna Basin: ");
		scanf("%d",&no2);
		
		if(no2==1)
		{
			goto teklizaryeni;
		}
		else if(no2==2)
		{
			printf("Ana Menu Geri Donuldu...\n\n");
			return main();
		}
		else
		{
			printf("Hatali Giris...");
			goto teklizaryeni;
		}
	}
}


void ciftliZarAtma()
{
	int no,no2;
	printf("\n*****Ciftli Zar Atma Moduna Hosgeldin*****\n");
	
	printf("Zar Atmak Icin 1 Tusuna Basin: ");
	scanf("%d",&no);
	
	if(no==1)
	{
		ciftlizaryeni:
		
		srand(time(NULL));
		int deger=1+rand()%6;
		int deger2=1+rand()%6;
		printf("Zar Icin Olusturulan Birinci Deger: %d Ikinci Deger: %d\n",deger,deger2);
		
		printf("Tekrar Zar Atmak Icin 1 Tusuna Basin: \n Ana Menu Donmek Icin 2 Tusuna Basin: ");
		scanf("%d",&no2);
		
		if(no2==1)
		{
			goto ciftlizaryeni;
		}
		else if(no2==2)
		{
			printf("Ana Menu Geri Donuldu...\n\n");
			return main();
		}
		else
		{
			printf("Hatali Giris...");
			goto ciftlizaryeni;
		}
	}
}

void zarAtmaOyunu()
{
	int no,no2,bP=0,dP=0;
	printf("\nZar Atma Oyun Moduna Hosgeldin\n");
	
	
	printf("Zar Atmak Icin 1 Tusuna Basin: ");
	scanf("%d",&no);
	
	if(no==1)
	{
		oyunzaryeni:
		
	    srand(time(NULL));
		int deger=1+rand()%6;
		int deger2=1+rand()%6;
		printf("Zar Icin Olusturulan\nSenin Degerin: %d\nBilgisayar Degeri: %d\n",deger,deger2);
		bP=bP+deger;
		dP=dP+deger2;
		
		printf("Tekrar Zar Atmak Icin 1 Tusuna Basin: \n Oyunu Bitirmek Icin 2 Tusuna Basin: ");
		scanf("%d",&no2);
		
		if(no2==1)
		{
			goto oyunzaryeni;
		}
		else if(no2==2)
		{
			printf("Oyun Basariyla Bitirildi...\n\nSenin Puanin: %d \nBilgisayar Puani: %d\n\n",bP,dP);
			return main();
		}
		else
		{
			printf("Hatali Giris...");
			goto oyunzaryeni;
		}
	}
	else
	{
		printf("Hatali Giris...");
	}
}


int main() {
	
	int secenek;
	

	basla();
	
	printf("Seceneklerden Birini Seciniz: ");
	scanf("%d",&secenek);
	
	if(secenek==1)
	{
		tekliZarAtma();
	}
	else if(secenek==2)
	{
		ciftliZarAtma();  
	}
	else if(secenek==3)
	{
		zarAtmaOyunu();  
	}
	
	return 0;
}
