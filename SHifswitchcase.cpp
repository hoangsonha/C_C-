#include<iostream>
using namespace std;
main() {
    int ngay,thang,nam;
    do {
    cout<<"\nNhap ngay:";
    cin>>ngay;
    }while(ngay<0 || ngay>31);
    do {
    cout<<"\nNhap thang:";
    cin>>thang;
    } while(thang<0 || thang>12);
    do {
    cout<<"\nNhap nam:";
    cin>>nam;
    
    } while(nam<0);
    int ngaytruoc, thangtruoc, namtruoc;
    if(ngay==1) {
        switch(thang) {
        case 4:
        case 6:
        case 9: 
        case 11: {
            ngaytruoc = 31;
            thangtruoc= thang-1;
            namtruoc=nam;
        }
            break;

        
        }
    } else {
        switch(thang) {
            case 2:
            case 3:
            case 4:
            case 5:
            case 1:
            case 6:
            case 7:
            case 8:
            case 9:
            case 10:
            case 11:
            case 12: {
                ngaytruoc=ngay-1;
                thangtruoc=thang;
                namtruoc=nam;
            }
                break;
            
        }
        } 
    if(ngay=1) {
        switch(thang) {
            case 1: {
            ngaytruoc=31;
            thangtruoc=12;
            namtruoc=nam-1;
            }
            break;
            case 3: {
            ngaytruoc=28 || 29; 
                if(nam%4==0) {
                    ngaytruoc=29;
                } else {
                    ngaytruoc=28;
                }
            thangtruoc=thang-1;
            namtruoc=nam; 
            }   
            break;
            case 5: {
            ngaytruoc=30;
            thangtruoc=thang-1;
            namtruoc=nam;
        }
            break;
            case 7: {
            ngaytruoc=30;
            thangtruoc=thang-1;
            namtruoc=nam;
            }
            break;
            case 8: {
            ngaytruoc=31;
            thangtruoc=thang-1;
            namtruoc=nam;
            }
            break;
            case 10: {
            ngaytruoc=30;
            thangtruoc=thang-1;
            namtruoc=nam;
            }
            break;
            case 12: {
            ngaytruoc=30;
            thangtruoc=thang-1;
            namtruoc=nam;
            }
            break;
            case 2: {
            ngaytruoc=31;
            thangtruoc=thang-1;
            namtruoc=nam;
            }
            break;
        
        }
    
            
    }       

    cout<<"\n\tData ban vua nhap la:"<<ngay<<"/"<<thang<<"/<<nam;
    cout<<"\nNgay truoc la: "<<ngaytruoc<<"/"<<thangtruoc<<"/"<<namtruoc;

    

}    
