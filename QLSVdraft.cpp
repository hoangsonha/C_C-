#include<iostream>
using namespace std;
#include<string.h>
#include<iomanip>
#include<string>
int dem = 1;
class sinh_vien
{
private:
	string lop;
	string mssv;
	string ho_ten;
	int nam_sinh;
	string dia_chi;
	string gioi_tinh;
	double tin1, tin2, tin3, tin4, anh1, anh2, DTB;
	
public:
	double getdtb() {
		return DTB;
	}
	string getmssv() {
		return mssv;
	}
	void nhap();
	void xuat();
};
void sinh_vien::nhap() {
	cin.ignore(1);
	cout << "\nNhap lop : ";
	getline(cin, lop);
	fflush(stdin);
	cout << " Nhap ho ten :  ";
	getline(cin, ho_ten);
	fflush(stdin);
	
	cout << "\nNhap gioi tinh : ";
	getline(cin, gioi_tinh);
	fflush(stdin);
	cout << "\nNhap nam sinh : ";
	cin >> nam_sinh;
	cin.ignore(1);
	cout << "\nNhap dia chi : ";
	getline(cin, dia_chi);
	fflush(stdin);
	cout << "\nNhap mssv : ";
	getline(cin, mssv);
	fflush(stdin);
	cout << "\nNhap diem tin 1 : ";
	cin >> tin1;
	cout << "\nNhap diem tin 2 : ";
	cin >> tin2;
	cout << "\nNhap diem tin 3 : ";
	cin >> tin3;
	cout << "\nNhap diem tin 4 : ";
	cin >> tin4;
	cout << "\nNhap diem anh 1 : ";
	cin >> anh1;
	cout << "\nNhap diem anh 2 : ";
	cin >> anh2;
	cout << endl;
}
void sinh_vien::xuat() {
	cout << "|" << setw(5) << left << dem++ << "|" << setw(7) << lop << "|" << setw(30) << ho_ten << "|" << setw(20) << mssv << "|" << setw(10) << gioi_tinh << "|" << setw(10) << nam_sinh << "|" << setw(10) << dia_chi << "|" << setw(5) << tin1 << "|" << setw(5) << tin2 << "|" << setw(5) << tin3 << "|" << setw(5) << tin4 << "|" << setw(5) << anh1 << "|" << setw(5) << anh2 << "|";
	DTB = (tin1 + tin2 + tin3 + tin4 + anh1 + anh2) / 6;
	cout << setw(10) << DTB << "|";
	
	if (DTB >= 8) {
		cout << " Xep loai gioi !";
	}
	else {
		if (DTB >= 6.5) {
			cout << " Xep loai kha !";
		}
		else {
			if (DTB < 5) {
				cout << " Xep loai yeu !";
			}
		}
	}
	cout << setw(20) << DTB << "|" << endl;
}

