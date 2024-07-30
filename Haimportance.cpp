#include<iostream>
using namespace std;
#include<cmath>
#define hamax 100
bool songuyento(int n) {
	if (n < 2) {
		return false;
	}
	else {
		for (int i = 2;i <= sqrt(n);i++) {
			if (n % i == 0) {
				return false;
			}
		}
	}
	return true;
}
void xuatmang(int ha[hamax], int n) {
	for (int i = 0;i < n;i++) {
		cout << ha[i] << " ";
	}
}
void showsonguyento(int ha[hamax], int n) {
	for (int i = 0;i < n;i++) {
		if (songuyento(ha[i])) {
			cout << ha[i] << " ";
		}
	}
}
void xoa(int ha[hamax], int& n, int location) {
	for (int i = location; i <= n - 1;i++) {
		ha[i] = ha[i + 1];
	}
	n--;
}
void xoasnt(int ha[hamax], int& n) {
	for (int i = 0; i < n;i++) {
		if (songuyento(ha[i])) {
			xoa(ha,n,i);
				i--;
		}
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
void them(int ha[hamax], int& n, int value, int location) {
	for (int i = n; i > location; i--) {
		ha[i] = ha[i - 1];
	}
	ha[location] = value;
	n++;
}
void themphantu(int ha[10], int& n, int value, int location) {  
	for (int i = n; i > location; i--) {
		ha[i] = ha[i - 1];
	}
	ha[location] = value;   
	n++;  

}
void nhapmang(int ha[hamax], int& n) {
	for (int i = 0;i < n;i++) {
		cin >> ha[i];
	}
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
int main() {
	int quynh[hamax];
	int m = 0;
	int ha[] = { 1,2,2,3,4,5,5,6,7,8,9,10,11,12,13,14 };
	int size = sizeof(ha) / sizeof(int);

	int value = 69;
	int location = 0;
	int n = 10;

	nhapmang(quynh, n);
	
	xuatmang(quynh, n);
	cout << endl;
	themphantuvaosausnt(quynh, n, 69);
	xuatmang(quynh, n);


	return 0;
}