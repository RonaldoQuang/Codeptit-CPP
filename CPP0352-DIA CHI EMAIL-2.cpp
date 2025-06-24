//Địa chỉ email của các cán bộ, giảng viên PTIT được tạo ra bằng cách viết đầy đủ tên và ghép với các chữ cái đầu của họ và tên đệm. 
//Nếu có nhiều người cùng email thì từ người thứ 2 sẽ thêm số thứ tự vào email đó.
//Cho trước các xâu họ tên (có thể không chuẩn). Hãy tạo ra các địa email tương ứng.
//Input
//4
//    nGUYEn    quaNG   vInH  
//   tRan   thi THU    huOnG
//   nGO   quoC  VINH
// lE            tuAn    aNH
//Output
//vinhnq@ptit.edu.vn
//huongttt@ptit.edu.vn
//vinhnq2@ptit.edu.vn
//anhlt@ptit.edu.vn
#include <bits/stdc++.h>
using namespace std;
string ch(string s){
	for(int i=0;i<s.size();i++){
		if(s[i]<='Z'&&s[i]>='A'){
			s[i]+=32;
		}
	}
	return s;
}
void out(string s){
	cout << s[0];
}
char dau(string s){
	return s[0];
}
string ten(string s){
	stringstream ss(s);
	string w;
	vector<string> v;
	while(ss >> w){
		v.push_back(ch(w));
	}
	return v[v.size()-1];
}
int tu(string s){
	stringstream ss(s);
	string w;
	vector<string> v;
	int cnt=0;
	while(ss >> w){
		++cnt;
	}
	return cnt;
}
int ss(string a, string b){
	stringstream ss1(a);
	stringstream ss2(b);
	string w1,w2;
	vector<string> v1;
	vector<string> v2;
	int cnt=0;
	while(ss1 >> w1){
		v1.push_back(ch(w1));
	}
	while(ss2 >> w2){
		v2.push_back(ch(w2));
	}
	for(int i=0;i<v1.size()-1;i++){
		if(dau(v1[i])!=dau(v2[i])){
			++cnt;
			break;
		}
	}
	return cnt;
}
void in(string s){
	stringstream ss(s);
	string w;
	vector<string> v;
	while(ss >> w){
		v.push_back(ch(w));
	}
	cout << v[v.size()-1];
	for(int i=0;i<v.size()-1;i++){
		out(v[i]);
	}
}
int main(){
	int n; cin >> n;
	string a[n];
	cin.ignore();
	for(int i=0;i<n;i++){
		getline(cin,a[i]);
	}
	for(int i=0;i<n;i++){
		int cnt=0;
		for(int j=0;j<i;j++){
			if(ten(a[j])==ten(a[i])&&tu(a[j])==tu(a[i])){
				if(ss(a[j],a[i])==0){
					++cnt;
				}
			}
		}
		if(cnt==0){
			in(a[i]);
			cout << "@ptit.edu.vn" << endl;
		}
		else{
			in(a[i]);
			cout << cnt+1 << "@ptit.edu.vn" << endl;
		}
	}
}