#include<iostream>
using namespace std;
#define all 100
#include<cmath>
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
void hoanvi(int& x, int& y) {
	int temp = x;
	x = y;
	y = temp;
}
void sapxepmangatang(int ha[all], int n) {
	for (int i = 0;i < n;i++) {
		for (int j = i + 1;j < n;j++) {
			if (ha[i] > ha[j]) {
				hoanvi(ha[i], ha[j]);
			}
		}
	}
}

void display(int ha[all], int quynh[all],int may[all], int n, int m, int &c) {
	sapxepmangatang(ha, n);
	sapxepmangatang(quynh, m);
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
	for (;i < n;i++) {
		may[c] = ha[i];
		c++;
	}
	for (;j < m;j++) {
		may[c] = quynh[j];
		c++;
	}
}
int timgtxa_xnhat(int ha[all], int n, int x) {
	cout << "Nhap x : ";
	cin >> x;
	int max = abs(ha[0] - x);
	for (int i = 1;i < n;i++) {
		if (max < abs(ha[i] - x)) {
			max = abs(ha[i] - x);
		}
	}
	return max;
}
int main() {
	int ha[all];
	int n = 6;
	nhapmang(ha, n);
	int x;
	int kt = timgtxa_xnhat(ha, n, x);
	cout << kt;
	return 0;
}