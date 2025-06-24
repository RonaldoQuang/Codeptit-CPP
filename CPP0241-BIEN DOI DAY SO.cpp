//Cho mảng A[] gồm n số nguyên dương. 
//Hãy biến mảng A[] thành một mảng đối xứng sao cho phép thay thế A[i] = Merge(A[i], A[i+1]) được thực hiện ít nhất. 
//Trong đó, Merge(A[i], A[i+1]) = A[i] + A[i+1]. 
//Ví dụ với A[] = {3, 2, 3, 3, 5} ta chỉ cần thực hiện 1 phép Merge(A[0], A[1]) để trở thành mảng A[] = {5, 3, 3, 5}.
//Input
//2
//5
//3 2 3 3 5
//4
//5 3 3 4
//Output
//1
//3
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
		int i=0,j=n-1,cnt=0;
		while(i<=j){
			if(a[i]==a[j]){
				++i;
				--j;
			}
			else if(a[i]<a[j]){
				++i;
				a[i]+=a[i-1];
				++cnt;
			}
			else if(a[i]>a[j]){
				--j;
				a[j]+=a[j+1];
				++cnt;
			}
		}
		cout << cnt << endl;
	}
}