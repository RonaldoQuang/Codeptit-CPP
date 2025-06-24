//Cho mảng A[] gồm n số chưa được sắp xếp. 
//Hãy tìm Min(A[i]-A[j]) : i ≠j và i, j =0, 1, 2, .., n-1. 
//Ví dụ với A[] = {1, 5, 3, 19, 18, 25} ta có kết quả là 1 = 19-18. 
//với A[] = {1, 19, -4, 31, 28, 35, 100} ta có kết quả là 3 = 31-28.
//Input
//2
//5
//2 4 5 7 9
//10
//87 32 99 75 56 43 21 10 68 49
//Output
//1
//6
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
		sort(a,a+n);
		long long min=1e10;
		for(int i=1;i<n;i++){
			if(a[i]-a[i-1]<min) min=a[i]-a[i-1];
		}
		cout << min << endl;
	}
}