
/* Secmeli Siralama (Selection Sort) Ornek */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) 
{
	int n = 0;
	int i,j;
	int min;
	int gec;
	
	printf("Dizi Kac Elemanli Olsun: ");
	scanf("%d",&n);
	
	int dizi[n];
	
	for(i=0;i<n;i++)
	{
		printf("%d. Eleman Gir: ",i);
		scanf("%d",&dizi[i]);
	}
	
	printf("Siralama Islemi Yapiliyor...\n");
	
	for(i=0;i<n;i++)
	{
		min=i;
		for(j=i;j<n;j++)
		{
			if(dizi[j]<dizi[min])
			{
				min = j;
			}
		}
		gec = dizi[i];
		dizi[i] = dizi[min];
		dizi[min] = gec;
	}
	
	printf("Siralanmis Olarak Dizi...");
	
	for(i=0;i<n;i++)
	{
		printf("\n%d",dizi[i]);
	}
	
	
	return 0;
}
