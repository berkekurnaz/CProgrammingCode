#include <stdio.h>
#include <stdlib.h>

int main() 
{
	int *ptr,i,elemanSayisi,toplam;
	float ortalama;
	
	toplam = 0;
	
	printf("Kac Tane Eleman Girmek Istiyorsunuz: ");
	scanf("%d",&elemanSayisi);
	
	ptr= (int *) malloc(elemanSayisi*sizeof(int));
	
	printf("Elemanlari Giriniz: \n");
	
	for(i=0;i<elemanSayisi;i++)
	{
		printf("%d. Eleman = ",i+1);
		scanf("%d",&ptr[i]);
		toplam= toplam + ptr[i];
	}
	free(ptr);
	
	ortalama=(float) toplam/elemanSayisi;
	printf("Klavyeden Girilen %d Sayinin Ortalamasi %f dir...",elemanSayisi,ortalama); 
	
	return 0;
}