class quan_li_sinh_vien : public sinh_vien
{
public:
	sinh_vien sinhvien[100];
	int n;
	void nhapthongtin();
	void hienthi();
	void xeploaihocluc();
	void dssvDTBtang();
	void dssvDTBgiam();
	void timsinhvienDTBmax();
	void timkiemsinhvien();
};
void quan_li_sinh_vien::nhapthongtin() {
	cout << "Nhap so luong sinh vien : ";
	cin >> n;
	for (int i = 0;i < n;i++) {
		cout << "\n\tSinh vien thu : " << i + 1 << " ";
		sinhvien[i].nhap();
	}
}
void quan_li_sinh_vien::hienthi() {
	cout << "+" << setfill('-') << setw(5) << "" << "+" << setw(10) << "" << "+" << setw(30) << "" << "+" << setw(20) << "" << "+" << setw(7) << "" << "+" << setw(10) << "" << "+" << setw(10) << "" << "+" << setw(5) << "" << "+" << setw(5) << "" << "+" << setw(5) << "" << "+" << setw(5) << "" << "+" << setw(5) << "" << "+" << setw(5) << "" << "+" << setw(10) <<""<<"+"<<setw(10)<<""<<"+"<< setfill(' ') << endl;
	cout << "|" << setw(5) << " STT " << "|" << setw(7) << " Lop " << "|" << setw(30) << left << " Ho ten " << "|" << setw(20) << " MSSV " << "|" << setw(7) << " Gioi tinh " << "|" << setw(10) << " Nam sinh " << "|" << setw(10) << " Dia chi " << "|" << setw(5) << "Tin1" << "|" << setw(5) << "Tin2" << "|" << setw(5) << "Tin3" << "|" << setw(5) << "Tin4" << "|" << setw(5) << "Anh1" << "|" << setw(5) << "Anh2" << "|" << setw(10)<<" DTB"<<"|"<<setw(20)<<" Xep loai "<<"|"<<endl;
	cout << "+" << setfill('-') << setw(5) << "" << "+" << setw(7) << "" << "+" << setw(30) << "" << "+" << setw(20) << "" << "+" << setw(7) << "" << "+" << setw(10) << "" << "+" << setw(10) << "" << "+" << setw(5) << "" << "+" << setw(5) << "" << "+" << setw(5) << "" << "+" << setw(5) << "" << "+" << setw(5) << "" << "+" << setw(5) << "" << "+" << setfill(' ') << endl;
	for (int i = 0;i < n;i++) {
		sinhvien[i].xuat();
	}
}
void quan_li_sinh_vien::xeploaihocluc() {
	cout << "\n\t Sinh vien xep loai hoc luc gioi : ";
	for (int i = 0;i < n;i++) {
		if (sinhvien[i].getdtb() >= 8) {
			sinhvien[i].xuat();
		}
	}
	cout << "\n\t Sinh vien xep loai hoc luc kha : ";
	for (int i = 0;i < n;i++) {
		if (sinhvien[i].getdtb() >= 6.5) {
			sinhvien[i].xuat();
		}
	}
	cout << "\n\t Sinh vien xep loai hoc luc TB : ";
	for (int i = 0;i < n;i++) {
		if (sinhvien[i].getdtb() <5) {
			sinhvien[i].xuat();
		}
	}
}
void quan_li_sinh_vien::dssvDTBtang() {
	for (int i = 0;i < n;i++) {
		for (int j = i + 1; j < n;j++) {
			if (sinhvien[i].getdtb() > sinhvien[j].getdtb()) {
				sinh_vien temp = sinhvien[i];
				sinhvien[i] = sinhvien[j];
				sinhvien[j] = temp;
			}
		}
	}
	cout << "\n\tSau khi xap xep la : ";
	for (int i = 0;i < n;i++) {
		sinhvien[i].xuat();
	}
}
void quan_li_sinh_vien::dssvDTBgiam() {
	for (int i = 0;i < n;i++) {
		for (int j = i + 1; j < n;j++) {
			if (sinhvien[i].getdtb() < sinhvien[j].getdtb()) {
				sinh_vien temp = sinhvien[i];
				sinhvien[i] = sinhvien[j];
				sinhvien[j] = temp;
			}
		}
	}
	cout << "\n\tSau khi sap xep la : ";
	for (int i = 0;i < n;i++) {
		sinhvien[i].xuat();
	}
}
void quan_li_sinh_vien::timsinhvienDTBmax() {
	double max;
	int k = 0;
	for (int i = 0;i < n;i++) {
		max = sinhvien[0].getdtb();
		if (sinhvien[i].getdtb() > max) {
			max = sinhvien[i].getdtb();
			k = i;
		}
	}
	cout << "\n\tSinh vien co DTB cao nhat la : " << endl;
	sinhvien[k].xuat();
}
void quan_li_sinh_vien::timkiemsinhvien() {
	string msv;
	string name;
	int count = 0;
	cin.ignore(1);
	cout << "Nhap MSSV cua SV : ";
	getline(cin,msv);
	for (int i = 0;i < n;i++) {
		if (sinhvien[i].getmssv() == msv) {
			sinhvien[i].xuat();
			count++;
		}
	}
	if (count == 0) {
		cout << "\n\tKhong tim thay Sinh Vien !!! ";
	}

}
int main() {
	quan_li_sinh_vien QLSV;
	QLSV.nhapthongtin();
	QLSV.hienthi();
	QLSV.xeploaihocluc();
	QLSV.dssvDTBtang();
	QLSV.dssvDTBgiam();
	QLSV.timsinhvienDTBmax();
	QLSV.timkiemsinhvien();
	return 0;
}
