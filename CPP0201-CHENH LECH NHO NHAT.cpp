 //Cho dãy số A[] gồm có N phần tử. 
 //Bạn cần tìm chênh lệch nhỏ nhất giữa hai phần tử bất kì trong dãy số đã cho.
//Input
//3
//6
//1 5 3 19 18 25
//4
//30 5 20 9
//7
//1 19 2 31 38 25 100
//Output
//1
//4
//1
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		int a[n];
		for(int i=0;i<n;i++){
			cin >> a[i];
		}
		sort(a,a+n);
		long long min=1e10;
		for(int i=1;i<n;i++){
			if(a[i]-a[i-1]<min) min=a[i]-a[i-1];
		}
		cout << min << endl;
	}
}