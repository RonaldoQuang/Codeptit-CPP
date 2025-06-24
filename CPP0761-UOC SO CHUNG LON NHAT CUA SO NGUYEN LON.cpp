//Cho hai số a và b trong đó a≤10^12, b≤10^250. 
//Nhiệm vụ của bạn là tìm ước số chung lớn nhất của hai số a, b.
//Input
//1
//1221
//1234567891011121314151617181920212223242526272829
//Output
//3
#include <bits/stdc++.h>
using namespace std;
int main(){
	int t; cin >> t;
	while(t--){
		long long a; cin >> a;
		string b; cin >> b;
		long long sum=0;
		for(int i=0;i<b.size();i++){
			sum=sum*10+b[i]-'0';
			sum%=a;
		}
		long long s=__gcd(a,sum);
		cout << s << endl;
	}
}