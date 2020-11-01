#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
int main()
{
	string uname,matkul;
	long pass;
	short pilihan;
	float harian,uts,uas,total;
	
	cout<<"Login Akun ================"<<endl;
	cout<<"Username\t= ";getline(cin,uname);
	cout<<"Password\t= ";cin>>pass;
	cout<<"==========================="<<endl<<endl;

	if ((uname=="agil123") && (pass==123200109)){
			cout<<"Login Berhasil !"<<endl;
			cout<<"Input Nilai Mata Kuliah : "<<endl;
		    cout<<"1. Algoritma dan Pemrograman"<<endl;
		    cout<<"2. Kalkulus"<<endl;
		    cout<<"\nPilih\t";cin>> pilihan;

		    switch(pilihan){
		    	case 1:
		    	matkul= "Algoritma dan Pemrograman";

		    	cout<<"\nNilai Harian\t: ";cin>> harian;
		    	cout<<"Nilai UTS\t: ";cin>>uts;
		    	cout<<"Nilai UAS\t: ";cin>>uas;

		    	total=((harian+uts+uas)/3);

		    	if(total >= 80){
		    		cout<<"\nSelamat Anda lulus "<<matkul;
		    		cout<<" dengan nilai "<<setprecision(3)<<total;}
		    		else{
		    			cout<<"\n Anda tidak lulus "<<matkul;
		    			cout<<" dengan nilai "<<setprecision(3)<<total<<endl;}
		    			break;

		        case 2:
		        matkul = "Kalkulus";

		        cout<<"\nNilai Harian\t: ";cin>>harian;
		        cout<<"Nilai UTS\t: ";cin>>uts;
		        cout<<"Nilai UAS\t: ";cin>>uas;

		        total= ((harian+uts+uas)/3);  

		            if (total>= 80){
		            	cout<<" dengan nilai "<<setprecision(3)<<total;}
		            else{
		            	cout<<"Anda tidak lulus "<<matkul;
		            	cout<<" dengan nilai "<< setprecision(3)<<total<<endl;}
		        break;
		    default:
		        cout<<"Periksa kembali input yang anda masukkan"<<endl;
		        break;}
    }else if(uname=="agil123" && pass!=123200109){
    	cout<<"Password yang anda masukkan salah!"<<endl;
    }else if(uname!="agil123" && pass==123200109){
    	cout<<"Username yang anda masukkan salah!"<<endl;
    }else{
    	cout<<"Username dan Password yang anda masukkan salah!"<<endl;
    }
    system("pause");
cin.get();
cin.get();
	return 0;
}
