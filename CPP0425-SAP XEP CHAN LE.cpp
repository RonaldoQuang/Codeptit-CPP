//Cho mảng A[] gồm n số nguyên dương. 
//Nhiệm vụ của bạn là hãy sắp xếp lại các phần tử của mảng sao cho A[i] ≥A[i-1] nếu i chẵn,  A[i] ≤A[i-1] nếu i lẻ. 
//Ví dụ với mảng A[] = {1, 2, 2, 1} ta được mảng được sắp A[] = { 1, 2, 1, 2}.
//Input
//2
//4
//1  2  2 1
//3
//1  3  2
//Output
//1  2  1  2
//1  3  2
#include <bits/stdc++.h>
using namespace std;
int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		int a[n+1];
		for(int i=1;i<=n;i++){
			cin >> a[i];
		}
		sort(a+1,a+n+1);
		if(n%2==0){
			int x=n/2;
			for(int i=1;i<=x;i++){
				cout << a[i] << " " << a[i+x] << " ";
			}
		}
		else{
			int x=(n+1)/2;
			for(int i=1;i<x;i++){
				cout << a[i] << " " << a[i+x] << " ";
			}
			cout << a[x];
		}
		cout << endl;
	}
}