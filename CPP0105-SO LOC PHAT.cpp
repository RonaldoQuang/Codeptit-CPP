//Một số được gọi là “lộc phát” nếu chỉ có các chữ số 0,6,8.
//Nhập vào một số nguyên dương không quá 9 chữ số, hãy kiểm tra xem đó có phải số lộc phát hay không.
//Input 
//3
//181 88888 608868
//Output
//NO YES YES
#include <bits/stdc++.h>
using namespace std;
int main(){
	int t; cin >> t;
	while(t--){
		string s; cin>> s;
		int cnt=0;
		for(int i=0;i<s.size();i++){
			if(s[i]!='0'&&s[i]!='6'&&s[i]!='8'){
				cout << "NO\n";
				++cnt;
				break;
			}
		}
		if(cnt==0) cout << "YES\n";
	}
}