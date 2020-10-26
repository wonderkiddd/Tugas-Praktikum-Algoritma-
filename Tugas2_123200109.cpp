#include <iostream>
using namespace std;

int main()
{
	int umur_ayah,umur_ibu,umur_anak1,umur_anak2;
	int tagihan_ayah,tagihan_ibu,tagihan_anak1,tagihan_anak2,tagihantotal;

	cout<<"Umur Ayah\t= ";
	cin>>umur_ayah;
	cout<<"Umur Ibu\t= ";
	cin>>umur_ibu;
	cout<<"Umur Anak1\t= ";
	cin>>umur_anak1;
	cout<<"Umur Anak2\t= ";
	cin>>umur_anak2;

	if(umur_ayah <= 12){tagihan_ayah=15000*30;}
	else if((umur_ayah > 12) && (umur_ayah <= 20)){tagihan_ayah=20000*30;}
	else if(umur_ayah > 20){tagihan_ayah=30000*30;}

	if(umur_ibu <= 12){tagihan_ibu=15000*30;}
	else if((umur_ibu > 12) && (umur_ibu <= 20)){tagihan_ibu=20000*30;}
	else if(umur_ibu > 20){tagihan_ibu=30000*30;}
	
	if(umur_anak1 <= 12){tagihan_anak1=15000*30;}
	else if((umur_anak1 > 12) && (umur_anak1 <= 20)){tagihan_anak1=20000*30;}
	else if(umur_anak1 > 20){tagihan_anak1=30000*30;}

	if(umur_anak2 <= 12){tagihan_anak2=15000*30;}
	else if((umur_anak2 > 12) && (umur_anak2 <= 20)){tagihan_anak2=20000*30;}
	else if(umur_anak2 > 20){tagihan_anak2=30000*30;}

	tagihantotal=(tagihan_ayah+tagihan_ibu+tagihan_anak1+tagihan_anak2);
	cout<<"Tagihan satu bulan adalah Rp "<<tagihantotal<<endl;

	cin.get();
	cin.get();
	return 0;
}