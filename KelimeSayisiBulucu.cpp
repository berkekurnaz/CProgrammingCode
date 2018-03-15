#include <iostream>

using namespace std;

int main() 
{
	char paragraf[100];
	int kelimeSayisi=1 , i;
	
	cout<<"Kelime Sayisini Bulmak Istediginiz Paragrafi Girin:";
	gets(paragraf);
	
	for(i=0;paragraf[i]!='\0';i++)
	{
		if(paragraf[i] == ' ')
		{
			kelimeSayisi++;
		}
	}
	
	cout<<"Paragraftaki Toplam Kelime Sayisi: "<<kelimeSayisi; 
	
	return 0;
}
