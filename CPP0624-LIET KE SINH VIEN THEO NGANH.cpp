//Thông tin về mỗi sinh viên gồm:
//Mã sinh viên: dãy ký tự không có khoảng trống (không quá 15). Đảm bảo không trùng nhau.
//Họ và tên: độ dài không quá 100
//Lớp: dãy ký tự không có khoảng trống (không quá 15)
//Email: dãy ký tự không có khoảng trống (không quá 15)
//Hãy nhập danh sách sinh viên và liệt kê sinh viên theo ngành học. 
//Chú ý: dữ liệu ngành học thể hiện qua 4 chữ cái từ thứ 4 đến thứ 7 trong mã sinh viên.
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
//Ke toan
//Output
//DANH SACH SINH VIEN KHOA 2015:
//DANH SACH SINH VIEN NGANH KE TOAN:
//B15DCKT150 Nguyen Ngoc Son D15CQKT02-B sv3@stu.ptit.edu.vn
//B15DCKT199 Nguyen Trong Tung D15CQKT02-B sv4@stu.ptit.edu.vn
#include <bits/stdc++.h>
using namespace std;
string ch(string s){
	for(int i=0;i<s.size();i++){
		if(s[i]<='z'&&s[i]>='a'){
			s[i]-=32;
		}
	}
	return s;
}
void tt(string s){
	string w;
	stringstream ss(s);
	vector<string> v;
	while(ss >> w){
		v.push_back(w);
	}
	for(int i=0;i<v.size();i++) {
		if(i==v.size()-1) cout << ch(v[i]) << ":" << endl;
		else cout << ch(v[i]) << " ";
	}
}
struct SinhVien{
	string msv,ten,lop,mail;
};
typedef struct SinhVien sv;
void nhap(sv a[1001],int n) {
	for(int i=0;i<n;i++) {
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
	cin.ignore();
	while(t--){
		string s;
		getline(cin,s);
		cout << "DANH SACH SINH VIEN NGANH ";
		tt(s);
		for(int i=0;i<n;i++){
			if(toupper(s[0])=='C'||toupper(s[0])=='A'){
				if(a[i].msv[5]==toupper(s[0])&&a[i].lop[0]!='E'){
					in(a[i]);
				}
			}
			else if(a[i].msv[5]==toupper(s[0])) {
				in(a[i]);
			}
		}
	}
}
