#include<iostream>
using namespace std;
#include<iomanip>
main() {
    cout<<"So nguoi yeu cua toi trong vong 1 thang : "<<endl;

    cout<<setw(5)<<left<<"STT ";
    cout<<setw(40)<<left<<"Ho ten ";
    cout<<setw(10)<<right<<"Ngay yeu "<<endl;

    cout<<setfill('-');
    cout<<setw(55)<<""<<endl;

    cout<<setfill(' ');

    cout<<setw(5)<<left<<" 1 ";
    cout<<setw(40)<<left<<"Vu Ngoc Quynh ";
    cout<<setw(10)<<right<<"21/02/2017"<<endl;
    cout<<setw(5)<<left<<" 2 ";
    cout<<setw(40)<<left<<"Nguyen Thi Dieu May ";
    cout<<setw(10)<<right<<"21/02/2018"<<endl;
    cout<<setw(5)<<left<<" 3 ";
    cout<<setw(40)<<left<<"Bui Diem Quynh ";
    cout<<setw(10)<<right<<"21/02/2019"<<endl;
    
    
    

}