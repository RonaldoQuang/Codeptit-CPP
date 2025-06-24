//Cho số tự nhiên N. Nhiệm vụ của bạn là hãy đưa ra tất cả các ước số nguyên tố của N cùng lũy thừa của nó.
//Ví dụ N=100 = 2 2 × 5 2. N = 35 =5 1 × 7 1.
//Input
//2
//100
//35  
//Output
//2 2 5 2
//5 1 7 1
#include <bits/stdc++.h>
using namespace std;
int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		for(int i=2;i<=sqrt(n);i++){
			int cnt=0;
			while(n%i==0){
				++cnt;
				n/=i;
			}
			if(cnt>0) cout << i << " " << cnt << " ";
		}
		if(n!=1){
			cout << n << " 1\n";
		}
		cout << endl; 
	}
}