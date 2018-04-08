#include <iostream>

using namespace std;

/*Bu Sayfada C++ Ile Yazýlmis Temel Ornekler Ve Nesneye Yonelik Programlama Ornekleri Bulunur...*/



/*
//Ornek-1 : C++ Ekrana Yazi Yazdirma...

int main() 
{
	cout<<"C++ Ile Nesneye Yonelik Programlama Ornekleri";
	return 0;
}
*/


/*
//Ornek-2 : C++ Basit Hesap Makinesi...

int main() 
{
	int s1,s2;
	float toplam,fark,carpim,bolum;
	cout<<"1.Sayiyi Giriniz: ";
	cin>>s1;
	cout<<"2.Sayiyi Giriniz: ";
	cin>>s2;
	toplam = s1 + s2;
	fark = s1 - s2;
	carpim = s1 * s2;
	bolum = s1 / s2;
	cout<<"\n Toplam : "<<toplam;
	cout<<"\n Fark : "<<fark;
	cout<<"\n Carpim : "<<carpim;
	cout<<"\n Bolum : "<<bolum;
	return 0;
}
*/


/*
//Ornek-3 : C++ Girilen Sayinin Tek Veya Cift Kontrolu Yapma...

int main() 
{
	setlocale(LC_ALL,"Turkish"); 
	int sayi;
	cout<<"Sayýyý Gir: ";
	cin>>sayi;
	if(sayi%2 == 0)
	{
		cout<<"Girdiðin Sayý Çifttir...";
	}
	else
	{
		cout<<"Girdiðin Sayý Tektir...";
	}
	return 0;
}
*/


/*
//Ornek-4 : C++ Siniflara Giris(Kup Hacim Bulma Ornegi)...

class kup
{
	public:
		double kenar;	
};

int main() 
{
	kup Kup;
	double hacim;
	cout<<"Kupun Bir Kenarinin Uzunlugu: ";
	cin>>Kup.kenar;
	hacim = Kup.kenar * Kup.kenar * Kup.kenar;
	cout<<"Kup Hacim: "<<hacim;
	
	
	return 0;
}
*/


/*
//Ornek-5 : C++ Siniflara Giris-2...

class insan
{
	public:
		char ad[20] = "Berke";
		char soyad[20] = "Kurnaz";
		int yas = 19;
		int boy = 186;
		int kilo = 78;	
};

int main() 
{
	insan Insan;
	cout<<" Insan Adi: "<<Insan.ad;
	cout<<"\n Insan Soyadi: "<<Insan.soyad;
	cout<<"\n Insan Yasi: "<<Insan.yas;
	cout<<"\n Insan Boyu: "<<Insan.boy;
	cout<<"\n Insan Kilosu: "<<Insan.kilo;
	return 0;
}
*/


/*
//Ornek-6 : C++ Nesneye Yönelik Programlama Ýle Ucgen Cesidi Bulma...

class ucgen
{
	public:
		void aciAyarla(int a,int b,int c)
		{
			aci1 = a;
			aci2 = b;
			aci3 = c;		
		}	
		void ucgenCesidi()
		{
			if(aci1 < 90 && aci2 < 90 && aci3 < 90)
			{
				cout<<"Dar Açýlý Üçgen";
			}
			if(aci1 == 90 || aci2 == 90 || aci3 == 90)
			{
				cout<<"Dik Açýlý Üçgen";
			}
			if(aci1 > 90 || aci2 > 90 || aci3 > 90)
			{
				cout<<"Geniþ Açýlý Üçgen";
			}
		}
	protected:
		int aci1,aci2,aci3;	
};

int main() 
{
	setlocale(LC_ALL,"Turkish"); 
	ucgen Ucgen;
	int a1,a2,a3;
	cout<<"Üçgenin Açýlarýný Giriniz:\n";
	cout<<"1.Açý Deðeri: ";
	cin>>a1;
	cout<<"2.Açý Deðeri: ";
	cin>>a2;
	cout<<"3.Açý Deðeri: ";
	cin>>a3;
	while(a1+a2+a3 != 180)
	{
		cout<<"Üçgenin Ýç Açýlarý Toplamý 180 Derece Olmak Zorundadýr...Açý Deðerlerini Tekrar Giriniz...";
		cout<<"1.Açý Deðeri: ";
		cin>>a1;
		cout<<"2.Açý Deðeri: ";
		cin>>a2;
		cout<<"3.Açý Deðeri: ";
		cin>>a3;
	}
	Ucgen.aciAyarla(a1,a2,a3);
	Ucgen.ucgenCesidi();
	return 0;
}
*/


