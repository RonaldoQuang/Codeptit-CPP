//Cho số nguyên dương N>2.
//Hãy đưa ra cặp số nguyên tố p, q đầu tiên tìm được có tổng đúng bằng N. 
//Ví dụ N = 6 ta có cặp số nguyên tố đầu tiên là 3 + 3 =6.
//Trong trường hợp không tìm thấy đáp án thì không in ra gì cả.
//Input
//2
//74
//1024
//Output
//3 71
//3 1021
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
		int n,cnt=0; cin >> n;
		for(int i=2;i<=n/2;i++){
			if(nt(i)&&nt(n-i)){
				++cnt;
				cout << i << " " << n-i;
				break;
			}
		}
		cout << endl;
    }
    return 0;
}