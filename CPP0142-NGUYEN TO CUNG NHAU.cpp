//Juggernaut được cô giáo Disruptor dạy toán, cô giáo định nghĩa một hàm f(x) như sau:
//Với  t là số lượng các số tự nhiên k (1 <= k <= x) thỏa mãn nguyên tố cùng nhau với x, nếu t là nguyên tố thì f(x) = 1, ngược lại f(x) = 0.
//Disruptor cho Juggernaut một số nguyên dương x, yêu cầu anh cho biết giá trị của hàm f(x).
//Nếu trả lời sai thì Jug sẽ bị  cô trả về nhà, Jug không muốn về nhà, các bạn hãy giúp Jug giải bài toán này.
//Input
//2
//2
//3
//Output
//0
//1
#include <bits/stdc++.h>
using namespace std;
int prime[100001];
void sang(){
	for(int i=0;i<=100000;i++){
		prime[i]=1;
	}
	prime[0]=0, prime[1]=0;
	for(int i=2;i<=sqrt(100000);i++){
		if(prime[i]==1){
			for(int j=i*i;j<=100000;j += i){
				prime[j]=0;
			}
		}
	}
}
int gcd(int a, int b){
    while(b>0){
        int x=a%b;
        a=b;
        b=x;
    }
    return a;
}
int main() {
	sang();
	int t; cin >> t;
	while(t--){
		int n,cnt=1; cin >> n;
		for(int i=2;i<n;i++){
			if(gcd(i,n)==1){
				++cnt;
			}
		}
		if(prime[cnt]) cout <<  "1\n";
		else cout << "0\n";
	}
}