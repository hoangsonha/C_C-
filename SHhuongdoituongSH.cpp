//   

///   class ng ta gọi là định nghĩa 1 class còn object là khai báo or khởi tạo object.


//      class phu_nu
//      {
//              nội dung định ngĩa của class,    
//      };



//      phu_nu maianh;
//      phu_nu *quynh = new phu_nu;

//      class phu_nu
//      {
//              nội dung định ngĩa của class,       //  có thể dc định nghĩa bên trong hàm.
//      } *quynh = new phu_nu;


//**************************************************************************************************************************************************
        #include<iostream>
        #include<string>
        using namespace std;

                class phu_nu
                {
//        ** dữ liệu đc phép truy cập từ nguồn bên ngoài class
                        public:
/*(thuộc tính)*/                string ho_ten;

/*(constructor)*/               phu_nu()   //  khi tao object thi ham tao dc auto goi toi
                                {

                                }

                                phu_nu(const string &ht, int t, bool cz /*(hoàn toàn cố thể khởi tạo gt măc định là còn)*/ = true)
    // khi truyền tham chiếu có nguy cơ thay đổi dữ liệu gốc nên dùng const
//                                  : ho_ten(ht), con_zin(cz)  // có thể dùng kiểu này
                                {
                                    ho_ten = ht;
                                    con_zin = cz;
                                    tuoi = t;
                                }

/*(Destructor)*/                ~phu_nu()
                                {
                                    cout<< " Chia tay " << ho_ten <<endl;
                                }
/*(phương thức (hàm))*/         void trang_diem() {                                    //  thể hiện hành vi của đối tượng
                    
                                }

                                virtual string choi_nhac_cu(string nhac_cu) {   //  virtual đảm bảo in ra đúng hành vi của object như !!!*****1. khi thay đổi kiểu và object.
                                    // VD phu_nu *quynh = new gai_hu("quynh", 22, false) nó sẽ in ra đúng vs object gai_hu là a..a..a..a nếu k có virtual sẽ in ra aaaaaa do con trỏ là class base!!!

                                    return "aaaaaaa";   //  ham rong, chua co j
                                } 
                                void va_zin() {                 // 1 cơ chế sửa đổi thuọc tính trong private (ửite)
                                    if(tuoi <25) {
                                    con_zin = true;
                                    }
                                }
                                void show_hang() {              // cơ chế đọc ra kết quả .(read)
                                    cout<<ho_ten<<" "<<(con_zin ? "con zin" : "mat zin")<<endl;
                                }
//        **  chỉ bên trong class đc sử dụng, k dc truy cap truc tiep de ma sua doi.
                        private:
        //  có thể đổi lại thành protected (trung gian giữa public và private) vẫn đảm bảo k thể xuất dữ liệu từ bên ngoài nhưng vẫn có thể truy xuất dữ liệu đối vs các class dẫn xuất như gai_hu.
                            bool con_zin;       // nếu là true thì còn_zin.
                            int tuoi;
                };


                //    tính kế thừa !!!
                class gai_ngoan : public phu_nu {   // kế thừa lại toàn bộ thuộc tính của phu_nu và hàm ngầm định có sẵn sẽ k kế thừa nên phải định nghĩa lại
                                                    // do hàm khởi tạo là hàm trùng tên vs class, 2 clas khac nhau nên tên khởi tạo phải khác nhau.
                             // nếu đổi thanh Private thì Toàn Bộ thuộc tính mà gai_ngoan có đc sẽ ở dạng Private hết nên k gọi trực tiếp ở hàm Main()

                        public:
                        gai_ngoan() {

                        }
                        gai_ngoan(const string &ht, int t, bool cz = true)
                        : phu_nu(ht, t, cz) {

                        }
                        void noi_tro() {
                             cout<<ho_ten<<" dang lam noi tro "<<endl;   //  đổi thành protected đối vs class base thì sẽ dùng đc "tuoi" trong private.
                        }
                        string choi_nhac_cu(string nhac_cu) {

                                    return "a.a.a.a.a ";  
                                } 

                        
                };

                class gai_hu : public phu_nu {
                    public:
                        gai_hu() {

                        }
                        gai_hu(const string &ht, int t, bool cz = true)
                        : phu_nu(ht, t, cz) {

                        }
                        void di_bar() {

                        }
                        string choi_nhac_cu(string nhac_cu) {

                                    return "a..a..a..a..a";
                                } 

                };
                class banh_beo : gai_hu {         //  đây là kế thừa đa mức, hiểu mức 2 thì sẽ hiểu mức 3 này (phu_nu -> gai_hu -> banh_beo)
                };

int main() {
    phu_nu ha;  // do có biến tĩnh cuối chương trình tự thu hồi, nên có thêm chữ chia tay ở cuối.
//    quynh->ho_ten = " Ngoc Quynh ";    // vs các object dc cấp phát động thì dùng  ->  để truy xuất dữ liệu.; 
//        !!! quynh->con_zin = true;   //  lỗi vì private k đc truy cập trực tiếp theo cách này;
   //kieu             //object  *****  // con tro luon la class base !!!*****1.)
    phu_nu *quynh = new phu_nu("quynh", 22, false/*(nếu truyền false thì sẽ thay thế biến true ở trên, nếu k truyền mặc định là true)*/);    // nếu k truyền tham số thì nó sẽ gọi hàm phu_nu()

    quynh->choi_nhac_cu("ken");
    quynh->va_zin();
    quynh->show_hang(); 


    gai_ngoan *may = new gai_ngoan("may", 26, false);
    may->choi_nhac_cu("ken");
    cout<<may->choi_nhac_cu("ken");

    may->va_zin();
    may->show_hang();
    may->noi_tro(); // gai_ngoan sẽ k gọi đc hàm di_bar của gai_hư bời vì đó là 2 class riêng biệt( chỉ đổi class thành gai_hu ms đc)
    
    delete quynh;

    delete may;
}
