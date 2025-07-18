//Cho mảng A[] gồm n số nguyên dương. 
//Gọi L, R là max và min các phần tử của A[]. 
//Nhiệm vụ của bạn là tìm số phần tử cần thiết cần thêm vào mảng để mảng có đầy đủ các số trong khoảng [L, R]. 
//Ví dụ A[] = {5, 7, 9, 3, 6, 2 } ta nhận được kết quả là 2 tương ứng với các số còn thiếu là 4, 8.
//2
//5
//4 5 3 8 6
//3
//2 1 3
//Output
//1
//0
#include <bits/stdc++.h>
using namespace std;
int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		int a[n];
		set<int> se;
		for(int i=0;i<n;i++){
			cin >> a[i];
			se.insert(a[i]);
		}
		sort(a,a+n);
		cout << a[n-1]-a[0]+1-se.size() << endl;
	}
}