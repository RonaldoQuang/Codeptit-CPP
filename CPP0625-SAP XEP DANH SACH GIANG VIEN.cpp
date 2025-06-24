//Danh sách giảng viên Khoa CNTT cần được sắp xếp lại theo tên. 
//Thông tin về giảng viên ban đầu chỉ có họ tên và Bộ môn. 
//Mã giảng viên tự động tăng, tính từ GV01.
//Cần sắp xếp lại theo tên (tức là từ cuối cùng trong xâu họ tên). Các giảng viên có cùng tên thì được sắp xếp theo mã giảng viên.
//Input
//3
//Nguyen Manh Son
//Cong nghe phan mem
//Vu Hoai Nam
//Khoa hoc may tinh
//Dang Minh Tuan
//An toan thong tin
//Output
//GV02 Vu Hoai Nam KHMT
//GV01 Nguyen Manh Son CNPM
//GV03 Dang Minh Tuan ATTT
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
	for(int i=0; i<v.size(); i++) {
		ch(v[i]);
	}
}
struct GiangVien{
	string hoten,mon;
	string ten;
	int stt;
};
typedef struct GiangVien gv;
void nhap(gv a[100], int n){
	for(int i=0; i<n; i++) {
		getline(cin,a[i].hoten);
		getline(cin,a[i].mon);
	}
}
void sx(gv a[100], int n){
	for(int i=0;i<n-1;i++){
		int min=i;
		for(int j=i+1;j<n;j++){
			if(a[j].ten<a[min].ten) min=j;
			else if(a[j].ten==a[min].ten){
				if(a[j].stt<a[min].stt) min=j;
			}
		}
		gv temp=a[i];
		a[i]=a[min];
		a[min]=temp;
	}
}
int main(){
	int n; cin >> n;
	gv a[100];
	cin.ignore();
	nhap(a,n);
	for(int i=0;i<n;i++){
		a[i].stt=i+1;
		string w;
		stringstream ss(a[i].hoten);
		vector<string> v;
		while(ss >> w){
			v.push_back(w);
		}
		a[i].ten=v[v.size()-1];
	}
	sx(a,n);
	for(int i=0;i<n;i++){
		if(a[i].stt<10) cout << "GV0" << a[i].stt << " ";
		else cout << "GV" << a[i].stt << " ";
		cout << a[i].hoten << " ";
		tt(a[i].mon);
		cout << endl;
	}
}
