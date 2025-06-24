//Một nhân viên làm việc trong công ty được lưu lại các thông tin sau:
//Mã nhân viên: được gán giá trị là 00001
//Họ tên: Xâu ký tự không quá 40 chữ cái.
//Giới tính: Nam hoặc Nu
//Ngày sinh: đúng theo chuẩn dd/mm/yyyy
//Địa chỉ: Xâu ký tự không quá 100 chữ cái
//Mã số thuế: Dãy số có đúng 10 chữ số
//Ngày ký hợp đồng: đúng theo chuẩn dd/mm/yyyy
//Viết chương trình nhập một nhân viên (không nhập mã) và in ra màn hình thông tin của nhân viên đó.
//Input
//Nguyen Van Hoa
//Nam
//22/11/1982
//Mo Lao-Ha Dong-Ha Noi
//8333123456
//31/12/2013
//Output
//00001 Nguyen Van Hoa Nam 22/11/1982 Mo Lao-Ha Dong-Ha Noi 8333123456 31/12/2013
//Bài tập này yêu cầu sử dụng hàm main cho sẵn như sau:
//C/C++
//int main(){
//    struct NhanVien a;
//    nhap(a);
//    in(a);
//    return 0;
//}
#include <bits/stdc++.h>
using namespace std;
struct NhanVien{
    string id, name, gender, dob, address, tax, date;
};
void nhap(NhanVien &a){
    a.id = "00001";
    getline(cin, a.name);
    cin >> a.gender >> a.dob;
    cin.ignore();
    getline(cin, a.address);
    cin >> a.tax >> a.date;
}
void in(NhanVien a){
    cout << a.id << " " << a.name << " " << a.gender << " " << a.dob << " " << a.address << " " << a.tax << " " << a.date;
}
int main(){
    struct NhanVien a;
    nhap(a);
    in(a);
    return 0;
}