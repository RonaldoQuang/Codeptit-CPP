//Cho xâu ký tự S bao gồm các ký tự ‘a’,..,’z’ và các chữ số. 
//Nhiệm vụ của bạn là hãy tìm số lớn nhất có mặt trong xâu.
//Input
//3
//100klh564abc365bg
//abvhd9sdnkjdfs
//abchsd0sdhs
//Output
//564
//9
//0
#include <bits/stdc++.h>
using namespace std;
int main(){
	int t; cin >> t;
	while(t--){
		string s; cin >> s;
		int max=-1e9;;
		int i=0;
		while(i<s.size()){
			long long so=0;
			while(s[i]<='9'&&s[i]>='0'){
				so=so*10+s[i]-'0';
				++i;
			}
			if(so>max) max=so;
			++i;
		}
		cout << max << endl;
	}
}