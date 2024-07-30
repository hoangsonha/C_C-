#include<iostream>
using namespace std;
main() {
	char tieptuc;
	do {
		 cout<<"Chuong trinh chay tu 1 toi 3";
    int n;
    do {
    cout<<"\nNhap n: ";
    cin>>n;
    } while(n<1 || n>3);
    switch(n) {
        case 1: {
            cout<<"So mot";
            break;
        }
        case 2: {
            cout<<"So hai";
            break;
        }
        case 3: {
            cout<<"So ba";
            break;
        }
        default: {
            cout<<"Khong doc duoc";
            break;
        }
    }
    cout<<"ban co muon tiep tuc khong (Y/N)?";
    cin>>tieptuc;
	}
	
	while(tieptuc == 'Y' || tieptuc== 'y');
   
}  