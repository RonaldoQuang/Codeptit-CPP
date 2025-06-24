//Viết chương trình khai báo lớp Sinh Viên gồm các thông tin: Mã SV, Họ tên, Lớp, Ngày sinh và Điểm GPA (dạng số thực float). 
//Hàm khởi tạo không có tham số, gán các giá trị thuộc tính ở trạng thái mặc định (xâu ký tự rỗng, giá trị số bằng 0).
//Yêu cầu sử dụng chồng toán tử nhập và xuất để nhập đối tượng sinh viên với cin và in ra đối tượng sinh viên với cout.
//Đọc thông tin 1 sinh viên từ bàn phím (không có mã sinh viên) và in ra màn hình. Trong đó Mã SV được gán là B20DCCN001. 
//Ngày sinh được chuẩn hóa về dạng dd/mm/yyyy. Tên được đưa về dạng chuẩn.
//Input
//NguyEn hoa BiNH
//D20CQCN04-B
//2/2/2002
//2
//Output
//B20DCCN001 Nguyen Hoa Binh D20CQCN04-B 02/02/2002 2.00
//Bài tập này yêu cầu sử dụng hàm main cho sẵn như sau:
//C/C++
//int main(){
//    SinhVien a;
//    cin >> a;
//    cout << a;
//    return 0;
//}
#include <bits/stdc++.h>
using namespace std;
string ch(string s){
	if(s[0]<='z'&&s[0]>='a') s[0]-=32;
	for(int i=1;i<s.size();i++){
		if(s[i]<='Z'&&s[i]>='A'){
			s[i]+=32;
		}
	}
	return s;
}
void xuat(string s){
	stringstream ss(s);
	string w;
	vector<string> v;
	while(ss >> w){
		v.push_back(w);
	}
	for(int i=0;i<v.size();i++){
		cout << ch(v[i]) << " ";
	}
}
struct SinhVien{
	string msv;
	string ten;
	string lop;
	string ngay_sinh;
	double gpa;
	SinhVien(){
		msv="B20DCCN001";
		
	}
	friend istream& operator >> (istream &in, SinhVien &a){
		getline(in,a.ten);
		in >> a.lop >> a.ngay_sinh >> a.gpa;
		if (a.ngay_sinh[2] != '/') a.ngay_sinh.insert(0, "0");
        if (a.ngay_sinh[5] != '/') a.ngay_sinh.insert(3, "0");
        return in;		 
	}
	friend ostream &operator << (ostream &os, SinhVien a) {
        os << a.msv << " ";
        xuat(a.ten);
        os << a.lop << " " << a.ngay_sinh << " ";
        cout << fixed << setprecision(2) << a.gpa;
        return os;
    }
};
int main(){
    SinhVien a;
    cin >> a;
    cout << a;
    return 0;
}