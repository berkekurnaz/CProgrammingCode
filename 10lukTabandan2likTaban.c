#include<stdio.h>
#include<conio.h>

int donusturucu(int sayi)
{
	int i;
	int k[30];
	i = 0;
	while(sayi >= 1)
	{
		i++;
		k[i] = sayi%2;
		sayi = sayi/2;
	}

	printf("\nIkilik taban karsiligi: ");
	
	for(i=i;i>0;i--)
	{
		printf("%d",k[i]);	
	}
	
}

int main()
{
	int s;
	printf("Donusturulmesi Istenilen Sayiyi Giriniz:");
	scanf("%d",&s);
	donusturucu(s);
	
	return (0);
}
