//Cho mảng A[] gồm n số nguyên dương. 
//Hãy tìm hiệu lớn nhất của i-j thỏa mãn ràng buộc A[i]<=A[j]. 
//Ví dụ với mảng A[] = {34, 8, 10, 3, 2, 80, 30, 33, 1} ta nhận được kết quả là 6  vì A[1]<A[7] và 7-1 = 6 là lớn nhất.
//Input
//1
//9
//34 8 10 3 2 80 30 33 1
//Output
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
		int max1=0;
		for(int i=0;i<n-1;i++){
			for(int j=n-1;j>=i+1;j--){
				if(a[j]>a[i]){
					max1=max(max1,j-i);
					break;
				}
			}
		}
		cout << max1 << endl;
	}
}