//Danh sách giảng viên Khoa CNTT cần được sắp xếp lại theo tên. 
//Thông tin về giảng viên ban đầu chỉ có họ tên và Bộ môn. 
//Hãy tìm kiếm giảng viên theo tên 
//(yêu cầu tìm gần đúng – tức là trong tên giảng viên xuất hiện từ hoặc cụm từ khóa, không phân biệt chữ hoa chữ thường).
//Input
//3
//Nguyen Manh Son
//Cong nghe phan mem
//Vu Hoai Nam
//Khoa hoc may tinh
//Dang Minh Tuan
//An toan thong tin
//1
//aN
//Output
//DANH SACH GIANG VIEN THEO TU KHOA aN:
//GV01 Nguyen Manh Son CNPM
//GV03 Dang Minh Tuan ATTT
#include <bits/stdc++.h>
using namespace std;
void ch1(string s){
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
		ch1(v[i]);
	}
}
struct GiangVien{
	string ten,mon;
	int stt;
};
typedef struct GiangVien gv;
string ch(string s){
	for(int i=0;i<s.size();i++){
		if(s[i]<='Z'&&s[i]>='A'){
			s[i]+=32;
		}
	}
	return s;
}
void nhap(gv a[100], int n){
	for(int i=0;i<n;i++){
		a[i].stt=i+1;
		getline(cin,a[i].ten);
		getline(cin,a[i].mon);
	}
}
int ss(gv a, string s){
	int i=0,dem=0;
	while(i<=(a.ten.size()-s.size())){
		int cnt=0;
		if(tolower(a.ten[i])==s[0]){
			for(int j=i+1;j<=i+s.size()-1;j++){
				if(tolower(a.ten[j])==s[j-i]){
					++cnt;
				}
			}
		}
		if(cnt==s.size()-1){
			++dem;
			break;
		}
		else ++i;
	}
	if(dem==1) return 1;
	else return 0;
}
void in(gv a){
	if(a.stt<10) cout << "GV0" << a.stt << " ";
	else cout << "GV" << a.stt << " ";
	cout << a.ten << " "; 
	tt(a.mon);
	cout << endl;
}
int main(){
	int n; cin >> n;
	gv a[100];
	cin.ignore();
	nhap(a,n);
	int t; cin >> t;
	cin.ignore();
	while(t--){
		string s; cin >> s;
		cout << "DANH SACH GIANG VIEN THEO TU KHOA " << s << ":\n";
		for(int i=0;i<n;i++){
			if(ss(a[i],ch(s))==1) in(a[i]);
		}
	}
}
