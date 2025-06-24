//Cho xâu ký tự S bao gồm các ký tự ‘a’,..,’z’ và các chữ số. 
//Nhiệm vụ của bạn là hãy tính tổng các số có mặt trong xâu.
//Input
//4
//1abc23
//geeks4geeks
//1abc2x30yz67
//123abc
//Output
//24
//4
//100
//123
#include <bits/stdc++.h>
using namespace std;
int main(){
	int t; cin >> t;
	while(t--){
		string s; cin >> s;
		long long sum=0;
		int i=0;
		while(i<s.size()){
			long long so=0;
			while(s[i]<='9'&&s[i]>='0'){
				so=so*10+s[i]-'0';
				++i;
			}
			sum+=so;
			++i;
		}
		cout << sum << endl;
	}
}