//Cho số nguyên dương N rất lớn được biểu diễn như một xâu và số M. 
//Hãy tìm K = N%M. 
//Ví dụ N=123456789873123456778976, M = 100 thì K=76.
#include <bits/stdc++.h>
using namespace std;
int main(){
	int t; cin >> t;
	while(t--){
		string s;
		long long m;
		cin >> s >> m;
		long long sum=0;
		for(int i=0;i<s.size();i++){
			sum=sum*10+s[i]-'0';
			sum%=m;
		}
		cout << sum << endl;
	}
}