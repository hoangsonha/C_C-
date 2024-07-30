//  NEN DUNG ARRAY THAY CHO MANG TINH (1 chieu)

#include<iostream>
using namespace std;
#include<array>
#include<algorithm>

void printARRAY (const array <int, 5> &arr) {   //  thêm tham chiếu vì k phải tạo ra bản copy làm giảm hiệu suất.
    
    for(const auto &item : arr) {
        cout<<item<<' ';
    }
    cout<<endl;
}
main() {
    array <int , 5> a = {1,2,3,8,5};
    a[1] = 3;
    cout<<a[6]<<endl;

/*    a.at(1) = 3;
    cout<<a.at(6);  // at dung de kiem tra neu ngoai pham vi se quang ra 1 loi ma k lam chet chuong trinh
                    // toan tu [] k kiem tra pham vi cua mang
*/

    array <int, 5> b {1,2,3,8,5};
    cout<<b.size()<<endl;

    printARRAY(a);

    sort(a.begin(), a.end());   // sap xep tang;
    printARRAY(a);

    sort(a.rbegin(), a.rend());   // sap xep tang;  
    printARRAY(a);

    

}