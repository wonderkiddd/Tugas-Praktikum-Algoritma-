#include <iostream>
#include <string>
using namespace std;

int main()
{
	int hasil_uts;
	int hasil_uas;
	int rata_rata;
	string nama;
	int nim;

	cout<<"Nama =";
	getline(cin,nama);
	cout<<"Nim = ";
	cin>>nim;
	cout<<"Nilai UTS = ";
	cin>>hasil_uts;
	cout<<"Nilai UAS = ";
	cin>>hasil_uas;
	rata_rata=((hasil_uts+hasil_uas)/2);
    cout<<"Hai nama saya "<<nama<<", nim "<<nim<<endl;
    cout<<"Nilai akhir saya "<<rata_rata<<endl;
    cin.get();
    cin.get();
	return 0;
} 
