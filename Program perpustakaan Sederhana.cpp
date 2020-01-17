#include<iostream>
#include<string.h>
using namespace std;

#define header "Program Perpustakaan Sederhana"

int main ()
{
const string psn ="Jangan Lupa Dikembalikan";
	
	struct buku
	{
        char jns[20],jdl[20];
    };
    struct siswa
    {
        char nama[20],jurusan[20];
        int nim,pilih;
        struct buku bku[20];
    };
	struct siswa s[20];
	int x,y,z,w;
	
cout<<"\t"<<"------------------------------------------------------\n";
cout<<"\t"<<"\t"<<header<<endl;
cout<<"\t"<<"------------------------------------------------------\n";
cout<<"1. Jurusan IPA"<<endl;
cout<<"2. Jurusan IPS"<<endl;
cout<<"Banyaknya Siswa Yang meminjam Buku :";cin>>y;
cout<<endl;


for(x=0;x<y;x++)
 {
    cout<<"Nama Siswa	: ";cin>>s[x].nama;
    cout<<"NIM Siswa	: ";cin>>s[x].nim;
    cout<<"Pilih Jurusan	: ";cin>>s[x].pilih;
		if(s[x].pilih==1)
		{
			strcpy(s[x].jurusan,"IPA");
		}
		else if(s[x].pilih==2)
		{
			strcpy(s[x].jurusan,"IPS");
		}
	awal:
    cout<<"Masukkan Jumlah Buku : ";cin>>w;
    cout<<endl;
    {
     for(z=0;z<w;z++)
        {
        cout<<"--------------------------"<<endl;
        cout<<"Jenis Buku	: ";cin>>s[x].bku[z].jns;
        cout<<"Judul Buku	: ";cin>>s[x].bku[z].jdl;
        cout<<"--------------------------"<<endl;
        }
    	cout<<endl;
    }
 }
cout<<"----------------------------------------------------------\n";
cout<<"Nama"<<"\t"<<"NIM"<<"\t"<<"Jurusan Kelas"<<"\t"<<"Jenis Buku"<<"\t"<<"Judul Buku"<<endl;
cout<<"----------------------------------------------------------\n";

x=0;
while (x<y)
    {
    cout<<s[x].nama<<"\t"<<s[x].nim<<"\t     "<<s[x].jurusan;
    	{z=0;
    	while(z<w)
    	{
    	cout<<"\t"<<s[x].bku[z].jns<<"\t\t"<<s[x].bku[z].jdl<<endl<<"\t\t\t";
    	z++;}
		}
		cout<<endl;
		cout<<"----------------------------------------------------------\n";
	x++;}
cout<<psn<<endl;

}
