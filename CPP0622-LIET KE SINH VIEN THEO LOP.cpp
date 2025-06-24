//Thông tin về mỗi sinh viên gồm:
//Mã sinh viên: dãy ký tự không có khoảng trống (không quá 15). Đảm bảo không trùng nhau.
//Họ và tên: độ dài không quá 100
//Lớp: dãy ký tự không có khoảng trống (không quá 15)
//Email: dãy ký tự không có khoảng trống (không quá 15)
//Hãy nhập danh sách sinh viên và liệt kê sinh viên theo lớp
//Input
//4
//B16DCCN011
//Nguyen Trong Duc Anh
//D16CNPM1
//sv1@stu.ptit.edu.vn
//B15DCCN215
//To Ngoc Hieu
//D15CNPM3
//sv2@stu.ptit.edu.vn
//B15DCKT150
//Nguyen Ngoc Son
//D15CQKT02-B
//sv3@stu.ptit.edu.vn
//B15DCKT199
//Nguyen Trong Tung
//D15CQKT03-B
//sv4@stu.ptit.edu.vn
//1
//D15CQKT02-B
//Output
//DANH SACH SINH VIEN LOP D15CQKT02-B:
//B15DCKT150 Nguyen Ngoc Son D15CQKT02-B sv3@stu.ptit.edu.vn
//B15DCKT199 Nguyen Trong Tung D15CQKT02-B sv4@stu.ptit.edu.vn
#include <bits/stdc++.h>
using namespace std;
struct SinhVien{
	string msv,ten,lop,mail;
};
typedef struct SinhVien sv;
void nhap(sv a[1001], int n){
	for(int i=0;i<n;i++){
		cin >> a[i].msv;
		cin.ignore();
		getline(cin,a[i].ten);
		cin >> a[i].lop >> a[i].mail;
	}
}
void in(sv a){
	cout << a.msv << " " << a.ten << " " << a.lop << " " << a.mail << endl;
}
int main(){
	int n; cin >> n;
	sv a[1001];
	nhap(a,n);
	int t; cin >> t;
	while(t--){
		string s; cin >> s;
		cout << "DANH SACH SINH VIEN LOP " << s << ":" << endl;
		for(int i=0;i<n;i++){
			if(a[i].lop==s) in(a[i]);
		}
	}	
}
