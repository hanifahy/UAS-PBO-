#include <iostream>
using namespace std;
int main()
{   int pi, p, i, r, volume, luas;

pi =(22/7);
cout<<"=== Menghitung Bangun Tabung ==="<<endl;
cout<<"Diketahui : ";
cout<<"panjang : ";
cin>>p;
cout<<"lebar : ";
cin>>i;
cout<<"jari-jari : ";
cin>>r;
cout<<"Ditanya : ";
cout<<"luas selimut";
cout<<"volume tabung";
cout<<"Penyelesaian"<<endl;
volume=pi*r*r*p;
luas= p*i;
cout<<"luas selimut = panjang x lebar : ";
cout<<"luas tabung panjang "<<p<<" * Lebar "<<i<<" adalah : "<<luas;
cout<<"volume tabung = pi * jari * jari * lebar : ";
cout<<"volume tabung "<<pi<<" *  "<<r<<" * "<<r<<" * "<<r<<" * "<<r<<"adalah : "<<volume;

return 2;
}

