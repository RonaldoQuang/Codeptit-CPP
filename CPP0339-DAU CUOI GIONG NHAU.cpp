//Cho xâu ký tự S. 
//Hãy đếm tất cả các xâu con của S có ký tự đầu và ký tự cuối giống nhau. 
//Ví dụ với xâu “aba” ta có 4 xâu con bao gồm: “a”, “b”, “a”, “aba”.
//Input
//2
//abcab
//aba
//Output
//7
//4
#include <bits/stdc++.h>
using namespace std;
int ch(int n){
	return n*(n-1)/2;
}
int main(){
	int t; cin >> t;
	while(t--){
		string s; cin >> s;
		map<char,int> mp;
		int cnt=s.size();
		for(int i=0;i<s.size();i++){
			mp[s[i]]++;
		}
		for(auto x:mp){
			if(x.second>=2){
				cnt+=ch(x.second);
			}
		}
		cout << cnt << endl;
	}
}