//Cho xâu ký tự S và số k. 
//Nhiệm vụ của bạn là đếm số xâu con của S có đúng k ký tự khác nhau. 
//Các xâu con không nhất thiết phải khác nhau. 
//Ví dụ với xâu S=”abc” và k = 2, ta có kết quả là 2 bao gồm các xâu con: “ab”, “bc”.
//Input
//2
//abc  2
//aba  2
//Output
//2
//3
#include <bits/stdc++.h>
using namespace std;
int main(){
	int t; cin >> t;
	while(t--){
		string s; cin >> s;
		int k,cnt=0; cin >> k;
		for(int i=0;i<=s.size()-k;i++){
			set<char> se;
			for(int j=i;j<s.size();j++){
				se.insert(s[j]);
				if(se.size()==k){
					++cnt;
				}
			}
		}
		cout << cnt << endl;
	}
}