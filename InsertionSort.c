
/* Eklemeli Siralama (Insertion Sort) Ornek */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	int n;
	int i,j;
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
	
	for(i=1;i<n;i++)
	{
		gec = dizi[i];
		for(j=i-1;j>=0 && gec<dizi[j];j--)
		{
			dizi[j+1] = dizi[j];
		}
		dizi[j+1] = gec;
	}
	
	printf("Siralanmis Olarak Dizi...");
	
	for(i=0;i<n;i++)
	{
		printf("\n%d",dizi[i]);
	}
	
	return 0;
}
