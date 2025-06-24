//Viết chương trình khai báo cấu trúc Sinh Viên gồm các thông tin: Mã SV, Họ tên, Lớp, Ngày sinh và Điểm GPA (dạng số thực float).
//Đọc thông tin 1 sinh viên từ bàn phím (không có mã sinh viên) và in ra màn hình. 
//Trong đó Mã SV được gán là N20DCCN001. 
//Ngày sinh được chuẩn hóa về dạng dd/mm/yyyy.
//Input
//Nguyen Van A
//D20CQCN01-N
//2/2/2000
//2.5
//Output
//N20DCCN001 Nguyen Van A D20CQCN01-N 02/02/2000 2.50
//Bài tập này yêu cầu sử dụng hàm main cho sẵn như sau:
//C/C++
//int main(){
//    struct SinhVien a;
//    nhapThongTinSV(a);
//    inThongTinSV(a);
//    return 0;
//}
#include <bits/stdc++.h>
using namespace std;
struct SinhVien {
    string msv,name,dob,lop;
    float gpa;
};
void nhapThongTinSV(SinhVien &a){
    a.msv="N20DCCN001";
    getline(cin,a.name);
    cin >> a.lop >> a.dob >> a.gpa;
    if(a.dob[2]!='/') a.dob.insert(0,"0");
    if(a.dob[5]!='/') a.dob.insert(3,"0");
}
void inThongTinSV(SinhVien a){
    cout << a.msv << " " << a.name << " " << a.lop << " " << a.dob << " ";
    cout << fixed << setprecision(2) << a.gpa;
}
int main(){
    struct SinhVien a;
    nhapThongTinSV(a);
    inThongTinSV(a);
    return 0;
}