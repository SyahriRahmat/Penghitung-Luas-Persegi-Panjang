#include<iostream>
using namespace std;
int main (){
char ulang;
int p,l,luas;
do {
cout<<"Masukkan Nilai p : ";
cin>>p;
cout<<"Masukkan Nilai l : ";
cin>>l;

//rumus luas lingkaran adalah Luas = p * l
luas=p*l;
cout<<"Maka Luas Persegi Panjang Tersebut adalah : "<<luas<<endl;

//pengulangan
cout<<"Apakah anda ingin menghitung kembali ? ";
cin>>ulang;
}while(ulang=='Y' || ulang=='y');
cout<<"Terimakasih Telah Menggunakan Aplikasi ini"<<endl;
return 0;
}
