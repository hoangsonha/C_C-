#include<iostream>
using namespace std;
main() {
    int ha[100];
    int n;
    cout<<"Nhap so phan tu cua mang : ";
    cin>>n;
    
    for(int i=0; i<n; i++) {
        cout<<"\nha["<<i<<"] = ";
        cin>>ha[i];
        
        
    }
    
    for(int i=0; i<n; i++) {
        
        cout<<"\n"<<"ha["<<i<<"] = "<<ha[i];
        }

    cout<<"\nSau khi sap xep theo thu tu tang : ";

    for(int i=0; i<n;i++) {
        for(int j= i+1; j<n;j++) {
            if(ha[i]>ha[j]) {
                int temp = ha[i];
                ha[i] = ha[j];
                ha[j] = temp;
            }
        }
    }
    
    for(int i=0; i<n; i++) {
        
        cout<<"\n"<<"ha["<<i<<"] = "<<ha[i];
        }

    cout<<"\nSau khi sap xep theo thu tu giam : ";
    for(int i=0; i<n;i++) {
        for(int j= i+1; j<n;j++) {
            if(ha[i]<ha[j]) {
                int temp = ha[i];
                ha[i] = ha[j];
                ha[j] = temp;
            }
        }
    }
    
    for(int i=0; i<n; i++) {
        
        cout<<"\n"<<"ha["<<i<<"] = "<<ha[i];
        }

}