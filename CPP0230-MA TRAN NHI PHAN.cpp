//Cho ma trận A[] có N hàng và 3 cột, trong đó các vị trí là các giá trị nhị phân (0 hoặc 1). 
//Hãy đếm xem có bao nhiêu hàng mà số lượng số 1 nhiều hơn số lượng số 0.
//Input
//3
//1 1 0
//1 1 1
//1 0 0
//2
//1 0 0
//0 1 1
//Output
//2
//1
#include <bits/stdc++.h>
using namespace std;
int main(){
	int n,dem=0; cin >> n;
	int a[n][3];
	for(int i=0;i<n;i++){
		int cnt=0;
		for(int j=0;j<3;j++){
			cin >> a[i][j];
			if(a[i][j]==1){
				++cnt;
			}
		}
		if(cnt>3-cnt){
			++dem;
		}
	}
	cout << dem;
}