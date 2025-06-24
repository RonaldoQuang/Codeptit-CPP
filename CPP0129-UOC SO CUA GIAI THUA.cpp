//Cho số tự nhiên N và số nguyên tố P. 
//Nhiệm vụ của bạn là tìm số x lớn nhất để N! chia hết cho px. 
//Ví dụ với N=7, p=3 thì x=2 là số lớn nhất để 7! Chia hết cho 3^2.
//Input
//3
//62  7
//76  2
//3  5
//Output
//9
//73
//0
#include <bits/stdc++.h>
using namespace std;
int mod(int n, int p){
	int demp=0;
	while(n%p==0){
		++demp;
		n/=p;
	}
	return demp;
}
int main(){
	int t; cin >> t;
	while(t--){
		int N,p,dem=0; cin >> N >> p;
		for(int j=p;j<=N;j+=p){
			dem=dem+mod(j,p);
		}
		cout << dem << endl;
	}
}
