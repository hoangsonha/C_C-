#include<iostream>
using namespace std;
#include<vector>
/*int main() {
    vector<int> mang = {6,2,6,8,4};
    cout<<mang.size()<<endl;
    mang.resize(10);    
    //  đtặ lại size cho mang = 10, nếu đặt nhỏ hơn thì giá trị thừa sẽ bị bỏ đi.

    mang.reserve(3);  // dat lai capacity la 3, sử dụng khi mang chưa đc khai báo sô lượng phần tử;
    for(auto const &ha : mang) {
        cout<<ha<<" ";
    }  
    cout<<"length = "<<mang.size()<<"\nCapacity = "<<mang.capacity()<<endl;
    // capacity sẽ bằng size và k thay đổi khi khai báo lại số luọng phần từ trong mang, chỉ có tăng, k giảm

    return 0;
}*/
void printstack(vector<int> &stack) {
    for(auto const &item : stack) {
        cout<<item<<" ";
        
    }
    cout<<"Cap = "<<stack.capacity() << " "<<" Length = "<<stack.size()<<endl;
}
int main() {
    vector<int> stack{1,2};
    
    printstack(stack);
    stack.push_back(5);   //  them 1 phan tu vao cuoi vector;
    printstack(stack);
    stack.push_back(3);
    printstack(stack);
    stack.push_back(2);
    printstack(stack);
    
    cout<<"\n\tPhan tu cuoi la : "<<stack.back()<<endl;

    stack.pop_back();   //  xoa 1 phan tu o cuoi vector;
    printstack(stack);
    stack.pop_back();   //  xoa 1 phan tu o cuoi vector;
    printstack(stack);
    stack.pop_back();   //  xoa 1 phan tu o cuoi vector;
    printstack(stack);

    return 0;

}