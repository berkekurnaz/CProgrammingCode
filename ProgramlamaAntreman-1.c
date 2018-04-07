#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*Bu Sayfada C Dilinde Yaz�lm�� Temel 10 �rnek Bulunur.*/



/*
//C Dilinde Ekrana "Merhaba D�nya" Yazd�rma...

int main() 
{
	printf("Merhaba Dunya");
	return 0;
}
*/


/*
//Kullan�c�dan Ad Ve Soyad Al�p Merhaba Yazd�ran Program...

int main()
{
	char ad[20],soyad[20];
	printf("Adinizi Girin: ");
	scanf("%s",ad);
	printf("Soyadinizi Girin: ");
	scanf("%s",soyad);
	printf("Merhaba %s %s...Programa Hosgeldin...",ad,soyad);		
	return 0;
}
*/


/*
//Kullan�c�dan �ki Say� Al�p Toplma,��karma,B�lme,�arpma Yapan Program...

int main()
{
	int sayi1,sayi2;
	int topla = 0, cikar = 0, carp = 0, bol = 0;
	printf("Birinci Sayiyi Giriniz: ");
	scanf("%d",&sayi1);
	printf("Ikinci Sayiyi Giriniz: ");
	scanf("%d",&sayi2);
	topla=sayi1+sayi2;
	cikar=sayi1-sayi2;
	carp=sayi1*sayi2;
	bol=sayi1/sayi2;
	printf("Toplama Islemi Sonucu: %d\n",topla);
	printf("Cikarma Islemi Sonucu: %d\n",cikar);
	printf("Carpma Islemi Sonucu: %d\n",carp);
	printf("Bolme Islemi Sonucu: %d\n",bol);
	return 0;
}
*/


/*
//Kullan�c�dan Vize Ve Final Notu Al�p Durumu Bildiren Program...

int main()
{
	int vizeNot,finalNot;
	float sonuc = 0;
	printf("Vize Notunu Gir: ");
	scanf("%d",&vizeNot);
	printf("Final Notunu Gir: ");
	scanf("%d",&finalNot);
	sonuc=vizeNot*0.4+finalNot*0.6;
	if(vizeNot>=0 && vizeNot<=100 && finalNot>=0 && finalNot<=100)
	{
		printf("Not Durumunuz: %f",sonuc);
		if(sonuc>=50)
		{
			printf("\nBu Dersten Basarilisin...");
		}
		else
		{
			printf("\nMaalesef Bu Dersten Kaldin...");
		}
	}
	else
	{
		printf("Lutfen Gercek Sayi Araliklarinda Bir Sayi Gir...");
	}
	
	return 0;
}
*/


/*
//Switch-Case �zerine Basit Bir Hesap Makinesi �rne�i...

int main()
{
	int s1,s2,secim;
	float sonuc;
	printf("Birinci Sayiyi Gir: ");
	scanf("%d",&s1);
	printf("Ikinci Sayiyi Gir: ");
	scanf("%d",&s2);
	printf("Islem Tercihini Gir:('1' Toplama;'2' Cikarma;'3' Carpma;'4' Bolme;)");
	scanf("%d",&secim);
	switch(secim)
	{
		case 1: sonuc=s1+s2; printf("Sonuc: %f",sonuc); break;
		case 2: sonuc=s1-s2; printf("Sonuc: %f",sonuc); break;
		case 3: sonuc=s1*s2; printf("Sonuc: %f",sonuc); break;
		case 4: sonuc=s1/s2; printf("Sonuc: %f",sonuc); break;
		default: printf("...Gecersiz Deger..."); break;
		
	}		
	return 0;
}
*/


/*
//While D�ng�s� �le Fakt�riyel Alan Program...

int main()
{
	int sayi;
	long int fakt = 1;
	printf("Sayiyi Gir: ");
	scanf("%d",&sayi);
	while(sayi>1)
	{
		fakt = fakt * sayi;
		sayi--;
	}
	printf("%d",fakt);
	return 0;
}
*/


/*
//Fonksiyon �le Ekrana Kutu Cizdirme...

void kutu(int satir,int sutun)
{
	int sut;
	for(;satir>0;satir--)
	{
		for(sut = sutun;sut>0;sut--)
		{
			printf("#");
		}
		printf("\n");
	}
}

int main()
{
	int en,boy;
	printf("En Gir: ");
	scanf("%d",&en);
	printf("Boy Gir: ");
	scanf("%d",&boy);
	kutu(en,boy);
	return 0;
}
*/


/*
//Klavyeden Girilen 10 Say�n�n Ortalamas�n� Bulma...

int main()
{
	int i,x[10];
	float ort,toplam = 0.0;
	for(i = 0 ; i < 10 ; i++)
	{
		printf("%d. Sayi: ",(i+1));
		scanf("%d",&x[i]);
		toplam = toplam + x[i];
	}
	ort=toplam/10;
	printf("Ortalama: %f",ort);
	return 0;
}
*/


/*
//C Dilinde Sayi Art�rma Ve Azaltma ��lemleri (�niversite C Dili Derslerinde G�zel Sorular�n Geldi�i Bir B�l�m)...

int main()
{
	int sayi=0;
	sayi++; //Sayiyi 1 Art�rd�k...
	printf("%d \n",sayi); //Ekrana 1 Bast�...
	printf("%d \n",sayi++); //Sayi 1 Artt� Ama ++ De�erin Sa��nda Yer Ald��� ��in Ekrana Basmad�...
	printf("%d \n",sayi); //�st Sat�rda Bir Artt�rd���m�z ��in Ekrana 2 Bast�...  
	printf("%d \n",sayi--); //Sayi 1 Azald� Ama -- De�erin Sa��nda Yer Ald��� ��in Ekrana Basmad�...
	printf("%d \n",sayi); //Ekrana 1 Bast�...
	printf("%d \n",--sayi); //-- De�erin Solunda Yer Ald��� ��in Sayi Azal�p Hemen Ekrana Yaz�ld�...
	printf("%d \n",sayi); //Ekrana 0 Bast�...
	printf("%d \n",++sayi); //++ De�erin Solunda Yer Ald��� ��in Sayi Art�p Hemen Ekrana Yaz�ld�...
	sayi = sayi*2; //Sayiyi 2 �le �arpt�k...
	printf("%d \n",sayi); //Ekrana 2 Bast�...
	return 0;
}
*/


/*
//1 �le 10 Aras� Random Say� Olu�turma...
int main()
{
	srand(time(NULL)); //Srand kullan�lmazsa program �al��t���nda hep ayn� say� gelir...
	int deger=1+rand()%10; //Ba�taki 1 nerden ba�layaca��,sondaki 6 nereye kadar gidece�i...
	printf("Rastgele Olusturulan Deger: %d",deger);
	return 0;
}
*/

