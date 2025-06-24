//Cho ma trận A[N][M] chỉ bao gồm các số 0 và 1. 
//Hãy sửa đổi các phần tử của ma trận A[][] theo nguyên tắc: nếu phần tử A[i][j] = 1 ta thay tất cả các phần tử của hàng i, cột j bởi 1. 
//Ví dụ với ma trận dưới đây sẽ minh họa cho phép biến đổi:
//1 0 0 1          1 1 1 1
//0 0 1 0          1 1 1 1
//0 0 0 0          1 0 1 1
//Input
//2
//2 3
//0 0 0 
//0 0 1
//3 4
//1 0 0 1 
//0 0 1 0 
//0 0 0 0
//Output

//0 0 1
//1 1 1

//1 1 1 1
//1 1 1 1
//1 0 1 1
#include <bits/stdc++.h>
using namespace std;
int main(){
	int t; cin >> t;
	while(t--){
		int n, m; cin >> n >> m;
		int a[n][m];
		multimap<int,int> mp;
		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++){
				cin >> a[i][j];
				if(a[i][j]==1){
					mp.insert({i,j});
				}
				if(a[i][j]==0){
					mp.insert({i,1e9});
				}
			}
		}
		for(auto x:mp){
			if(x.second<1e9){
				for(int i=0;i<m;i++){
					a[x.first][i]=1;
				}
				for(int i=0;i<n;i++){
					a[i][x.second]=1;
				}
			}
		}
		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++){
				cout << a[i][j] << " ";
			}
			cout << endl;
		}
	}
}