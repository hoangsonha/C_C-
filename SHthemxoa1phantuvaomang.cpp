#include<iostream>
using namespace std;
void nhapmang(int ha[10], int &n) {
    for(int i=0;i<n;i++) {
        cout<<"ha["<<i<<"] = ";
        cin>>ha[i];
    }
}
void xuatmang(int ha[10], int n) {
    for(int i=0; i<n;i++) {v
        cout<<"\n"<<"ha["<<i<<"] = "<<ha[i];
    }
}
void themphantu(int ha[10], int &n, int value, int location) {  // n thay đổi nên cần lưu n (tham chiếu)
    for(int i=n; i>location; i--) {
        ha[i] = ha[i-1];
    }
    ha[location] = value;   // gán phần tử value vào vị trí cần thêm.
    n++;  // số luọng phần tử mảng tăng lên 1 đơn vị
    
}
void xoaphantu(int ha[10], int &n, int location) {
    for(int i=location; i<n -1 ; i++) {
        ha[i] = ha[i+1];                    //  giá trị ở i = giá trị sau +1 vì nó đè lên vị trí trước nên vị trí trước = vị trí sau.
    }
        n--;
    

}
void xoaphantutheogiatri(int ha[10], int &n, int valuebixoa) {
    cout<<"Nhap value can xoa : ";
    cin>>valuebixoa;
    for(int i=0; i<n; i++) {
        if(ha[i]==valuebixoa) {
            
            xoaphantu(ha,n,i);    //  vị trí xoá là vị trí thú i ( ta đứng chỗ nào ta xoá chỗ đó)
        }
    }
}
main() {
    int ha[10];
    int n;
    int location, value;
    int valuebixoa;
    do {
    cout<<"\nNhap so phan tu N : ";
    cin>>n;
        if(n>10 || n <= 0) {
            cout<<"Khong hop le !!!";
        }
    } while(n>10 || n<=0);

    cout<<"\n\t\tNhap mang : "<<endl;
    nhapmang(ha,n);
    
    cout<<"\n\t\tXuat mang : "<<endl;
    xuatmang(ha,n);

    cout<<"\n\t\tThem phan tu : ";
    cout<<"\n\tNhap gia tri cua phan tu muon them : ";
    cin>>value;
    cout<<"\n\tNhap vi tri cua value can them vao [ ]: ";
    cin>>location;
    

    themphantu(ha,n,value,location);

    cout<<"\nSau khi them phan tu : ";
    xuatmang(ha,n);

    cout<<"\n\t\tXoa phan tu : ";
    cout<<"\n\tNhap vi tri cua value can xoa di [ ]: ";
    cin>>location;
    xoaphantu(ha,n,location);

    cout<<"\nSau khi xoa phan tu : ";
    xuatmang(ha,n);

    cout<<"\nXoa gia tri : "<<endl;
    xoaphantutheogiatri(ha,n,valuebixoa);

    xuatmang(ha,n);
}