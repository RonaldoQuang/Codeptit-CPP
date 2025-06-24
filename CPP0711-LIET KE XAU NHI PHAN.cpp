//Cho số tự nhiên N. Hãy đưa ta các xâu nhị phân có độ dài N.
//Input
//2
//2
//3
//Output
//00  01  10 11
//000 001 010 011 100 101 110 111
#include <bits/stdc++.h>
using namespace std;
void kt(int a[100], int n){
	for(int i=0;i<n;i++){
		a[i]=0;
	}
}
int sinh(int a[100], int n){
	int i=n-1;
	while(i>=0&&a[i]==1){
		a[i]=0;
		--i;
	}
	if(i==-1) return 0;
	else{
		a[i]=1;
		return 1;
	}
}
int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		int a[100];
		int x=1;
		kt(a,n);
		while(x){
			for(int i=0;i<n;i++){
				cout << a[i];
			}
			cout << " ";
			if(sinh(a,n)) x=1;
			else x=0;
		}
		cout << endl;
	}
}