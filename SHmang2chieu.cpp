#include<iostream>
using namespace std;
#define row 3
#define col 3
#include<ctime>
#include<cstdlib>
main() {
    int ha[row][col] = {
        {1},
        {4,5},
        {7,8,9}
    };
    int may[row][col] = {};     //  co = hay k cung dc

    may[0][0] = 69;
    may[2][1] = 96;

    for(int i=0; i<row;i++) {
        for(int j=0; j<col; j++) {
            cout<<may[i][j]<<"\t";
        }
        cout<<endl; 
    }

    cout<<"\nGan gia tri cho mang 2 chieu : ";
    for(int i=0; i<row; i++) {
        for(int j=0; j<col; j++) {
            cout<<"\n"<<"ha["<<i<<"]["<<j<<"] = ";
            
            cin>>ha[i][j];
        }
    }

    for(int i=0; i<row;i++) {
        for(int j=0; j<col; j++) {
            cout<<ha[i][j]<<"\t";
        }
        cout<<endl; 
    }


    srand(time(NULL));
    for(int i=0; i<row;i++) {
        for(int j=0; j<col; j++) {
            ha[i][j] = rand() % 100 + 1;
        }
        cout<<endl; 
    }

    for(int i=0; i<row;i++) {
        for(int j=0; j<col; j++) {
            cout<<ha[i][j]<<"\t";
        }
        cout<<endl; 
    }

    cout<<"\nNhap so dong va so cot : ";
    cout<<"\n\tNhap so dong : ";
    int dong;
    cin>>dong;
    cout<<"\n\tNhap so cot : ";
    int cot;
    cin>>cot;
    srand(time(NULL));
    for(int i=0; i<dong;i++) {
        for(int j=0; j<cot; j++) {
            ha[i][j] = rand() % 100 + 1;
        }
        cout<<endl; 
    }

    for(int i=0; i<dong;i++) {
        for(int j=0; j<cot; j++) {
            cout<<ha[i][j]<<"\t";
        }
        cout<<endl; 
    }

}