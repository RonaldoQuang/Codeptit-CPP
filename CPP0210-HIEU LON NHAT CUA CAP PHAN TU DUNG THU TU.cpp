//Cho mảng A[] gồm n số nguyên. 
//Hãy tìm hiệu lớn nhất của bất kể hai phần tử nào của mảng dãy con thỏa mãn ràng buộc số lớn hơn xuất hiện sau số nhỏ hơn. 
//Nếu không tìm được cặp phần tử của mảng hãy đưa ra -1. 
//Ví dụ với mảng A[] = {2, 3, 10, 6, 4, 8, 1} ta nhận được kết quả là 8 = 10-2. 
//Với mảng A[] = {7, 9, 5, 6, 3, 2} ta có kết quả là 2 = 9-7.
//Input
//2
//7
//2  3  10  6  4  8  1
//3
//3  2  1
//Output
//8
//-1
#include <bits/stdc++.h>
using namespace std;
int main() {
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		int a[n];
		for(int i=0;i<n;i++){
			cin >> a[i];
		}
		int max=-1e9;
		for(int i=0;i<n-1;i++){
			for(int j=i+1;j<n;j++){
				if(a[j]>a[i]&&a[j]-a[i]>max){
					max=a[j]-a[i];
				}
			}
		}
		if(max<0) cout << "-1";
		else cout << max;
		cout << endl;
	}
}