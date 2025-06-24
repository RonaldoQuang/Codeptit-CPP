//Cho mảng A[] gồm n số nguyên dương. 
//Hãy tìm tổng lớn nhất của dãy con thỏa mãn ràng buộc không có hai phần tử kề nhau thuộc một dãy con. 
//Ví dụ với mảng A[] = {3, 2, 7, 10} ta nhận được kết quả là 13 = 10 + 3. Với mảng A[] = {3, 2, 5, 10, 7} ta có kết quả là 15 = 3 + 5 +7.
//Input
//2
//6
//5  5  10  100  10  5
//3
//1  20  3
//Output
//110
//20
#include <bits/stdc++.h>
using namespace std;
int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		long long a[n];
		for(int i=0;i<n;i++){
			cin >> a[i];
		}
		long long sum=a[0], tong=0, s;
		for(int i=1;i<n;i++){
			s=max(sum,tong);
			sum=tong+a[i];
			tong=s;
		}
		cout << max(sum,tong) << endl;
	}
}