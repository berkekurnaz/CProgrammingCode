
/* Kabarcik Siralamasi (Bubble Sort) Ornek */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	int n;
	int i,j;
	int min,gec;
	
	printf("Dizi Kac Elemanli Olsun: ");
	scanf("%d",&n);
	
	int dizi[n];
	
	for(i=0;i<n;i++)
	{
		printf("%d. Eleman Gir: ",i);
		scanf("%d",&dizi[i]);
	}
	
	printf("Siralama Islemi Yapiliyor...\n");
	
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-1;j++)
		{
			if(dizi[j] > dizi[j+1])
			{
				gec = dizi[j];
				dizi[j] = dizi[j+1];
				dizi[j+1] = gec;
			}	
		}
	}
	
	printf("Siralanmis Olarak Dizi...");
	
	for(i=0;i<n;i++)
	{
		printf("\n%d",dizi[i]);
	}
	
	
	return 0;
}
