#include <iostream>
#include <string>

using namespace std;

#include "Disk.cpp"
#include "Ram.cpp"
#include "Processor.cpp"
#include "Pc.cpp"

int main(){
    int priceP, priceR, priceD, capacityD, capacityR, Totalprice;
    string nameP, typeD;

    int n;
    cout << "Masukan banyaknya barang : " ;
    cin >> n;

    Pc item[n];

    int i;
    for(i = 0; i < n; i++){
        cout << "-------------------------" << endl;
		cout << " Barang Ke - " << i+1 << endl << endl;
        cout << "   +PROCESSOR+" << endl;
        cout << "Masukan Nama Processor  : ";
        cin >> nameP;
        cout << "Masukan Harga Processor : ";
		cin >> priceP;

        cout << endl <<"   +DISK+" << endl;
		cout << "Masukan Jenis Disk     : ";
		cin >> typeD;
		cout << "Masukan Kapasitas Disk : ";
		cin >> capacityD;
		cout << "Masukan Harga Disk     : ";
		cin >> priceD;

        cout << endl <<"   +RAM+" << endl;
		cout << "Masukan Kapasitas Ram : ";
		cin >> capacityR;
		cout << "Masukan Harga Ram     : ";
		cin >> priceR;
		cout << endl << endl;


        Processor p(priceP, nameP);
        Disk d(priceD, capacityD, typeD);
        Ram r(priceR, capacityR);

        item[i].setProc(p);
        item[i].setDisk(d);
        item[i].setRam(r);
        item[i].setTPrice(p, d , r);

    }

    cout << endl << "=========================" << endl;
	cout << "     DATA BARANG" << endl << endl;

    for (i = 0; i < n; i++) {

        cout <<"== Barang Ke - " << i+1 << endl << endl;
        item[i].printPC();
        cout << "------------------------------- +" << endl ;
        cout << " TOTAL HARGA         : " << item[i].getTprice() << endl << endl;
        }  

     cout << "    PROGRAM SELESAI" << endl;
     cout << "=========================" << endl;
    return 0;
}