/*
//Ornek-7 : C++ Nesneye Yönelik Programlama Ýle Daire Alaný Ve Cevresi Hesaplama...

class daire
{
	private:
		double pi = 3.14;
	public:
		double r;
		double alan(double r)
		{
			return pi*r*r;
		}	
		double cevre(double r)
		{
			return 2*pi*r;	
		}	
};

int main() 
{
	daire Daire;
	cout<<"Yaricap Giriniz: ";
	cin>>Daire.r;
	cout<<"\n Daire Alan: "<<Daire.alan(Daire.r);
	cout<<"\n Daire Cevre: "<<Daire.cevre(Daire.r);
	return 0;
}
*/


/*
//Ornek-8 : C++ Nesneye Yönelik Programlama Ile Futbol Takimi Puan Hesaplama...

class takim
{
	public:
		void aktar(int x)
		{
			galibiyet = x;
		}
		int puanHesapla()
		{
			puan = galibiyet * 3;
			return puan;
		}
	protected:
		int galibiyet , puan;	
};

int main()
{
	takim Takim;
	int galibiyetSayisi;
	cout<<"Takimin Sezon Boyunca Kazandigi Mac Sayisi: ";
	cin>>galibiyetSayisi;
	Takim.aktar(galibiyetSayisi);
	cout<<"Bu Sezon Kazanilan Puan: "<<Takim.puanHesapla();
	return 0;
}
*/


/*
//Ornek-9 : C++ Nesneye Yönelik Programlama Constructor Ornegi...

class ev
{
	public:
		int metrekare,fiyat;
	public:
		ev();
		ev(int,int);		
};

ev::ev()
{
	metrekare = 80;
	fiyat = 300000;
}

ev::ev(int m,int f)
{
	metrekare = m;
	fiyat = f;
}

int main()
{
	ev Ev1;
	cout<<"Metrekare : "<<Ev1.metrekare<<" - Fiyat : "<<Ev1.fiyat<<"\n";
	ev Ev2(120,480000);
	cout<<"Metrekare : "<<Ev2.metrekare<<" - Fiyat : "<<Ev2.fiyat<<"\n";
	return 0;
}
*/


/*
//Ornek-10 : C++ Nesneye Yönelik Programlama Kalitim Ýle Dikdortgen,Kare Ve Ucgen Alani Hesaplama Ornegi...

class cokgen
{
	public:
		void genislikAyarla(int w)
		{
			genislik = w;
		}	
		void yukseklikAyarla(int h)
		{
			yukseklik = h;
		}
	protected:
		int genislik,yukseklik;	
};

class dikdortgen : public cokgen 
{
	public:
		int dikdortgenAlanHesapla()
		{
			return (genislik*yukseklik);
		}
};

class kare : public cokgen
{
	public:
		int kareAlanHesapla()
		{
			return (genislik*genislik);	
		}	
};

class ucgen : public cokgen
{
	public:
		int ucgenAlanHesapla()
		{
			return (genislik*yukseklik)/2;
		}
};

int main()
{
	dikdortgen Dikdortgen;
	kare Kare;
	ucgen Ucgen;
	int secim,genislik,yukseklik;
	cout<<"Dikdortgen Icin '1' , Kare Icin '2' , Ucgen Icin '3' Tusuna Basiniz...";
	cin>>secim;
	if(secim == 1)
	{
		cout<<"Dikdortgen Genislik Giriniz: ";
		cin>>genislik;
		cout<<"Dikdortgen Yukseklik Giriniz: ";
		cin>>yukseklik;
		Dikdortgen.genislikAyarla(genislik);
		Dikdortgen.yukseklikAyarla(yukseklik);
		cout<<"Dikdortgen Alan: "<<Dikdortgen.dikdortgenAlanHesapla();
	}
	else if(secim == 2)
	{
		cout<<"Kare Bir Kenar Uzunlugu Giriniz: ";
		cin>>genislik;
		Kare.genislikAyarla(genislik);
		cout<<"Kare Alan: "<<Kare.kareAlanHesapla();
	}
	else if(secim == 3)
	{
		cout<<"Ucgen Genislik Giriniz: ";
		cin>>genislik;
		cout<<"Ucgen Yukseklik Giriniz: ";
		cin>>yukseklik;
		Ucgen.genislikAyarla(genislik);
		Ucgen.yukseklikAyarla(yukseklik);
		cout<<"Ucgen Alan: "<<Ucgen.ucgenAlanHesapla();
	}
	else
	{
		cout<<"Hatali Giris Gerceklesti...";
	}
	return 0;
}
*/


