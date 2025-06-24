//Địa chỉ email của cán bộ PTIT được cấp theo nguyên tắc ghép tên với chữ cái đầu tiên của họ và tên đệm. 
//Viết chương trình cho phép tạo các địa chỉ email theo tên cán bộ
//Input
//Nguyen vAn nAM
//Output
//namnv@ptit.edu.vn
#include <bits/stdc++.h>
using namespace std;
char ch(string t){
	if(t[0]<='Z'&&t[0]>='A'){
		return t[0]+=32;
	}
	else return t[0];
}
string ch1(string t){
	for(int i=0;i<t.size();i++){
		if(t[i]<='Z'&&t[i]>='A'){
			t[i]+=32;
		}
	}
	return t;
}
int main(){
	string s;
	getline(cin,s);
	stringstream ss(s);
	string w;
	vector<string> v;
	while(ss >> w){
		v.push_back(w);
	}
	cout << ch1(v[v.size()-1]);
	for(int i=0;i<v.size()-1;i++){
		cout << ch(v[i]);
	}
	cout << "@ptit.edu.vn";
}