//Cho số tự nhiên N. 
//Nhiệm vụ của bạn là hãy đưa ra ước số nguyên tố nhỏ nhất của các số từ 1 đến N.
//Ví dụ n=10, ta có được kết quả : 1 2 3 2 5 2 7 2 3 2.
//Input
//2
//5
//10
//Output
//1 2 3 2 5 
//1 2 3 2 5 2 7 2 3 2
#include <bits/stdc++.h>
using namespace std;
int snt(int n){
	if(n<2) return 0;
	else
		for(int i=2;i<=sqrt(n);i++)
			if(n%i==0) return 0;
	return 1;
}
int g(int n){
	for(int i=1;i<=n;i++)
		if(n%i==0&&snt(i))
			return i;
}
int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		cout << 1 << " ";
		for(int i=2;i<=n;i++)
			cout << g(i) << " ";
		cout << endl;
	}
}