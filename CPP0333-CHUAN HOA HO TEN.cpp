//Tên người dùng sẽ được chuẩn hóa theo nguyên tắc tên được viết sau cùng, phân tách với phần tên đệm và tên bởi dấu phẩy. 
//Các chữ cái nằm trong tên đều được viết hoa; chữ cái đầu tiên của tên đệm và họ được viết hoa, các chữ cái còn lại viết thường.
//Input
//Nguyen vAn nAM
//Output
//Nguyen Van, NAM
#include <bits/stdc++.h>
using namespace std;
string ch(string t){
	if(t[0]<='z'&&t[0]>='a'){
		t[0]-=32;
	}
	for(int i=1;i<t.size();i++){
		if(t[i]<='Z'&&t[i]>='A'){
			t[i]+=32;
		}
	}
	return t;
}
string ch1(string t){
	for(int i=0;i<t.size();i++){
		if(t[i]<='z'&&t[i]>='a'){
			t[i]-=32;
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
	for(int i=0;i<v.size()-1;i++){
		if(i==v.size()-2){
			cout << ch(v[i]) << ", ";
		}
		else{
			cout << ch(v[i]) << " ";
		}
	}
	cout << ch1(v[v.size()-1]);
}