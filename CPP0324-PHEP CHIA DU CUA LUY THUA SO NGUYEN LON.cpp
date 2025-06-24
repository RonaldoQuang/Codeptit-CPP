//Cho số nguyên dương a, b, M, trong đó a là số rất lớn được biểu diễn như một xâu ký tự số. 
//Hãy tìm K = (a^b) %M. 
//Ví dụ a = 3, b=2, M = 4 thì K = (3^2)%4 = 1
#include <bits/stdc++.h>
using namespace std;
long long mod(long long a, long long b, long long m){
	long long z=1;
	while(b){
	    if(b%2==1){
	        z*=a;
	        z%=m;
	    }
	    a*=a;
	    a%=m;
	    b/=2;
	}
	return z;
}
int main(){
	int t; cin >> t;
	while(t--){
		string s;
		long long b,m;
		cin >> s >> b >> m;
		long long sum=0;
		for(int i=0;i<s.size();i++){
			sum=sum*10+s[i]-'0';
			sum%=m;
		}
		cout << mod(sum,b,m) << endl;
	}
}