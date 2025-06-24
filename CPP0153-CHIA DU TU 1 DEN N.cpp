//Cho hai số nguyên không âm N và K. 
//Nhiệm vụ của bạn là tìm S = 1%K + 2%K + ..+ N%K. 
//Ví dụ với N = 10, K=2 ta có S = 1%2+2%2+3%2+4%2+5%2+6%2+7%2+8%2+9%2+10%2 = 5. 
//Yêu cầu độ phức tạp thuật toán là hằng số
//Input
//2
//10 55
//1 11
//Output
//55
//1
#include <bits/stdc++.h>
using namespace std;
int main(){
	int t; cin >> t;
	while(t--){
		long long n; cin >> n;
		long long k; cin >> k;
		if(n<=k){
			cout << (long long) ((n+1)*n/2);
		}
		else{
			long long x=n/k;
			long long y=n-k*x;
			cout << x*(k*(k-1)/2)+(y+1)*y/2;
		}
		cout << endl;
	}
}