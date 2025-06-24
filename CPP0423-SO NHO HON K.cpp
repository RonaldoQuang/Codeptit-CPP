//Cho mảng A[] gồm n số nguyên dương và số k. 
//Nhiệm vụ của bạn là hãy sắp đặt lại các phần tử của mảng sao cho các số nhỏ hơn hoặc bằng k đứng cạnh nhau. 
//Ví dụ với mảng A[] = {2, 1, 5, 6, 3}, k = 3 ta chỉ cần thực hiện 1 phép đổi chỗ để có mảng A[] = {2, 1, 3, 6, 5}.
//Input
//2
//5  3
//2  1  5  6  3
//7  5
//2  7  9  5  8  7  4
//Output
//1
//2
#include <bits/stdc++.h>
using namespace std;
int main(){
	int t; cin >> t;
	while(t--){
		int n,k; cin >> n >> k;
		int a[n],cnt=0,dem=0,max=-1e9;
		for(int i=0;i<n;i++){
			cin >> a[i];
			if(a[i]<=k) ++cnt;
		}
		for(int i=0;i<=n-cnt;i++){
			for(int j=i;j<i+cnt;j++){
				if(a[j]<=k) ++dem;
			}
			if(dem>max) max=dem;
			dem=0;
		}
		cout << cnt-max << endl;
	}
}