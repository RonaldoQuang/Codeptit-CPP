//Cho hai hàm h(x) và g(x) xác định trên tập các số tự nhiên A[] gồm n phần tử. 
//Trong đó, h(x) là tích của các số trong mảng A[], g(x) là ước số chung lớn nhất của các số trong mảng A[]. 
//Nhiệm vụ của bạn là tìm giá trị h(x)g(x). 
//Chú ý, khi lời giải cho kết quả lớn hãy đưa ra giá trị modulo với 10^9+7.
//Input
//1
//2
//2 4
//Output
//64
#include <bits/stdc++.h>
using namespace std;
const int MOD=1e9+7;
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
		int n; cin >> n;
		long long a[n];
		for(int i=0;i<n;i++){
			cin >> a[i];
		}
		long long h=1, g=a[0];
		for(int i=0;i<n;i++){
			h*=a[i];
			h%=MOD;
		}
		for(int i=0;i<n;i++){
			g=__gcd(g,a[i]);
		}
		cout << mod(h,g,MOD) << endl;
	}
}