#include <iostream>

using namespace std;

/*Kullanicidan �ki Sayi Alan Ve Bu �ki Sayi Aras�ndaki B�t�n Sayilari Toplayip Ekrana Yazd�ran Program...*/

class sayiToplama
{
	public:
		void deger_aktar(int x,int y)
		{
			baslangic = x;
			bitis = y;		
		}
		int topla()
		{
			int i,sonuc = 0;
			for(i=baslangic;i<=bitis;i++)
			{
				sonuc = sonuc + i;	
			}	
			return sonuc;
		}	
	protected:
		int baslangic,bitis;	
};

int main() 
{
	sayiToplama SayiToplama;
	int s1,s2;
	
	cout<<"Baslangic Sayisini Giriniz : ";
	cin>>s1;
	
	cout<<"Bitis Sayisini Giriniz : ";
	cin>>s2;
	
	SayiToplama.deger_aktar(s1,s2);
	
	cout<<"Sayilarin Toplami : "<<SayiToplama.topla();
	
	return 0;
}
