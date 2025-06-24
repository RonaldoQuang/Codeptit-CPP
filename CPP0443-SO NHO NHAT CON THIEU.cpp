//Cho mảng A[] gồm n-1 phần tử bao gồm các khác nhau từ 1, 2, .., n. 
//Hãy tìm số nguyên dương nhỏ nhất không có mặt trong mảng A[].
//2
//5
//1 2 3 5
//10
//1 2 3 4 5 6 7 8 10
//Output
//4
//9
#include <bits/stdc++.h>
using namespace std;
int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		int a[n-1];
		for(int i=0;i<n-1;i++){
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