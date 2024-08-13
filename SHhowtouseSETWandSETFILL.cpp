#include <iostream>
using namespace std;
#include <iomanip>
main()
{
    cout << "So nguoi yeu cua toi trong vong 1 thang : " << endl;

    cout << setw(5) << left << "STT ";
    cout << setw(40) << left << "Ho ten ";
    cout << setw(10) << right << "Ngay yeu " << endl;

    cout << setfill('-');
    cout << setw(55) << "" << endl;

    cout << setfill(' ');

    cout << setw(5) << left << " 1 ";
    cout << setw(40) << left << "Quynh";
    cout << setw(10) << right << "21/02/2025" << endl;
    cout << setw(5) << left << " 2 ";
    cout << setw(40) << left << "Ngan";
    cout << setw(10) << right << "21/02/2013" << endl;
    cout << setw(5) << left << " 3 ";
    cout << setw(40) << left << "Phuong";
    cout << setw(10) << right << "21/02/2022" << endl;
}