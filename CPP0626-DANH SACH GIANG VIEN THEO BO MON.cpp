//Danh sách giảng viên Khoa CNTT cần được sắp xếp lại theo tên. 
//Thông tin về giảng viên ban đầu chỉ có họ tên và Bộ môn. 
//Mã giảng viên tự động tăng, tính từ GV01.
//Hãy liệt kê danh sách giảng viên của Bộ môn được yêu cầu.
//Input
//3
//Nguyen Manh Son
//Cong nghe phan mem
//Vu Hoai Nam
//Khoa hoc may tinh
//Dang Minh Tuan
//An toan thong tin
//1
//Cong nghe phan mem
//Output
//DANH SACH GIANG VIEN BO MON CNPM:
//GV01 Nguyen Manh Son CNPM
#include <bits/stdc++.h>
using namespace std;
void ch(string s){
	char c=toupper(s[0]);
	cout << c;
}
void tt(string s){
	string w;
	stringstream ss(s);
	vector<string> v;
	while(ss >> w){
		v.push_back(w);
	}
	for(int i=0;i<v.size();i++) {
		ch(v[i]);
	}
}
struct GiangVien{
	string hoten,mon;
	int stt;
};
typedef struct GiangVien gv;
void nhap(gv a[100], int n){
	for(int i=0; i<n; i++){
		a[i].stt=i+1;
		getline(cin,a[i].hoten);
		getline(cin,a[i].mon);
	}
}
int main(){
	int n; cin >> n;
	gv a[100];
	cin.ignore();
	nhap(a,n);
	int t; cin >> t;
	cin.ignore();
	while(t--){
		string s; getline(cin,s);
		cout << "DANH SACH GIANG VIEN BO MON ";
		tt(s);
		cout << ":\n";
		for(int i=0;i<n;i++){
			if(a[i].mon==s){
				if(a[i].stt<10) cout << "GV0" << a[i].stt << " ";
				else cout << "GV" << a[i].stt << " ";
				cout << a[i].hoten << " ";
				tt(s);
				cout << endl;
			}
		}
	}
}
