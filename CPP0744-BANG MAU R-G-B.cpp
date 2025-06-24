//Ta cần tạo một xâu ký tự S có độ dài n. 
//Trong đó, mỗi ký tự trong S chỉ là các ký tự R, B, hoặc G. 
//Xâu ký tự nhận được có ít nhất r ký tự R, b ký tự B, g ký tự G (r + b + g ≤n). 
//Hãy đếm số các xâu ký tự thỏa mãn yêu cầu kể trên. 
//Ví dụ với n=4, r=1, b=1, g = 1 ta có thể có 36 xâu ký tự khác nhau.
//Input
//2
//4 1 1 1
//4 2 0 1
//Output
//36
//22
#include <bits/stdc++.h>
using namespace std;
long long gt(long long n){
	if(n==1||n==0) return 1;
	else return n*gt(n-1);
}
int main(){
	int t; cin >> t;
	while(t--){
		long long n,r,b,g; cin >> n >> r >> b >> g;
		long long x=n-r-b-g,sum=0,a=gt(n);
		for(int i=r;i<=r+x;i++){
			for(int j=b;j<=b+(n-i)-(b+g);j++){
				sum+=a/(gt(i)*gt(j)*gt(n-i-j));
			}
		}
		cout << sum << endl;
	}
}