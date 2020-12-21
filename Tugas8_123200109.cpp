#include <iostream>
using namespace std;

void b();
float luas(int x);
float kel(int y);
float vol(int a, int b);
int main()
{
	short pilih1;
	int jar,ting;
	string pilih2;
	do{
	cout <<"Hitung Lingkaran "; b();
	cout <<"1.Luas Lingkaran\n2.Keliling Lingkaran\n3.Volume Tabung\n";
	cout <<"Pilih: "; cin >> pilih1;
	switch(pilih1){
		case 1 :
			cout <<"Jari - jari	    : ";cin>>jar;
			cout <<"Luas Lingkaran adalah "<<luas(jar)<<endl;
			break;
		case 2 :
			cout <<"Jari - jari 	: ";cin>>jar;
			cout <<"Keliling Lingkaran adalah "<<kel(jar)<<endl;
			break;
		case 3 :
			cout <<"Jari - jari 	: ";cin>>jar;
			cout <<"Tinggi 		    : ";cin>>ting;
			cout <<"Volume Tabung adalah "<<vol(jar,ting)<<endl;
			break;
	}
	cin.ignore();
	cout <<"Ulangi program? (y/n) ";cin>>pilih2;
	cout <<endl;
	}while(pilih2 == "y" || pilih2 == "Y");
	cout << "Program selesai, Terima kasih :)\n\n";
	system("pause");
	return 0;
}
void b(){
	cout<<"=========="<<endl;
}
float luas(int x){
	float luas;luas = 3.14 * x * x;
	return luas;
}
float kel(int y){
	float kel;kel = 3.14 * 2 * y;
	return kel;
}
float vol(int a, int b){
	float volumeling;volumeling = 3.14 * a * a * b;
	return volumeling;
}