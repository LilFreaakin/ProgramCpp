#include <iostream>
#include <string>
using namespace std;


struct mahasiswa{
		string nama;
		string jurusan;
		float ipk;
		
};


int main(){
		mahasiswa mhs;
		mhs.nama="Muhammad Afiif Yuniardhi";
		mhs.jurusan="Teknik Informatika";
		mhs.ipk=3.42;
		
		
		cout<<"DATA MAHASISWA"<<endl;
		cout<<"--------------------"<<endl;
		cout<<"Nama : "<<mhs.nama<<endl;
		cout<<"IPK : "<<mhs.ipk<<endl; return 0;
		
}
