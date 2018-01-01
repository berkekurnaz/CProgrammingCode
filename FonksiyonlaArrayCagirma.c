#include <stdio.h>
#include <stdlib.h>



void bastir(int matrisimiz[][4],int diziBoyut)
{
	int i,j;
	
	printf("\n");
	for(i=0;i<diziBoyut;i++)
	{
		for(j=0;j<4;j++)
		{
			printf("%d ",matrisimiz[i][j]);
		}
		printf("\n");
	}	
}

int main() {
	
	int matris[3][4];
	
	int i,j;
	
	for(i=0;i<3;i++)
	{
		for(j=0;j<4;j++)
		{
			printf("%d.Dizinin %d.Elemani Girin: ",(i+1),(j+1));
			scanf("%d",&matris[i][j]);
		}
		
	}
	
	bastir(matris,3);
	
	
	return 0;
}
