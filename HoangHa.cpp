/*#include<iostream>
using namespace std;
#include<math.h>
#define high 100
void giaiptb2(int a, int b, int c) {
	
	cout << "\n\tPhuong trinh cua ban duoi dang : " << a << "x^2 - " << b << "x + " << c << " = 0" << endl;
	int tam;
	tam = pow(b, 2) - 4 * a * c;
	if (tam < 0) {
		cout << "Phuong trinh vo nghiem !";
	}
	else {
		if (tam == 0) {
			cout << "Phuong trinh co no kep ! ";
			cout << "\nx1 = x2 =  " << -b / (2 * a) << endl;
		}
		else {
			if (tam > 0) {
				cout << "\nPhuong trinh co 2 no phan biet !" << endl;
				cout << "\tx1 = " << (-b + sqrt(tam)) / (2 * a) << endl;
				cout << "\tx2 = " << (-b - sqrt(tam)) / (2 * a) << endl;
			}
		}
	}
}
void xuatmang(int ha[high], int n) {
	for (int i = 0;i < n;i++) {
		cout << ha[i] << " ";
	}
}
bool songuyento(int n) {
	if (n < 2) {
		return false;
	}
	else {
		for (int i = 2; i <= sqrt(n); i++) {
			if (n % i == 0) {
				return false;
			}
		}
	}
	return true;
}
void kiemtrasnt(int ha[high], int n) {
	for (int i = 0; i < n;i++) {
		if (songuyento(ha[i])) {
			cout << ha[i] << " ";
		}
	}
}
int sohh(int n) {
	int sum = 0;
	for (int i = 1;i < n; i++) {
		if (n % i == 0) {
			sum += i;
		}
	}
	return sum;
}
bool sohoanhao(int n) {
	if (sohh(n) == n) {
		return true;
	}
	return false;
}
void kiemtrashh(int ha[high], int n) {
	for (int i = 0; i < n;i++) {
		if (sohoanhao(ha[i])) {
			cout << ha[i] << " ";
		}
	}
}
int sodx(int n) {
	int tam = 0;
	int sodao;
	while (n != 0) {
		sodao = n % 10;
		tam = (tam * 10) + sodao;
		n /= 10;
	}
	return tam;
}
bool sodoixung(int n) {
	if (sodx(n) == n) {
		return true;
	}
	return false;
}
void kiemtrasdx(int ha[high], int n) {
	for (int i = 0;i < n;i++) {
		if (sodoixung(ha[i])) {
			cout << ha[i] << " ";
		}
	}
}
void sodx2(int n) {
	int dem = 0;
	int tam = n;
	while (tam != 0) {
		tam = tam / 10;
		dem++;

	}
	dem--;
	int sum = 0;
	int temp = n;
	while (temp != 0) {
		sum += (temp % 10) * pow(10, dem);
		dem--;
		temp /= 10;
	}
	if (sum == n) {
		cout << "la so dx";
	}
	else {
		cout << "k phai sdx";
	}
}
bool sodxcach2(int n) {
	int dem = 0;
	int tam = n;
	while (tam != 0) {
		tam /= 10;
		dem++;
	}
	dem--;
	int sum = 0;
	int dx = n;
	while (dx != 0) {
		sum += (dx % 10) * pow(10, dem);
		dem--;
		dx /= 10;
	}
	if (sum == n) {
		return true;
	} 
	return false;
}
void kiemtrasdxcach2(int ha[high], int n) {
	for (int i = 0;i < n;i++) {
		if (sodxcach2(ha[i])) {
			cout << ha[i] << " ";
		}
	}
}
bool sochinhphuong(int n) {
	int tam = sqrt(n);
	if (pow(tam, 2) == n) {
		return true;
	}
	return false;
}
void kiemtrascp(int ha[high], int n) {
	for (int i = 0;i < n;i++) {
		if (sochinhphuong(ha[i])) {
			cout << ha[i] << " ";
		}
	}
}
int max(int ha[high], int n) {
	int max = ha[0];
	for (int i = 0;i < n;i++) {
		if (ha[i] > max) {
			max = ha[i];
		}
	}
	return max;
}
int min(int ha[high], int n) {
	int min = ha[0];
	for (int i = 0;i < n;i++) {
		if (ha[i] < min) {
			min = ha[i];
		}
	}
	return min;
}
int maxthu2(int ha[high], int n) {
	int max2 = max(ha, n);
	for (int i = 0;i < n;i++) {
		if (ha[i] != max(ha,n)) {
			max2 = ha[i];
		}
	}
	for (int i = 0;i < n;i++) {
		if (ha[i] > max2 && ha[i]!=max(ha,n)) {
			max2 = ha[i];
		}
	}
	return max2;
}
int minthu2(int ha[high], int n) {
	int min2 = min(ha, n);
	for (int i = 0;i < n;i++) {
		if (ha[i] != max(ha, n)) {
			min2 = ha[i];
		}
	}
	for (int i = 0;i < n;i++) {
		if (ha[i] < min2 && ha[i] != min(ha, n)) {
			min2 = ha[i];
		}
	}
	return min2;
}
int chusodaule(int n) {
	int tam = n;
	while (tam >= 10) {
		tam /= 10;
	}
	return tam;
}
bool kiemtrasole(int n) {
	if (chusodaule(n) % 2 != 0) {
		return true;
	}
	return false;
}
double trungbinhcongsole(int ha[high], int n) {
	int dem = 0;
	int sum = 0;
	for (int i = 0;i < n;i++) {
		if (kiemtrasole(ha[i])) {
			sum += ha[i];
			dem++;
		}
	}
	return (double(sum)  / dem);
}
void hoanvi(int& x, int& y) {
	int temp = x;
	x = y;
	y = temp;
}
void sapxepsoletang(int ha[high], int n) {
	for (int i = 0;i < n;i++) {
		if (ha[i] % 2 != 0) {
			for (int j = i + 1; j < n;j++) {
				if (ha[j] % 2 != 0) {
					if (ha[i] > ha[j]) {
						hoanvi(ha[i], ha[j]);
					}
				}
			}
		}
	}
}
void sapxepsolegiam(int ha[high], int n) {
	for (int i = 0;i < n;i++) {
		if (ha[i] % 2 != 0) {
			for (int j = i + 1; j < n;j++) {
				if (ha[j] % 2 != 0) {
					if (ha[i] < ha[j]) {
						hoanvi(ha[i], ha[j]);
					}
				}
			}
		}
	}
}
void sapxepsochantang(int ha[high], int n) {
	for (int i = 0;i < n;i++) {
		if (ha[i] % 2 == 0) {
			for (int j = i + 1; j < n;j++) {
				if (ha[j] % 2 == 0) {
					if (ha[i] > ha[j]) {
						hoanvi(ha[i], ha[j]);
					}
				}
			}
		}
	}
}
void sapxepsochangiam(int ha[high], int n) {
	for (int i = 0;i < n;i++) {
		if (ha[i] % 2 == 0) {
			for (int j = i + 1; j < n;j++) {
				if (ha[j] % 2 == 0) {
					if (ha[i] < ha[j]) {
						hoanvi(ha[i], ha[j]);
					}
				}
			}
		}
	}
}
void sapxepsntgiam(int ha[high], int n) {
	for (int i = 0;i < n;i++) {
		if (songuyento(ha[i])) {
			for (int j = i + 1;j < n;j++) {
				if (songuyento(ha[j])) {
					if (ha[i] < ha[j]) {
						hoanvi(ha[i], ha[j]);
					}
				}
			}
		}
	}
}
void phantuphanbiet(int ha[high], int quynh[high], int n, int &m) {
	quynh[m] = ha[0];
	m++;
	for (int i = 1; i < n;i++) {
		bool kiemtra = true;
		for (int j = i - 1; j >= 0; j--) {
			if (ha[i] == ha[j]) {
				kiemtra = false;
				break;
			}
		}
		if (kiemtra) {
			quynh[m] = ha[i];
			m++;
		}
	}
}
void times(int ha[high], int quynh[high], int n, int m) {
	for (int i = 0;i < m;i++) {
		int dem = 0;
		for (int j = 0;j < n;j++) {
			if (quynh[i] == ha[j]) {
				dem++;
			}
		}
		cout << quynh[i] << " xuat hien : " << dem << " lan" << endl;
	}
}
void gomsnt(int ha[high], int quynh[high], int n, int &m) {
	for(int i=0;i<n;i++) {
		bool kiemtra = false;
		if(songuyento(ha[i])) {
			kiemtra=true;
		}
		if(kiemtra) {
			quynh[m] = ha[i];
			m++;
		}
	}
}
void xoa(int ha[high], int &n, int location) {
	for(int i= location; i<=n-1; i++) {
		ha[i] = ha[i+1];
	}
	n--;
}
void xoasnt(int ha[high], int quynh[high], int &n, int m) {
	for(int i=0; i<m;i++) {
		for(int j=0;j<n;j++) {
			if(quynh[i]==ha[j]) {
				xoa(ha,n,j);
			}
		}
	}
}
void xoasnt1(int ha[high], int &n) {
	for(int i=0;i<n;i++) {
		if(songuyento(ha[i])) {
			xoa(ha,n,i);
			i--;
		}
	}
}
void xoashh(int ha[high], int &n) {
	for(int i=0;i<n;i++) {
		if(sohoanhao(ha[i])) {
			xoa(ha,n,i);
			i--;
		}
	}
}
void xoascp(int ha[high], int &n) {
	for(int i=0;i<n;i++) {
		if(sochinhphuong(ha[i])) {
			xoa(ha,n,i);
			i--;
		}
	}
}
void xoasdx(int ha[high], int& n) {
	for (int i = 0;i < n;i++) {
		if (sodoixung(ha[i])) {
			xoa(ha, n, i);
			i--;
		}
	}
}
bool sosieunguyento(int n) {
	int tam = n;
	while (tam >=10) {
		if (songuyento(tam)==false) {
			return false;
		}
		tam /= 10;
	}
	return true;
}
bool sosieunguyentocach2(int n) {
	bool kiemtra = false;
	while(n!=0) {
		if(songuyento(n)) {
			n/=10;
		} else {
			return kiemtra;
		}
	}
	kiemtra = true;
	return kiemtra;
}
void them(int ha[hamax], int& n, int value, int location) {
	for (int i = n; i > location; i--) {
		ha[i] = ha[i - 1];
	}
	ha[location] = value;
	n++;
}

void themphantuvaosausnt(int ha[hamax], int& n, int x) {
	for (int i = 0;i < n;i++) {
		if (songuyento(ha[i])) {
			them(ha, n, x, i+1);
			
		}
	}
}
void hoanvi(int& x, int& y) {
	int temp = x;
	x = y;
	y = temp;
}
void sapxeptang(int ha[hamax], int n) {
	for (int i = 0;i < n;i++) {
		for (int j = i + 1; j < n;j++) {
			if (ha[i] > ha[j]) {
				hoanvi(ha[i], ha[j]);
			}
		}
	}
}
void tron2mang(int may[hamax], int ha[hamax], int quynh[hamax], int n, int m, int& c) {
	for (int i = 0;i < n;i++) {
		for (int j = 0;j < m;j++) {
			if (ha[i] < quynh[j]) {
				may[c] = ha[i];
				
				c++;

			}
			else {
				
					may[c] = quynh[j];
					c++;
				
			}
		}
	}
}
void tron2mangcach2(int may[hamax], int ha[hamax], int quynh[hamax], int n, int m, int& c) {   //  dùng cái này khi đã sắp xếp tăng 2 mảng;
	int i = 0;
	int j = 0;
	while (i < n && j < m) {
		if (ha[i] < quynh[j]) {
			may[c] = ha[i];
			c++;
			i++;
		}
		else {
			may[c] = quynh[j];
			c++;
			j++;
		}
	}
	for (;i < n;i++) {					///  dùng 2 vòng for để lấy ra phần tử cuối cùng vì ta k biết phần tử cuối ở mảng nào ( duyệt để bỏ hết phần tử còn lại)
		may[c] = ha[i];
		c++;
	}
	for (;j < m;j++) {
		may[c] = quynh[j];
		c++;
	}

}
void bienchuasnt(int ha[hamax], int may[hamax], int n, int& m) {
	for (int i = 0; i < n;i++) {
		if (songuyento(ha[i])) {
			may[m] = ha[i];
			m++;
		}
	}
}
void xoasnttheobienphu(int ha[hamax], int may[hamax], int& n, int m) {
	for (int i = 0; i < n;i++) {
		for (int j = 0; j < m;j++) {
			if (ha[i] == may[j]) {
				xoa(ha, n, i);
			}
		}
	}
}
int showminsht(int ha[hamax], int n) {
	int min = 0;
	for (int i = 0;i < n;i++) {
		if (kiemtrasohoanthien(ha[i])) {
			 min = ha[i];
			for (int j = i + 1; j < n;j++) {
				if (kiemtrasohoanthien(ha[j])) {
					if (ha[j] < min) {
						min = ha[j];
					}
				}
			}
			break;                    //   dung de duyet het cai ha[j] thoi k can phai duyet lai ha[i] vi max min chi can duyet 1 lan tu dau den cuoi mang
		}
	}
	return min;
}
int showmaxsht(int ha[hamax], int n) {
	int max=0;
	for (int i = 0;i < n;i++) {
		if (kiemtrasohoanthien(ha[i])) {
			max = ha[i];
			for (int j = i + 1; j < n;j++) {
				if (kiemtrasohoanthien(ha[j])) {
					if (ha[j] > max) {
						max = ha[j];
					}
				}
			}
			break;
		}
	}
	return max;
}
void hoanvi(int& x, int& y) {
	int temp = x;
	x = y;
	y = temp;
}
void sapxeptang(int ha[allmax], int n) {
	for (int i = 0;i < n;i++) {
		for (int j = i + 1;j < n;j++) {
			if (ha[i] > ha[j]) {
				hoanvi(ha[i], ha[j]);
			}
		}
	}
}
void phantuphanbiet(int ha[allmax], int n) {
	sapxeptang(ha, n);
	for (int i = 0;i < n;i++) {
		int dem = 1;
		int b = i;							// gán b = i vì khi sắp xếp các số giống nhau sẽ nằm cạnh nhau nên gán b = i để biến i k lặp lại tại vị trí đó nữa // VD: 1 1 1 2 3 thì b = 2 nên sau khi trả về i thì i = 3 nên vòng fỏ sẽ chạy từ 3;
		
			for (int j = i + 1;j < n;j++) {
				if (ha[j] == ha[i]) {
					dem++;
					b++;
				}

			}
			cout << ha[i] << " xuat hien " << dem << " lan !" << endl;
			i = b;   /// b =2, i= 2;
		}
	}
int main() {
	int may[high];
	int m = 0;
	int quynh[] = { 1,1,2,2,3,3,4,4,5,5,6,7,7,7,7,8,9,10,11,12, 28,28, 16,12321, 55,88,121, 121, 100, 25 ,81 };
	int size = sizeof(quynh) / sizeof(int);

	cout << endl;
	

	return 0;
}






/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include<iostream>
using namespace std;
#define all 100
void nhapmang(int ha[all], int& n) {
	for (int i = 0;i < n;i++) {
		cin >> ha[i];
	}
}
void xuatmang(int ha[all], int n) {
	for (int i = 0;i < n;i++) {
		cout << ha[i] << " ";
	}
}
int timkiem(int ha[all], int n, int x) {
	for (int i = 0;i < n;i++) {
		if (ha[i] == x) {
			return ha[i];
		}
	}
	return -1;
}
void them(int ha[all], int &n, int x, int location) {
	for (int i = n;i >location;i--) {
		ha[i] = ha[i - 1];
	}
	ha[location] = x;
	n++;
}
void xoa(int ha[all], int& n, int location) {
	for (int i = location; i <= n - 1;i++) {
		ha[i] = ha[i + 1];
	}
	n--;
}
int ucln(int x, int y) {
	while (x != y) {
		if (x < y) {
			y = y - x;
		}
		else {
			if (x > y) {
				x = x - y;
			}
		}
	}
	return x;
}
void showucln(int ha[all], int n) {
	int uc = ha[0];
	for (int i = 1;i < n;i++) {
		uc = ucln(uc, ha[i]);
	}
	cout << "UCLN : " << uc;
}
int bcnn(int x, int y) {
	return (x * y) / ucln(x, y);
}
void showbcnn(int ha[all], int n) {
	int bc = ha[0];
	for (int i = 1;i < n;i++) {
		bc = bcnn(bc, ha[i]);
	}
	cout << "\nBCNN : " << bc;
}
int timgtxa_xnhat(int ha[all], int n, int x) {
	
	int max = abs(ha[0] - x);             //  đặt max là gt đàu tiên do  trừ x để tìm khoảng cách;
	int j = 0;							
	for (int i = 1;i < n;i++) {
		if (max < abs(ha[i] - x)) {
			max = abs(ha[i] - x);
			j = i;						//  do nếu k có j thì nó sẽ trả về khoảng cách nhưng nếu muốn trả về gt thì phải khai báo 1 biến khác lưu vị trí cảu giá trị đó.
		}
	}
	return ha[j];
}
int main() {
	int ha[all];
	int n = 6;
	
	nhapmang(ha, n);
	xuatmang(ha, n);
	int x;
	cin >> x;
	cout << endl;
	for (int i = 0;i < n;i++) {
		if (ha[i] == x) {
			int tam = ha[i];
			xoa(ha, n, i);
			them(ha, n, tam, 0);
		 // i--;                    //    do xoá rồi thêm nên số vòng fỏ sẽ k bỏ sót phần tử liền kề nào nen i--  k can thiet !!!
		}
	}
	xuatmang(ha, n);
	return 0;
}



///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include<iostream>
using namespace std;
void nhapmang(int  *ha, int& n) {
	
	for (int i = 0;i < n;i++) {
		cin >> *(ha + i);			// * la lay gt  *(ha+i) la ha tro toi o 0 1 2 3 4 vi con tro ha tro toi o dau tien cua mang    or  ha[i]  deu dc 
	}

}
void xuatmang(int *ha, int n) {      //  *ha or ha[] deu dung
	for (int i = 0;i < n;i++) {
		cout << ha[i] << " ";
	}
}
void ham_cap_phat_lai_bo_nho(int*& ha, int vung_nho_moi, int vung_nho_cu) {
	int* temp = new int[vung_nho_cu];
	for (int i = 0;i < vung_nho_cu;i++) {
		temp[i] = ha[i];
	}
	delete[] ha;
	
	ha = new int[vung_nho_moi];
	for (int i = 0; i < vung_nho_cu; i++) {
		ha[i] = temp[i];
	}
	delete[] temp;
}
void them(int *&ha, int& n, int value, int location) {     //  khi thay doi vung nho cua 1 con tro ta phai co dau & de luu lai viec thay doi do
	
	//////////////////
	ham_cap_phat_lai_bo_nho(ha, n + 1, n);
	
	/*int* temp = new int[n];
	for (int i = 0;i < n;i++) {
		temp[i] = ha[i];
	}
	delete[] ha;

	ha = new int[n + 1];

	for (int i = 0;i < n;i++) {
		ha[i] = temp[i];
	}
	delete[] temp;

	for (int i = n;i > location; i--) {
		ha[i] = ha[i - 1];
	}
	ha[location] = value;
	n++;
}
void xoa(int *&ha, int& n, int location) {
	

	for (int i = location;i <=n-1; i++) {
		ha[i] = ha[i + 1];
	}
	
	ham_cap_phat_lai_bo_nho(ha, n - 1, n);

	/*int* temp = new int[n];
	for (int i = 0;i < n;i++) {
		temp[i] = ha[i];
	}
	delete[] ha;

	ha = new int[n - 1];

	for (int i = 0;i < n;i++) {
		ha[i] = temp[i];
	}
	delete[] temp;
	n--;
}

int main() {
	int* ha;
	int n;
	
	cout << "Nhap n :" << endl;
	cin >> n;
	ha = new int[n];
	nhapmang(ha, n);
	xuatmang(ha, n);
	
	cout << endl;
	cout << "Nhap lo : ";
	int lo;
	cin >> lo;
	xoa(ha, n, lo);
	xuatmang(ha, n);


	delete[] ha;          //   giai phong mang ha;   con delete a; la giai phong 1;
	return 0;
}



//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include<iostream>
using namespace std;
void nhapmang(int* ha, int& n) {
	for (int i = 0;i < n;i++) {
		cin >> *(ha+i);
	}
}
void xuatmang(int* ha, int n) {
	for (int i = 0;i < n;i++) {
		cout << *(ha+i) << " ";
	}
}
void capphatbonho(int*& ha, int bonhomoi, int bonhocu) {
	int* quynh = new int[bonhocu];
	for (int i = 0;i < bonhocu;i++) {
		quynh[i] = ha[i];
	}
	delete[] ha;
	ha = new int[bonhomoi];
	for (int i = 0;i < bonhocu;i++) {
		ha[i] = quynh[i];
	}
	delete[] quynh;
}
void them(int*& ha, int& n, int value, int location) {
	capphatbonho(ha, n + 1, n);

	for (int i = n; i > location; i--) {
		ha[i] = ha[i - 1];
	}
	ha[location] = value;
	n++;
}
void xoa(int*& ha, int& n, int vi_tri_xoa) {
	for (int i = vi_tri_xoa;i <= n - 1;i++) {
		ha[i] = ha[i + 1];
	}
	
	
	
	n--;
	capphatbonho(ha, n , n);
}
void menu(int *&ha, int &n) {
	int selection;
	while (true) {
		
		cout << "\n\t1: Nhap phan tu cho mang : ";
		cout << "\n\t2: Xuat : ";
		cout << "\n\t0: Ket thuc : ";
		cout << "\nNhap selection :";
		
		cin >> selection;
		switch (selection) {
		case 0: {
			return;

		} break;
		case 1: {
			int value;
			cout << "Nhap value them vao : ";
			cin >> value;
			if (n == 0) {
				ha = new int;
			}
			else {
				capphatbonho(ha, n + 1, n);
			}
			ha[n] = value;
			n++;					

			//  mô tả bài toán, khi ta nhập vào value thì có 1 value nên n = 0 sẽ cấp phát 1 ô, sau đó ha[0] = value và n đc tăng lên là n = 1; nếu nhập tiếp value thì
			// sẽ rơi vào trường hợp else nới rộng ra 1 ô nữa , nó sẽ cấp thêm 1 ô và ha[1], 1 là do n = 1 đc tăng lên ở trên; sau đó n đc tăng lên là n = 2;
			
		} break;
		case 2: {
			cout << "\nXuat mang : ";
			xuatmang(ha, n);
			
		} break;
		}
	}
	
}
int main() {
	int* ha = NULL;
	int n = 0;
	menu(ha, n);
	delete[] ha;
	
	return 0;
}



//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include<iostream>
using namespace std;
#include<cmath>
void nhapmang(int* ha, int& n) {
	for (int i = 0;i < n;i++) {
		cin >> *(ha + i);
	}
}
void xuatmang(int* ha, int n) {
	for (int i = 0;i < n;i++) {
		cout << *(ha + i) << " ";
	}
}
int sodoixung(int n) {
	int tam = 0;
	int sodao;
	while (n != 0) {
		sodao = n % 10;
		tam = (tam * 10) + sodao;
		n /= 10;
	}
	return tam;
}
bool kiemtrasdx(int n) {
	if (sodoixung(n) == n) {
		return true;
	}
	return false;
}
int tongsdx(int* ha, int n) {
	int sum = 0;
	for (int i = 0;i < n;i++) {
		if (kiemtrasdx(ha[i]) == true) {
			sum += ha[i];
		}
	}
	return sum;
}
bool kiemtrasnt(int n) {
	if (n < 2) {
		return false;
	}
	else {
		for (int i = 2;i <= sqrt(n);i++) {
			if (n % i == 0) {
				return false;
			}
		}
	}return true;
}
void showsnt(int* ha, int n) {
	for (int i = 0;i < n;i++) {
		if (kiemtrasnt(ha[i])) {
			cout << ha[i] << " ";
		}
	}
}
void hoanvi(int& x, int& y) {
	int temp = x;
	x = y;
	y = temp;
}
void sapxepsnttang(int* ha, int n) {
	for (int i = 0;i < n;i++) {
		if (kiemtrasnt(ha[i])) {
			for (int j = i + 1; j < n;j++) {
				if (kiemtrasnt(ha[j])) {
					if (ha[i] > ha[j]) {
						hoanvi(ha[i], ha[j]);
					}
				}
			}
		}
	}
}
void capphatbonho(int*& ha, int moi, int cu) {
	int* quynh = new int[cu];
	for (int i = 0;i < cu;i++) {
		quynh[i] = ha[i];
	}
	delete[] ha;
	ha = new int[moi];
	for (int i = 0;i < cu;i++) {
		ha[i] = quynh[i];
	}
	delete[] quynh;
}
void them(int*& ha, int& n, int value, int location) {
	capphatbonho(ha, n + 1, n);
	for (int i = n;i > location;i--) {
		ha[i] = ha[i - 1];
	}
	ha[location] = value;
	n++;
}
void xoa(int*& ha, int& n, int vitrixoa) {
	for (int i = vitrixoa;i <= n - 1;i++) {
		ha[i] = ha[i + 1];
	}
	capphatbonho(ha, n - 1, n);
	n--;
}
void xoasdx(int *&ha, int& n) {
	for (int i = 0;i < n;i++) {
		if (kiemtrasdx(ha[i])) {
			xoa(ha, n, i);
			i--;
		}
	}
}
void tehmphantu0vaotruocsole(int *&ha, int& n) {
	for (int i = 0;i < n;i++) {
		if (ha[i] % 2 != 0) {
			them(ha, n, 0, i);
			i++;                   //  nếu 2 số lẻ nằm cạnh nhau thì sau khi thêm so 0 vào trước thì sơ lẻ bị đẩy lên 1 ô thì vòng for tiếp sẽ duyệt ô đó và sẽ là vô tận;
		}
	}
}
int timgtle(int* ha, int n) {
	for (int i = n-1;i >= 0;i--) {
		if (ha[i] % 2 != 0) {
			cout << ha[i] << " ";
			return ha[i];
		}
	}
	return 0;
}
void mangchuaphantupb(int* ha, int* quynh, int n, int& m) {
	
	for (int i = 0;i < n;i++) {
		bool kiemtra = true;
		for (int j = i + 1;j < n;j++) {
			
			if (ha[i] == ha[j]) {
				kiemtra = false;
				
			}
			
		}
		if (kiemtra) {
			quynh[m] = ha[i];
			m++;
		}
	}
}
int demphantuphanbiet(int* quynh, int m) {
	int count = 0;
	for (int i = 0;i < m;i++) {
		count += 1;
	}
	return count;
}
int tongphantupb(int* quynh, int m) {
	int sum = 0;
	for (int i = 0;i < m;i++) {
		sum += quynh[i];
	}
	return sum;
}
bool kiemtramangtoansochan(int* ha, int n) {
	bool kiemtra = true;							//  đặt cờ hiệu giả sử;
	for (int i = 0;i < n;i++) {
		if (ha[i] % 2 != 0) {
			kiemtra = false;
			break;
		}
	}
	return kiemtra;
}
void menu(int*& ha, int& n, int *&quynh, int &m) {
	int selection;
	while (true) {
		cout << "\n\t1. Nhap mang : ";
		cout << "\n\t2. Tinh tong cac sdx : ";
		cout << "\n\t3. Xuat cac snt : ";
		cout << "\n\t4. Xap sep cac snt tang dan : ";
		cout << "\n\t5. Xoa cac phan tu la sdx : ";
		cout << "\n\t6. Them phan tu 0 vao truoc cac so le : ";
		cout << "\n\t7. Tim gia tri le cuoi cung trong mang : ";
		cout << "\n\t8. Kiem tra xem mang co all phan tu chan hay khong ; ";
		cout << "\n\t9. Dem so luong cac gia tri khac nhau (co bn phan tu phan biet) : ";
		cout << "\n\t10. Tinh tong cac gia tri phan biet do : ";
		cout << "\n\t0. Ket thuc chuong trinh : ";
		cout << "\nNhap selection : " << endl;
		cin >> selection;
		switch (selection) {
		case 0: {
			return;
			break;
		}
		case 1: {
			cout << "\n\tNhap n : ";
			cin >> n;
			ha = new int[n];
			nhapmang(ha, n);
			break;
		}
		case 2: {
			cout << "\n\tTong cac sdx la : " << tongsdx(ha, n);
			break;
		}
		case 3: {
			showsnt(ha, n);
			break;
		}
		case 4: {
			sapxepsnttang(ha, n);
			xuatmang(ha, n);
			break;
		}
		case 5: {
			xoasdx(ha, n);
			xuatmang(ha, n);
			break;
		}
		case 6: {
			tehmphantu0vaotruocsole(ha, n);
			xuatmang(ha, n);
			break;
		}
		case 7: {
			int kt = timgtle(ha, n);
			if (kt == 0) {
				cout << "\nk co so le !!!";
			}
			else {
				cout << "\nSo le cuoi cung la : " << kt;
			}
			break;
		}
		case 8: {
			int kt = kiemtramangtoansochan(ha, n);
			if (kt) {
				cout << "\nMang toan la so chan !!!";
			}
			else {
				cout << "\nMang k phai all so chan !!!";
			}
			break;
		}
		case 9: {
		
			quynh = new int[m];
			mangchuaphantupb(ha, quynh, n, m);
			cout << "\nCac phan tu phan biet la : ";
			xuatmang(quynh, m);
			int sum = demphantuphanbiet(quynh, m);
			cout << "Co " << sum << " phan tu phan biet trong mang ! ";
			break;
		}
		case 10: {
			int kt = tongphantupb(quynh, m);
			cout << "\nSum =  " << kt;
			break;
		}
		default: {
			cout << "\n\tLua chon k hop le : " << endl;
		}

		}
	}
}
int main() {
	int* ha = NULL;
	int n = 0;
	int* quynh = NULL;
	int m = 0;
	menu(ha, n, quynh, m);
	
	delete[] ha;
	delete[] quynh;
	return 0;
}
*/

