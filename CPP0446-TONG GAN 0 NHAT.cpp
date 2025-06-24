//Cho mảng A[] gồm n phần tử, hãy tìm cặp phần tử có tổng gần nhất so với 0.
//2
//3
//-8 -66 -60 
//6
//-21 -67 -37 -18 4 -65
//Output
//-68
//-14
#include <bits/stdc++.h>
using namespace std;
int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		int a[n];
		for(int i=0;i<n;i++){
			cin >> a[i];
		}
		int min=1e9,m;
		for(int i=0;i<n-1;i++){
			for(int j=i+1;j<n;j++){
				if(abs(a[i]+a[j])<min){
					min=abs(a[i]+a[j]);
					m=a[i]+a[j];
				}
			}
		}
		cout << m << endl;
	}
}