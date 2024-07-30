#include<iostream>
using namespace std;
#include<cstring>
main() {
   
    
    char a2[] = " hello Hoang Son Ha";

    /*cout<<"Do dai la : "<<strlen(a2);
    cout<<"\nDo dai la : "<<sizeof(a2);
    
    strlwr(a2);
    cout<<"\n"<<a2;
    strupr(a2);
    cout<<"\n"<<a2;*/
    
    char quynh[100] = "Hoang Son Ha";

    /*strcpy(quynh, a2);
    strcpy(quynh, a2);
    cout<<"\n"<<quynh;*/

    //strcat(quynh, " ");
    //strcat(quynh, a2);
    //cout<<quynh<<endl;

    int result = strcmp(a2, quynh);
    if(result <0) {
        cout<<a2<<"<"<<quynh;
    } else {
        if(result == 0) {
            cout<<a2<<"="<<quynh;
        } else {
            cout<<a2<<">"<<quynh;
        }
    }

    if(strstr(a2, quynh) == NULL) {
        cout<<"k tim thay : ";
    } else {
        cout<<"tim thay : ";
    }
}