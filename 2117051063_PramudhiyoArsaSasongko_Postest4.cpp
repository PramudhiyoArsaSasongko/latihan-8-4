#include<iostream>
using namespace std;

int main(){
 	/* Nama : Pramudhiyo Arsa Sasongko
	   Npm  : 2117051063
	   Kelas: B, ILKOM21*/
	
	//int dan float    
	int x;
	float jumlah=0;
	float hari,rata2,usd;
	
	//input
	cout<<"Masukkan Jumlah hari : ";cin>>hari;
	cout<<"Masukkan Jumlah Etherum (space per hari) : ";
	    for(x=0; x<hari; x++){
	    float pembelian[x];
	    cin>>pembelian[x];
	    jumlah+=pembelian[x];
	    
	}
	rata2=jumlah/hari;
	usd=jumlah*4000;
	
	//output
	cout<<"Rata-rata		: "<<rata2<<" ETH"<<endl;
	cout<<"Jumlah ETH 		: "<<jumlah<<" ETH"<<endl;
	cout<<"Konversi ke USD 	: $"<<usd<<endl;
	return 0;
	
}

