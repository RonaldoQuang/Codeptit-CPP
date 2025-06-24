//Cho mảng A[] gồm n số nguyên bao gồm cả số 0. 
//Nhiệm vụ của bạn là tìm số nguyên dương nhỏ nhất không có mặt trong mảng. 
//Ví dụ với mảng A[] = {5, 8, 3, 7, 9, 1}, ta có kết quả là 2.
//Input
//2
//5
//1 2 3 4 5
//5
//0 -10 1 3 -20
//Output
//6
//2
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
		int min=1;
		for(int i=0;i<n;i++){
			if(a[i]>0){
				if(a[i]==min) min=a[i]+1;
			}
		}
		cout << min << endl;
	}
}