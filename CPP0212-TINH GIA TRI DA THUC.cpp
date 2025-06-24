//Tính toán giá trị đa thức P(n, x) = an-1xn-1 + an-2xn-2 +..+ a0. 
//Kết quả có thể rất lớn nên hãy chia dư cho 10^9 + 7
//Dòng đầu tiên đưa vào số lượng test T.
//Những dòng kế tiếp đưa vào các bộ test. 
//Mỗi test gồm hai dòng: dòng thứ nhất đưa vào hai số n, x; dòng tiếp theo đưa vào n số an-1, an-2, .., a0 là hệ số của đa thức P. 
//Các số được viết cách nhau một vài khoảng trống.
//T, n, x, P[i]  thỏa mãn ràng buộc : 1≤T≤100; 0≤n≤2000; 0≤ x, P[i] ≤1000.
//Chú ý: Các hệ số của đa thức P được viết theo thứ tự từ bậc 0 đến bậc n-1 
//Input
//1
//4 2
//1 2 0 4
//Output
//20
#include <bits/stdc++.h>
using namespace std;
long long mod(long long p, long long x, long long y){
	long long z=1;
	for(int i=1;i<=y;i++){
		z=(z*x)%p;
	}
	return z;
}
int main(){
	int t; cin >> t;
	long long p=1000000007;
	while(t--){
		long long n,x; cin >> n >> x;
		long long a[n];
		for(int i=0;i<n;i++){
			cin >> a[i];
		}
		long long sum=0;
		for(int i=n-1;i>=0;i--){
			sum+=a[n-1-i]*mod(p,x,i);
		}
		cout << sum%p << endl;
	}
}