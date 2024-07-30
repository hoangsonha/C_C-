#include<iostream>
using namespace std;
#include<fstream>


//  ham doc file

void doc_file(ifstream& filein, int ha[], int& n) {
    for (int i = 0;i < n;i++) {
        filein >> ha[i];
    }

}

//   ham xuat mang
void xuatmang(int ha[], int n) {
    for (int i = 0;i < n;i++) {
        cout << ha[i] << " ";
    }
}

//  ham tim maxx;

int max(int ha[], int n) {
    int max = ha[0];
    for (int i = 0;i < n;i++) {
        if (ha[i] > max) {
            max = ha[i];
        }
    }
    return max;
}
int main() {

    ifstream filein;   ///  đối tượng đọc file ; 
    filein.open("input.txt", ios_base::in);
    int ha[100];
    int n = 0;
    filein >> n;     //  đọc giá trị dòng đầu tiên từ file vào cho biến n; 
    doc_file(filein, ha, n);
    xuatmang(ha, n);

    ofstream fileout;   // đối tượng ghi file;
    fileout.open("ketqua.txt", ios_base::out);   //  nếu trong chuong trình chưa có file txt thì chương trình sẽ tự động tạo file txt, còn nếu có rồi thì mở lên và ghi dữ liệu vào
    
    int max1 = max(ha, n);
    fileout << max1;       //  ghi giá trị trong biến max1 vào cho file ketqua.txt.
    
    
    fileout.close();
    filein.close();
    return 0;
}




//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


doc file khi trong file co 1 dong;


#include<iostream>
using namespace std;
#include<fstream>
#include<cmath>


//  ham doc file

void doc_file(ifstream& filein, int ha[], int& n) {   //  bỏ đi for vì k biết trong file có bao nhiêu số
    while (filein.eof() == false)         // trả về true là con trỏ chỉ vị đến cuối file, còn trả về false là chưa đến cuối file
    {
        filein >> ha[n];        // doc gt tu file vao cho phan tu thu n cua mang ;
        n++;
    }

}

//   ham xuat mang
void xuatmang(int ha[], int n) {
    for (int i = 0;i < n;i++) {
        cout << ha[i] << " ";
    }
}

bool soamstrong(int n) {
    int dem = 0;
    int tam = n;
    while (n != 0) {
        dem++;
        n /= 10;
    }
    n = tam;
    int sum = 0;
    while (n != 0) {
        sum += pow(n % 10, dem);
        n/=10;
    }
    n = tam;
    if (sum == n) {
        return true;
    }
    return false;
}
// ham ghi gt so amstrong vao file amstrong.txt

void ghi_file(ofstream& fileout, int ha[], int n) {
    for (int i = 0;i < n;i++) {
        if (soamstrong(ha[i])) {
            fileout << ha[i] << " ";
        }
    }
}
int main() {

    ifstream filein;   ///  đối tượng đọc file ; 
    filein.open("input1dong.txt", ios_base::in);
    int ha[100];
    int n = 0;
    
    doc_file(filein, ha, n);
    xuatmang(ha, n);

    ofstream fileout;   // đối tượng ghi file;
    fileout.open("amstrong.txt", ios_base::out);   //  nếu trong chuong trình chưa có file txt thì chương trình sẽ tự động tạo file txt, còn nếu có rồi thì mở lên và ghi dữ liệu vào
    
    ghi_file(fileout, ha, n);
   
    
    
    
    fileout.close();
    filein.close();
    return 0;
}




////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


doc file khi trong file co dau ',' va tim ucln va bcnn



#include<iostream>
using namespace std;
#include<fstream>
#include<cmath>


//  ham doc file

void doc_file(ifstream& filein, int ha[], int& n) {   //  bỏ đi for vì k biết trong file có bao nhiêu số
    while (filein.eof() == false)         // trả về true là con trỏ chỉ vị đến cuối file, còn trả về false là chưa đến cuối file
    {
        filein >> ha[n];        // doc gt tu file vao cho phan tu thu n cua mang ;
        n++;

        char x;
        filein >> x;   //  doc dau ',' vao cho bien x de con tro chi vi nhay qua dau ','; 
    }

}

//   ham xuat mang
void xuatmang(int ha[], int n) {
    for (int i = 0;i < n;i++) {
        cout << ha[i] << " ";
    }
}



int ucln(int x, int y) {
    while (x != y) {
        if (x > y) {
            x = x - y;
        }
        else {
            if (x < y) {
                y = y - x;
            }
        }
    }
    return x;
}
int bcnn(int x, int y) {
    return (x * y) / ucln(x, y);
}
int tim_ucln(int ha[], int n) {
    int uc = ha[0];
    for (int i = 0;i < n;i++) {
        uc = ucln(uc, ha[i]);
    }
    return uc;
}
int tim_bcnn(int ha[], int n) {
    int bc = ha[0];
    for (int i = 0;i < n;i++) {
        bc = bcnn(bc, ha[i]);
    }
    return bc;
}
//void ghi_file(ofstream& fileout, int ha[], int n) {
//    for (int i = 0;i < n;i++) {
//        if (soamstrong(ha[i])) {
//            fileout << ha[i] << " ";
//        }
//    }
//}
int main() {

    ifstream filein;   ///  đối tượng đọc file ; 
    filein.open("inputcodauphay.txt", ios_base::in);
    int ha[100];
    int n = 0;
    
    doc_file(filein, ha, n);
    xuatmang(ha, n);

    ofstream fileout;   // đối tượng ghi file;
      
    
    int UCLN = tim_ucln(ha, n);
    int BCNN = tim_bcnn(ha, n);

    fileout.open("UCLN.txt", ios_base::out);
    fileout << UCLN;
    fileout.close();                   //  dong file lai truoc khi mo file moi

    fileout.open("BCNN.txt", ios_base::out);
    fileout << BCNN;
    fileout.close();

    filein.close();
    return 0;
}




///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
