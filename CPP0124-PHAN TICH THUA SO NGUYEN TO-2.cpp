//Cho số nguyên dương n (2<=n<=10^9).
//Hãy phân tích n ra thừa số nguyên tố.
//Input
//168
//Output
//2 3
//3 1
//7 1
#include <bits/stdc++.h>
using namespace std;
int main(){
	int n; cin >> n;
	for(int i=2;i<=sqrt(n);i++){
		int cnt=0;
		while(n%i==0){
			++cnt;
			n/=i;
		}
		if(cnt>0) cout << i << " " << cnt << endl;
	}
	if(n!=1){
		cout << n << " 1\n";
	}
	cout << endl; 
}