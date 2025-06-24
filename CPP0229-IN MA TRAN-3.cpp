//Cho ma trận A[N][M]. 
//Nhiệm vụ của bạn là in các phần tử của ma trận theo đường chéo. 
//Ví dụ về in ma trận theo đường chéo: 1 2 5 9 6 3 4 7 10 13 14 11 8 12 15 16.
//Input
//2
//3 3
//1 2 3
//4 5 6
//7 8 9
//2 2
//1 2
//3 4
//Output
//1 2 4 7 5 3 6 8 9
//1 2 3 4
#include <bits/stdc++.h>
using namespace std;
int main(){
	int t; cin >> t;
	while(t--){
		int n, m; cin >> n >> m;
		int a[n][m];
		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++){
				cin >> a[i][j];
			}
		}
		for(int i=0;i<m+n-1;i++){
			if(i%2==0){
				for(int j=i;j>=0;j--){
					if(j<n&&i-j<m){
						cout << a[j][i-j] << " ";
					}
				}
			}
			else{
				for(int j=0;j<=i;j++){
					if(j<n&&i-j<m){
						cout << a[j][i-j] << " ";
					}
				}
			}
		}
		cout << endl;
	}
}
