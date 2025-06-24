//Cho hai số nguyên không âm N và K. 
//Nhiệm vụ của bạn là kiểm tra xem K = 1%K + 2%K + ..+ N%K hay không. 
//Đưa ra 1 hoặc 0 nếu cặp N, K thỏa mãn hoặc không thỏa mãn yêu cầu bài toán. 
//Ví dụ với N = 10, K=55 ta có kết quả là 1 vì 55= 1%55 + 2%55+3%55 + ..+ 10%55. 
//Ngược lại, N=4, K=11 có kết quả là 0 vì 11≠1%11+ 2%11+3%11+4%11.
//Input
//2
//10 55
//1 11
//Output
//1
//0
#include <bits/stdc++.h>
using namespace std;
int main(){
	int t; cin >> t;
	while(t--){
		long long n,sum; cin >> n;
		long long k; cin >> k;
		if(n<=k){
			sum=(n+1)*n/2;
		}
		else{
			long long x=n/k;
			long long y=n-k*x;
			sum= x*(k*(k-1)/2)+(y+1)*y/2;
		}
		if(sum==k) cout << "1";
		else cout << "0";
		cout << endl;
	}
}