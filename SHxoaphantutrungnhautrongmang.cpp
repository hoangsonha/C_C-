#include<iostream>
using namespace std;
void nhapmang(int ha[10], int &n) {
    cout<<"Nhap phan tu N : ";
    cin>>n;
    for(int i=0; i<n; i++) {
        cout<<"\nha["<<i<<"] = ";
        cin>>ha[i];
    }
}
void xuatmang(int ha[10], int n) {
    for(int i=0; i<n; i++) {
        cout<<"\nha["<<i<<"] = "<<ha[i];
    }
}
void xoaphantu(int ha[10], int &n, int &location) {
    for(int i=location; i<n ; i++) {
        ha[i] = ha[i+1];                    //  giá trị ở i = giá trị sau +1 vì nó đè lên vị trí trước nên vị trí trước = vị trí sau.
    }
    n--;
}
void xoaphantutrungnhau(int ha[10], int &n) {
    for(int i=0 ; i<n ; i++) {           //  do phần tử cuối cùng là phân biệt hết vs cái khác r lên k cần xét nữa!!!
        for(int j=i+1; j<n; j++) {
            if(ha[i]==ha[j]) {
                xoaphantu(ha,n,j);
                i--;
            }
        }
    }
}

main() {
    int ha[10], n;
    nhapmang(ha,n);
    xuatmang(ha,n);

    cout<<"\nSau khi xu li : ";

    xoaphantutrungnhau(ha,n);

    
    
    xuatmang(ha,n);

}