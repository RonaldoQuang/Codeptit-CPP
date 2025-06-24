//Cho một câu hỏi Q là bộ đôi hai số L và R. 
//Nhiệm vụ của bạn là xác định xem có bao nhiêu số nguyên tố trong khoảng [L, R]. 
//Ví dụ với Q = [1, 10] ta có câu trả lời là 4 vì có {2, 3, 5, 7} là các số nguyên tố. 
//Input
//2
//1 10
//5 10
//Output
//4
//2
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
			for(int j=i*i;j<=100000;j+=i){
				prime[j]=0;
			}
		}
	}
}
int main() {
	sang();
	int t; cin >> t;
	while(t--){
		int l,r,cnt=0; cin >> l >> r;
		for(int i=l;i<=r;i++){
			if(prime[i]) ++cnt;
		}
		cout << cnt << endl;
	}
}