/*#include<iostream>
using namespace std;
bool toansochan(int* ha, int n) {
	bool kiemtra = true;
	for (int i = 0;i < n;i++) {
		if (ha[i] % 2 != 0) {
			kiemtra = false;
			break;
		}
	}
	return kiemtra;
}
int kiemtrasoamstrong(int n) {
	int tam = n;
	int sum = 0;
	int ha;
	int dem = 0;
	while (tam != 0) {
		dem++;
		tam /= 10;
	}
	
	while (n != 0) {
		ha = n % 10;
		sum += pow(ha, dem);
		n /= 10;
	}
	return sum;
}
bool kiemtra(int n) {
	if (kiemtrasoamstrong(n) == n) {
		return true;
	}
	return false;
}
bool kiemtrasoamstrongcach2(int n) {
	int tam = n;
	
	int dem = 0;
	while (n != 0) {
		dem++;
		n /= 10;
	}
	n = tam;
	int sum = 0;
	while (n != 0) {
		sum += pow(n % 10, dem);
		n /= 10;
	}
	n = tam;
	if (n == sum) {
		return true;
	}
	return false;
}
void showsoamstrong(int* ha, int n) {
	for (int i = 0; i < n;i++) {
		if (kiemtrasoamstrongcach2(ha[i])) {
			cout << ha[i] << " ";
		}
	}
}
int timgtlecuoicung(int* ha, int n) {
	for (int i = n - 1; i >= 0;i--) {
		if (ha[i] % 2 != 0) {
			return ha[i];
			
		}
	}
	return 0;    //  return 0 de hieu la mang nay k co so le cuoi cung;
}
void show(long long n) {
	long long tam = n;
	int sum = 0;
	while (tam != 0) {
		int x = 0;
		x = tam % 10;
		if (x % 2 == 0) {
			sum += x;

		}
		tam /= 10;
			
		
	}
	cout << "Sum = " << sum;
}
int max(int* ha, int n) {
	int max = ha[0];
	for (int i = 0;i < n;i++) {
		if (ha[i] > max) {
			max = ha[i];
		}
	}
	return max;
}
void xoagtln(int*& ha, int& n) {
	for (int i = 0;i < n;i++) {
		if (ha[i] == max(ha, n)) {
			xoa(ha, n, i);
			i--;
		}
	}
}
void xoagtlncach2(int*&ha, int &n) {
	int x = max(ha, n);
	for (int i = 0; i < n;i++) {
		if (ha[i] == x) {
			xoa(ha, n, i);
			i--;
		}
	}
}
void xoaphantuxuathiennhieuhon1(int *&ha, int &n){
	
	for (int i = 0;i < n;i++) {
		bool kiemtra = true;                  //  gia su ha[i] k phai la phan tu xuat hien nhieu hon 1 lan;
		for (int j = i + 1;j < n;j++) {
			if (ha[i] == ha[j]) {
				xoa(ha, n, j);
				j--;
				kiemtra = false;
			}
		}
		if (kiemtra==false) {
			xoa(ha, n, i);
			i--;
		}
	}

	}
int main() {
	int n = 20;        ///  n là số vớ hiện tại
	int m = 4;		  ///  m la so ngay ma dc +1 doi vo;
	int dem = 0;	// sau n ngay thi me no cho bn doi;
	int x = n;
	while (x >= m) {
		x = x - m + 1;   // sau m ngay thi lay so vo hien tai - m ngay r cong 1 do sau m ngay dc +1;
		dem++;

	}
	cout << "\nSo ngay het vo de mang la : " << n + dem;
	return 0;
}



///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include<iostream>
using namespace std;
#include<cstringt.h>
void phantupb(char s[]) {
	int n = strlen(s);
	for (int i = 0;i < n;i++) {
		bool kiemtra = true;
		for (int j = i - 1; j >= 0;j--) {
			if (s[i] == s[j]) {
				kiemtra = false;
				break;
			}
		}
		
		if (kiemtra) {
			int dem = 0;
			for (int k = 0;k < n;k++) {
				if (s[i] == s[k]) {
					dem++;
				}
			}
			cout << "\nPhan tu " << s[i] << " xuat hien " << dem << " lan";
		}
		
	}
}



int main() {
	char s[50] = {};
	cin.getline(s, 50);
	phantupb(s);
	return 0;
}


///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<iostream>
using namespace std;
void xoa(char s[], int vitrixoa) {
	int n = strlen(s);
	for (int i = vitrixoa;i <n;i++) {
		s[i] = s[i + 1];
	}
	s[n - 1] = '\0';
	
}
void xoaphantutrung(char s[]) {
	
	for (int i = 0;i < strlen(s);i++) {
		bool kiemtra = false;
		for (int j = i + 1; j < strlen(s);j++) {
			if (s[i] == s[j]) {
				xoa(s, j);
				j--;
				kiemtra = true;
			}
		}
		if (kiemtra) {
			
					xoa(s, i);
					i--;
				
			
		}
	}
}
int main() {
	char s[50] = {};
	cin.getline(s, 50);
	cout << "\n\t" << s;
	xoaphantutrung(s);
	cout << "\n\tSau khi xoa : " << s;
	return 0;
}


/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///    hàm trả về địa chỉ của gtln; int la tra ve gt con int* la tra ve dia chi  (con tro ham);

int* tim_max(int* ha, int n) {					// chứa địa chỉ ô nhớ là kiểu con trỏ; chỉ có con trỏ ms chứa địa chỉ ô nhớ.
	int max = *(ha + 0);
	int k = 0;						// biến k để lưu địa chỉ của i
	for (int i = 1; i < n;i++) {
		if (*(ha+i) > max) {
			max = *(ha+i);
			k = i;
		}
	}
	return (ha+k);                     // *(ha + i)  trả về giá trị, còn (ha + i) là trả về địa chỉ.
}
void xuatdiachimax(int* ha, int n) {
	int* x = tim_max(ha, n);
	for (int i = 0;i < n;i++) {
		if (*(ha + i) == *x) {
			cout << (ha + i) << "   ";
		}
	}
}
void xuatdiachi(int* ha, int n) {
	for (int i = 0;i < n;i++) {

		cout << (ha + i) << "   ";

	}
}


////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
cout << "+" << setfill('-') << setw(5) << "" << "+" << setw(30) << "" << "+" << setw(10) << "" << "+" << setw(10) << "" << "+" << endl;
	cout << "|" << setfill(' ') << setw(5) << " STT " << "|" << setw(30) << left << " Ho ten " << "|" << setw(10) << " Age " << "|" << setw(10) << " Mark " << "|" << endl;
	cout << "+" << setfill('-') << setw(5) << "" << "+" << setw(30) << "" << "+" << setw(10) << "" << "+" << setw(10) << "" << "+" << setfill(' ') << endl;

	*/
