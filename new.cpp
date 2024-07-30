/*#include<iostream>
using namespace std;
#include<string>
#include<fstream>
class ngaythangnam
{
private:
	int ngay;
	int thang;
	int nam;
public:
	void setngay(int ngay) {
		this->ngay = ngay;
	}
	int getngay() {
		return ngay;
	}
	void setthang(int thang) {
		this->thang = thang;
	}
	void setnam(int nam) {
		this->nam = nam;
	}
	int getthang() {
		return thang;
	}
	int getnam() {
		return nam;
	}
};

class nhan_vien
{
private:
	string mnv;
	string name;
	ngaythangnam namsinh;
	string address;
	double hesoluong;
	double luongcoban;
public:
	nhan_vien() {

	}
	virtual void doc_file(ifstream&);
	virtual void xuat();
	~nhan_vien() {

	}
};
class nhanvienlaptrinh : public nhan_vien
{
private:
	double tienlamthem;
public:
	nhanvienlaptrinh() {

	}
	void doc_file(ifstream &);
	void xuat();
	~nhanvienlaptrinh() {

	}
};

class nhanvienthietke : public nhan_vien
{
private:
	double tienbonus;
public:
	nhanvienthietke() {

	}
	void doc_file(ifstream&);
	void xuat();
	~nhanvienthietke() {

	}
};

void nhan_vien::xuat() {
	cout << "\nMa Nhan Vien : " << mnv;
	cout << "\nHo ten : " << name;
	cout << "\nNgay Thang Nam sinh : " << namsinh.getngay() << "/" << namsinh.getthang() << "/" << namsinh.getnam();
	cout << "\nDia chi : " << address;
	cout << "\nHe so luong : " << hesoluong;
	cout << "\nLuong co ban : " << (size_t)luongcoban;
}
void nhanvienlaptrinh::xuat() {
	nhan_vien::xuat();
	cout << "\nTien lam them la : " << (size_t)tienlamthem;   // size_t lam bung con so rut gon ra;
}
void nhanvienthietke::xuat() {
	nhan_vien::xuat();
	cout << "\nTien bonus : " << (size_t)tienbonus;
}
void nhan_vien::doc_file(ifstream &filein) {
	getline(filein, mnv, ',');
	filein.seekg(1, 1);         //  hàm này sẽ giúp bỏ khoảng trắng trong lúc đọc. 1 là số bite cần dịch (âm là dịch qua trái, dương qua phải), 1 là vị trí hiện tại cần dịch
	//  dịch con trỏ chỉ vị ở vị trí hiện tại sang bên phải 1 byte.
	getline(filein, name, ',');
	  //  vì ngày tháng năm là só lên k quan tâm khoảng trắng
	int ngay;
	filein >> ngay;
	namsinh.setngay(ngay);
	filein.seekg(1, 1);        //  de k doc den ki tu "/";
	int thang;
	filein >> thang;
	namsinh.setthang(thang);
	filein.seekg(1, 1);        //  de k doc den ki tu "/";
	int nam;
	filein >> nam;
	namsinh.setnam(nam);

	filein.seekg(2,1);   //  dich sang ben phai 2 byte de k doc "," va khoang trang;
	getline(filein, address, ',');
	filein >> hesoluong;
	filein.seekg(1, 1);
	filein >> luongcoban;
	filein.seekg(1, 1);			
}


void nhanvienlaptrinh::doc_file(ifstream& filein) {
	nhan_vien::doc_file(filein);
	filein >> tienlamthem;

}

void nhanvienthietke::doc_file(ifstream& filein) {
	nhan_vien::doc_file(filein);
	filein >> tienbonus;
}


void menu(nhan_vien *nv[], int& n) {
	int selection;
	ifstream filein;
	filein.open("nhanvien.txt", ios_base::in);
	nhan_vien* nhanvien = NULL;
	while (true) {
		system("cls");
		cout << "\n1. Doc thong tin nhan vien : ";
		cout << "\n2. Xuat danh sach sinh vien : ";
		cout << "\n0. Ket thuc : ";
		cout << "\nNhap lua chon : ";
		cin >> selection;
		if (selection == 0) {
			return;
		}
		else {
			if (selection == 1) {
				filein >> n;
				for (int i = 0;i < n;i++) {
					char c;
					filein >> c;      ///  doc ki tu dau tien de phan biet nhanvienthietke vs nhanvienlaptrinh
					filein.seekg(-1, 1);  //  de con tro lui ve 1 o do luc truoc no da doc chu "P";
					if (c == 'P') {
						
						nhanvien = new nhanvienlaptrinh();
						nhanvien->doc_file(filein);
						
					}
					else {
						if (c == 'D') {
							nhanvien = new nhanvienthietke();
							nhanvien->doc_file(filein);
						}
					}
					nv[i] = nhanvien;
				}
			}
			else {
				if (selection == 2) {
					for (int i = 0;i < n;i++) {
						cout << "\nNhan vien thu " << i + 1 << endl;
						nv[i]->xuat();
						
					}
					system("pause");
				}
			}
		}
	}
	filein.close();
}

int main() {
	nhan_vien *nhanvien[100];
	int n = 0;
	menu(nhanvien, n);
	return 0;
}
*/