//Cho số tự nhiên N. 
//Nhiệm vụ của bạn là in ra ước số nguyên tố nhỏ nhất của các số từ 1 đến N. 
//Trong bài toán này, ta coi ước số nguyên tố nhỏ nhất của 1 là 1. 
//Ước số nguyên tố nhỏ nhất của các số chẵn là 2. 
//Ước số nguyên tố nhỏ nhất của các số nguyên tố là chính nó.
//Input
//2
//6
//10
//Output
//1 2 3 2 5 2
//1 2 3 2 5 2 7 2 3 2
#include <bits/stdc++.h>
using namespace std;
int prime[10001];
void sang(){
	for(int i=1;i<=1e4;i++){
		prime[i]=i;
	}
	for(int i=2;i<=sqrt(1e4);i++){
		if(prime[i]==i){
			for(int j=i*i;j<=1e4;j+=i){
				if(prime[j]==j){
					prime[j]=i;
				}
			}
		}
	}
}
int main() {
	sang();
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		for(int i=1;i<=n;i++){
			cout << prime[i] << " ";
		}
		cout << endl;
	}
}