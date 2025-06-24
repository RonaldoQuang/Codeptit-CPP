//Cho mảng A[] gồm n số nguyên không âm. 
//Ta gọi phần tử A[i] là hợp lệ nếu A[i]≠0 ngược lại là không hợp lệ. 
//Nhiệm vụ của bạn là hãy sắp đặt lại các phần tử của mảng theo nguyên tắc nếu số A[i+1] (i=0,..,n-2) là số hợp lệ và A[i] = A[i+1] thì nhân đôi A[i] và thiết lập A[i+1] = 0. 
//Sau khi thay đổi, hãy di chuyển các số không hợp lệ vào cuối mảng. Các số hợp lệ phải bảo toàn quan hệ trước sau. 
//Ví dụ với mảng A[] = {2, 2, 0, 4, 0, 8 }thực hiện theo nguyên tắc trên ta được kết quả A[] = { 4, 4, 8, 0, 0, 0}.
//Input
//2
//6
//2  2  0  4  0  8
//10
//0  2  2  2  0  6  6  0  0  8
//Output
//4  4  8  0  0  0
//4  2  12  8  0  0  0  0  0  0
#include <bits/stdc++.h>
using namespace std;
int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		int a[n];
		int cnt=0;
		for(int i=0;i<n;i++){
			cin >> a[i];
		}
		int i=0;
		while(i<n){
			if(a[i]==0){
				++cnt;
			}
			else if(a[i]!=0&&a[i]==a[i+1]){
				cout << a[i]*2 << " ";
				a[i+1]=0;
			}
			else if(a[i]!=0&&a[i]!=a[i+1]){
				cout << a[i] << " ";
			}
			++i;
		}
		for(int i=1;i<=cnt;i++){
			cout << "0 ";
		}
		cout << endl;
	}
}