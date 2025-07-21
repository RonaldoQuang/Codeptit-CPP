//Hãy sinh ra tất cả các số nguyên tố trong khoảng [M, N]. 
//Ví dụ M=1, N=10 ta có kết quả 2  3  5  7.
//Input
//2
//1 10
//3 5
//Output
//2 3 5 7
//3 5
#include <bits/stdc++.h>
using namespace std;
int nt(int n){
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0) return 0;
	}
	return n>1;
}
int main(){
	int t; cin >> t;
	while(t--){
        int a, b; cin >> a >> b;
        for(int i=a;i<=b;i++) {
            if(nt(i)) cout << i << " ";
        }
        cout << endl;
    }
}
