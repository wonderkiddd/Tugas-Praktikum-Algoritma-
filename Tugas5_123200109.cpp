#include <iostream>
using namespace std;

int main()
{
	int pilih1,q;
	cout<<" =====Gambar Bangun Datar=====" << endl;
	cout<<" 1. Kotak bolong"<<endl;
	cout<<" 2. Segitiga"<<endl;
	cout<<" Pilih : "; cin>>pilih1;
	cout<<endl;

	switch(pilih1){
		case 1 :
			int p, l;
			cout<< " Panjang : "; cin >> p;
			cout<< " Lebar : "; cin >> l;
			for(int i = 1; i <= p; i++){
				cout<< " ";
				for(int j = 1; j <= l; j++){
					if(i == 1 || i == p || j == 1 || j == l){
						cout<<"* ";
					}else{
						cout<<"  ";
					}
				}
				cout << endl;
			}
			break;
		case 2 :
			cout<<"Tinggi : ";cin>>q;
			for (int j = 1; j <= q; j++){
				int x = 1;
				int y = j;
				cout << " ";
				for (int k = 1; k <= j; k++){
					cout<<y<<" ";
					y = y+(q-x);
					x++;
				}
			cout<<"\n";
			}
			break;
	}
	cin.get();
	cin.get();
	return 0;
}