//Cho xâu ký tự S bao gồm các ký tự ‘a’,..,’z’. 
//Các ký tự trong S có thể lặp lại. 
//Nhiệm vụ của bạn sắp đặt lại các ký tự trong S sao cho các ký tự kề nhau đều khác nhau.
//Đưa ra 1 hoặc 0 nếu có thể hoặc không thể sắp đặt lại các ký tự trong xâu S thỏa mãn yêu cầu bài toán.
//Input
//3
//geeksforgeeks
//bbbabaaacd
//bbbbb
//Output
//1
//1
//0
#include <bits/stdc++.h>
using namespace std;
int main(){
	int t; cin >> t;
	while(t--){
		string s; cin >> s;
		map<char,int> mp;
		for(int i=0;i<s.size();i++){
			mp[s[i]]++;
		}
		int max=-1e9;
		for(auto x:mp){
			if(x.second>max) max=x.second;
		}
		if(s.size()%2==0){
			if(max<=s.size()/2) cout << "1\n";
			else cout << "0\n";
		}
		else{
			if(max<=s.size()/2+1) cout << "1\n";
			else cout << "0\n";
		}
	}
}