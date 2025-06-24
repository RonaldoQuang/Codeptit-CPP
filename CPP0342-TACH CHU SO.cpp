//Cho xâu ký tự S bao gồm các ký tự ‘A’,..,’Z’ và các chữ số ‘0’,...,’9’. 
//Nhiệm vụ của bạn in các ký tự từ ’A’,.., ‘Z’ trong S theo thứ tự anphabet và nối với tổng các chữ số trong S ở cuối cùng. 
//Ví dụ S =”ACCBA10D2EW30” ta nhận được kết quả: “AABCCDEW6”.
#include <bits/stdc++.h>
using namespace std;
int main(){
	int t; cin >> t;
	while(t--){
		string s; cin >> s;
		map<char,int> mp;
		int sum=0;
		for(int i=0;i<s.size();i++){
			if(s[i]<='9'&&s[i]>='0'){
				sum=sum+s[i]-'0';
			}
			else mp[s[i]]++;
		}
		for(auto x:mp){
			for(int i=0;i<x.second;i++){
				cout << x.first;
			}
		}
		cout << sum << endl; 
	}
}