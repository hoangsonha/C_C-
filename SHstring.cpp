#include<iostream>
using namespace std;
#include<string>
#include<string.h>
main() {
    string chuoikitu;
    string chuoikitu0(" Hello ");
    string chuoikitu1{" everyone "};
    string chuoikitu2 = " I am" ;
    string chuoikitu3 = chuoikitu1; 
    string chuoikitu4 = " 100 ";

    cout<<chuoikitu0<<endl;
    cout<<chuoikitu1<<endl;
    cout<<chuoikitu2<<endl;
    cout<<chuoikitu3<<endl;
    cout<<chuoikitu4<<endl;

    cout<<" Enter your full name : ";
    string fullname;
    getline(cin, fullname);

    

    cout<<" Enter your age : ";
    string age;
    cin>>age;

    fflush(stdin);

    //**********************************************************************
    // Viết enter để xuống dòng và dùng - để kết thúc code.
    //**********************************************************************.

    cout<<" Enter your text : ";
    string text;
    cin>>text;
    getline(cin, text, '_');
    cout<<"Your text : ";
    cout<<text<<endl;


//**************************************************************************
// Nối 2 chuỗi với nhau
//**************************************************************************.

    string ho[15];
    cout<<"Nhap ho cua ban : ";
    cin>>ho[15];
    fflush(stdin);
    string ten[20];
    cout<<"\n"<<"Nhap vao ten cua ban : ";
    cin>>ten[20];

    string hoten = ho[15] + " " + ten[20];
    cout<<"\n"<<hoten;
    
    ho[15] += " string ";
    cout<<"\n"<<ho[15]<<endl;

    cout<<"Do dai cua ho ten ban vua nhap la co " <<hoten.length()<<" ki tu. ";
    cout<<"Do dai cua ho ten ban vua nhap la co " <<hoten.size()<<" ki tu. ";
}