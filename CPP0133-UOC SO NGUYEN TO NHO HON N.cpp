//Cho số nguyên dương N. 
//Hãy đưa ra tất cả các số nguyên tố nhỏ hơn hoặc bằng N.
//Input
//2
//10
//35
//Output
//2 3 5 7
//2 3 5 7 11 13 17 19 23 29 31
#include <bits/stdc++.h>
using namespace std;
int nt(long long n) {
	if(n<2) return 0;
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0) return 0;
	}
	return 1;
}
int main(){
	int t; cin >> t;
	while(t--){
		long long n; cin >> n;
		for(int i=2;i<=n;i++){
			if(nt(i))cout << i << " ";
		}
		cout << endl;
	}
}