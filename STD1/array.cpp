#include<iostream>
using namespace std;
char menumakan [6][15] =
{"Nasgor","Lengko","Pecel","Batagor","Soto","Capcay"};
int n;
int main()
{
	for (n=0 ; n<6 ; n++)
{
	cout <<"Masukan urutan daftar menumakan : ";
	cin>> n;
	cout <<"Nama makanan tersebut adalah :"<<menumakan[n];
	cout << "\n";
}
	return 0;
}
