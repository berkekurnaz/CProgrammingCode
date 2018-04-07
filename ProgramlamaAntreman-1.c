#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*Bu Sayfada C Dilinde Yazýlmýþ Temel 10 Örnek Bulunur.*/



/*
//C Dilinde Ekrana "Merhaba Dünya" Yazdýrma...

int main() 
{
	printf("Merhaba Dunya");
	return 0;
}
*/


/*
//Kullanýcýdan Ad Ve Soyad Alýp Merhaba Yazdýran Program...

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
//Kullanýcýdan Ýki Sayý Alýp Toplma,Çýkarma,Bölme,Çarpma Yapan Program...

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
//Kullanýcýdan Vize Ve Final Notu Alýp Durumu Bildiren Program...

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
//Switch-Case Üzerine Basit Bir Hesap Makinesi Örneði...

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
//While Döngüsü Ýle Faktöriyel Alan Program...

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
//Fonksiyon Ýle Ekrana Kutu Cizdirme...

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
//Klavyeden Girilen 10 Sayýnýn Ortalamasýný Bulma...

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
//C Dilinde Sayi Artýrma Ve Azaltma Ýþlemleri (Üniversite C Dili Derslerinde Güzel Sorularýn Geldiði Bir Bölüm)...

int main()
{
	int sayi=0;
	sayi++; //Sayiyi 1 Artýrdýk...
	printf("%d \n",sayi); //Ekrana 1 Bastý...
	printf("%d \n",sayi++); //Sayi 1 Arttý Ama ++ Deðerin Saðýnda Yer Aldýðý Ýçin Ekrana Basmadý...
	printf("%d \n",sayi); //Üst Satýrda Bir Arttýrdýðýmýz Ýçin Ekrana 2 Bastý...  
	printf("%d \n",sayi--); //Sayi 1 Azaldý Ama -- Deðerin Saðýnda Yer Aldýðý Ýçin Ekrana Basmadý...
	printf("%d \n",sayi); //Ekrana 1 Bastý...
	printf("%d \n",--sayi); //-- Deðerin Solunda Yer Aldýðý Ýçin Sayi Azalýp Hemen Ekrana Yazýldý...
	printf("%d \n",sayi); //Ekrana 0 Bastý...
	printf("%d \n",++sayi); //++ Deðerin Solunda Yer Aldýðý Ýçin Sayi Artýp Hemen Ekrana Yazýldý...
	sayi = sayi*2; //Sayiyi 2 Ýle Çarptýk...
	printf("%d \n",sayi); //Ekrana 2 Bastý...
	return 0;
}
*/


/*
//1 Ýle 10 Arasý Random Sayý Oluþturma...
int main()
{
	srand(time(NULL)); //Srand kullanýlmazsa program çalýþtýðýnda hep ayný sayý gelir...
	int deger=1+rand()%10; //Baþtaki 1 nerden baþlayacaðý,sondaki 6 nereye kadar gideceði...
	printf("Rastgele Olusturulan Deger: %d",deger);
	return 0;
}
*/

