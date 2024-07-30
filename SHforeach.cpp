#include<iostream>
using namespace std;
#define max 5
main() {
    int a[max] {1,2,35,6574,5};
    for(auto &item : a) {    // trường hợp k muốn thay đổi giá trị của phần tử trong mảng thì cho thêm const . ( const auto &item : a)
        cout<<item<<" ";
    }
    cout<<endl;    //  k có index thì dùng foreach.  index là số nguyên đại diện cho chỉ số ở phần tử


                    // foreach k làm việc vs con chỏ đến 1 mảng.

        //  để xem đc chỉ số phần tử hiện tại, thêm : int i vaf i++;
        // int i=0
        // for(const auto &item : a) {
        //        cout<<item<<" ";
        //        i++;
        //  }
        //  
        int i=0;
        for( auto &item : a) {
                cout<<item<<" ";
                i++;
}
}