/*
//Ornek-11 : C++ Nesneye Yönelik Programlama Kalitim Ile Urun Sayisi Ve Fiyat Belirleyerek Toplam Tutar Hesaplama Ornegi...

class fiyat
{
	public:
		void fiyatMiktari(int f)
		{
			fiyat = f;
		}
	protected:
		int fiyat;	
};

class adet
{
	public:
		void adetSayisi(int a)
		{
			adet = a;
		}
	protected:
		int adet;		
};

class toplamFiyat : public fiyat , public adet
{
	public:
		int fiyatHesapla()
		{
			return (fiyat*adet);	
		}	
};

int main()
{
	toplamFiyat ToplamFiyat;
	int fiyat,adet;
	cout<<"Urunun Fiyatini Giriniz: ";
	cin>>fiyat;
	cout<<"Urunun Adetini Giriniz: ";
	cin>>adet;
	ToplamFiyat.fiyatMiktari(fiyat);
	ToplamFiyat.adetSayisi(adet);
	cout<<"Odenecek Toplam Tutar: "<<ToplamFiyat.fiyatHesapla();
	return 0;
}
*/


/*
//Ornek-12 : C++ Nesneye Yönelik Programlama Cok Bicimlilik(Polymorphism) Örneði...

class hayvanlar
{
	public:
		virtual void tur() = 0;
};

class aslan : public hayvanlar
{
	public:
		void tur()
		{
			cout<<"Aslan...\n";	
		}	
};

class kurt : public hayvanlar
{
	public:
		void tur()
		{
			cout<<"Kurt...\n";	
		}	
};

class maymun : public hayvanlar
{
	public:
		void tur()
		{
			cout<<"Maymun...\n";	
		}	
};

class kaplumbaga : public hayvanlar
{
	public:
		void tur()
		{
			cout<<"Kaplumbaga...\n";	
		}	
};

int main()
{
	aslan Aslan;
	kurt Kurt;
	maymun Maymun;
	kaplumbaga Kaplumbaga;
	Aslan.tur();
	Kurt.tur();
	Maymun.tur();
	Kaplumbaga.tur();
	return 0;
}
*/


/*
//Ornek-13 : C++ Nesneye Yönelik Programlama Overloading Ornegi...

class topla
{
	float sayi;
	public:
		topla(int a)
		{
			sayi = a + a;
		}
		topla(double b)
		{
	    	sayi = b + b;
		}
		topla(int c,int d)
		{
			sayi = c + d;
		}
		float dondur()
		{
			return sayi;
		}
};

int main()
{
	topla t1(5);
	topla t2(5.0);
	topla t3(5,10);
	cout<<"Birinci Topla Fonksiyonu: "<<t1.dondur()<<"\n";
	cout<<"Ikinci  Topla Fonksiyonu: "<<t2.dondur()<<"\n";
	cout<<"Ucuncu  Topla Fonksiyonu: "<<t3.dondur()<<"\n";
	return 0;
}
*/












