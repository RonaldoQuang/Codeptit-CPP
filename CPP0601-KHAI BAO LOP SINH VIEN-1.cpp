//Viết chương trình khai báo lớp Sinh Viên gồm các thông tin: Mã SV, Họ tên, Lớp, Ngày sinh và Điểm GPA (dạng số thực float). 
//Hàm khởi tạo không có tham số, gán các giá trị thuộc tính ở trạng thái mặc định (xâu ký tự rỗng, giá trị số bằng 0).
//Đọc thông tin 1 sinh viên từ bàn phím (không có mã sinh viên) và in ra màn hình. 
//Trong đó Mã SV được gán là B20DCCN001. 
//Ngày sinh được chuẩn hóa về dạng dd/mm/yyyy.
//Input
//Nguyen Van A
//D20CQCN04-B
//2/2/2002
//2
//Output
//B20DCCN001 Nguyen Van A D20CQCN04-B 02/02/2002 2.00
//Bài tập này yêu cầu sử dụng hàm main cho sẵn như sau:
//C/C++
//int main(){
//    SinhVien a;
//    a.nhap();
//    a.xuat();
//    return 0;
//}
#include <bits/stdc++.h>
using namespace std;
struct SinhVien{
    string msv,ten,lop,dob;
    float gpa;
    SinhVien(){
    	msv = "B20DCCN001";
	};
    void nhap(){
        getline(cin,ten);
        cin >> lop >> dob >> gpa;
        if(dob[2]!='/') dob.insert(0,"0");
        if(dob[5]!='/') dob.insert(3,"0");
    }
    void xuat(){
        cout << msv << " " << ten << " " << lop << " " << dob << " ";
        cout << fixed << setprecision(2) << gpa;
    }
};
int main(){
    SinhVien a;
    a.nhap();
    a.xuat();
    return 0;
}