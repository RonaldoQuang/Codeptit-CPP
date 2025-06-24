//Viết chương trình khai báo cấu trúc Sinh Viên gồm các thông tin: Mã SV, Họ tên, Lớp, Ngày sinh và Điểm GPA (dạng số thực float).
//Đọc thông tin 1 sinh viên từ bàn phím (không có mã sinh viên) và in ra màn hình. 
//Trong đó Mã SV được gán là B20DCCN001. 
//Ngày sinh được chuẩn hóa về dạng dd/mm/yyyy.
//Input
//Nguyen Hoa Binh
//D20CQCN04-B
//2/2/2002
//2
//Output
//B20DCCN001 Nguyen Hoa Binh D20CQCN04-B 02/02/2002 2.00
//Bài tập này yêu cầu sử dụng hàm main cho sẵn như sau:
//C/C++
//int main(){
//    struct SinhVien a;
//    nhap(a);
//    in(a);
//    return 0;
//}
#include <bits/stdc++.h>
using namespace std;
struct SinhVien{
    string name, classs, msv, date;
    float gpa;
};
void nhap(SinhVien &a){
    a.msv = "B20DCCN001";
    getline(cin, a.name);
    cin >> a.classs >> a.date >> a.gpa;
    // Chuẩn hóa ngày sinh
    if(a.date.length()==8)
        a.date='0'+a.date.substr(0,2)+'0'+a.date.substr(2);
    else if(a.date.length()==9){
        if(a.date[1]=='/')
            a.date='0'+a.date;
        else
            a.date=a.date.substr(0,3)+'0'+a.date.substr(3);
    }
}
void in(SinhVien a){
    cout << a.msv << " " << a.name << " " << a.classs << " " << a.date << " ";
    cout << fixed << setprecision(2) << a.gpa;
}
int main(){
    struct SinhVien a;
    nhap(a);
    in(a);
    return 0;
}