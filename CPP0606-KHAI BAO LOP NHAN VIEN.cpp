//Một nhân viên làm việc trong công ty được lưu lại các thông tin sau:
//Mã nhân viên: được gán giá trị là 00001
//Họ tên: Xâu ký tự không quá 40 chữ cái.
//Giới tính: Nam hoặc Nu
//Ngày sinh: đúng theo chuẩn mm/dd/yyyy
//Địa chỉ: Xâu ký tự không quá 100 chữ cái
//Mã số thuế: Dãy số có đúng 10 chữ số
//Ngày ký hợp đồng: đúng theo chuẩn dd/mm/yyyy
//Viết chương trình nhập một nhân viên (không nhập mã) trong đó có sử dụng chồng toán tử nhập/xuất và in ra màn hình thông tin của nhân viên đó.
//Input
//Nguyen Van Hoa
//Nam
//11/22/1982
//Mo Lao-Ha Dong-Ha Noi
//8333123456
//31/12/2013
//Output
//00001 Nguyen Van Hoa Nam 11/22/1982 Mo Lao-Ha Dong-Ha Noi 8333123456 31/12/2013
//Bài tập này yêu cầu sử dụng hàm main cho sẵn như sau:
//C/C++
//int main(){
//    NhanVien a;
//    cin >> a;
//    cout >> a;
//    return 0;
//}
#include <bits/stdc++.h>
#define a() a
using namespace std;
struct NhanVien {
    string mnv, ten, gtinh, nsinh, dchi, mthue, ngay;
    friend istream &operator >> (istream &is, NhanVien &a) {
        a.mnv = "00001";
        getline(is, a.ten);
        is >> a.gtinh >> a.nsinh;
        is.ignore();
        getline(is, a.dchi);
        is >> a.mthue >> a.ngay;
        return is;
    }
    friend ostream &operator >> (ostream &os, NhanVien &a) {
        os << a.mnv << " " << a.ten << " " << a.gtinh << " " << a.nsinh << " " << a.dchi << " " << a.mthue << " " << a.ngay;
        return os;
    }
};
int main(){
    NhanVien a;
    cin >> a;
    cout >> a;
    return 0;
}