//Viết chương trình cho phép nhập vào một chuỗi và từ cần loại bỏ khỏi chuỗi. 
//Thực hiện loại bỏ từ và in ra kết quả
//Input
//Toi Yeu PTIT
//Toi
//Output
//Yeu PTIT
#include <bits/stdc++.h>
using namespace std;
int main(){
	string s,a;
	getline(cin,s);
	cin >> a;
	stringstream ss(s);
	string w;
	vector<string> v;
	while(ss >> w){
		v.push_back(w);
	}
	for(int i=0;i<v.size();i++){
		if(v[i]!=a){
			cout << v[i] << " ";
		}
	}
}