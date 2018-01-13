#include <stdio.h>
#include <stdlib.h>


int Not_Hesaplama(int vize,int final)
{
	double ortalama = (double)vize*0.40+(double)final*0.60;
	
	if(ortalama>=90  && ortalama<=100)
	{
		printf("Ortalama: %lf --- 'AA'",ortalama);
	}
	else if(ortalama>=85  && ortalama<=89)
	{
		printf("Ortalama: %lf --- 'BA'",ortalama);
	}
	else if(ortalama>=75  && ortalama<=84)
	{
		printf("Ortalama: %lf --- 'BB'",ortalama);
	}
	else if(ortalama>=70  && ortalama<=74)
	{
		printf("Ortalama: %lf --- 'CB'",ortalama);
	}
	else if(ortalama>=60  && ortalama<=69)
	{
		printf("Ortalama: %lf --- 'CC'",ortalama);
	}
	else if(ortalama>=55  && ortalama<=59)
	{
		printf("Ortalama: %lf --- 'DC'",ortalama);
	}
	else if(ortalama>=50  && ortalama<=54)
	{
		printf("Ortalama: %lf --- 'DD'",ortalama);
	}
	else if(ortalama>=40  && ortalama<=49)
	{
		printf("Ortalama: %lf --- 'FD'",ortalama);
	}
	else if(ortalama>=0  && ortalama<=39)
	{
		printf("Ortalama: %lf --- 'FF'",ortalama);
	}
	else
	{
		printf("Hatali Bir Giris Gerceklesti ! Lutfen Tekrar Deneyiniz...");
	}
}


int main() 
{
	int vize,final;
	
	yeniden:
		
	printf("\nVize Notunuz: ");
	scanf("%d",&vize);
	
	printf("Final Notunuz: ");
	scanf("%d",&final);
	
	printf("***NOT ORTALAMANIZ***\n");
	
	Not_Hesaplama(vize,final);
	
	goto yeniden;
	
	return 0;
}
