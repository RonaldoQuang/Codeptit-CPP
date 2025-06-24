//Cho ma trận A[N][M] bao gồm các số 0 và 1. 
//Ta gọi mỗi miền của ma trận A[][] là nhóm các số 1 được bao quanh bởi các số 0. 
//Hãy tìm số miền của ma trận. 
//Ví dụ số miền của ma trận A[][] là 4.
//1 1 0 0 0
//0 1 0 0 1
//1 0 0 1 1
//0 0 0 0 0
//1 0 1 1 0
//Input
//2
//3 3
//1 1 0 0 0 1 1 0 1
//4 4
//1 1 0 0 0 0 1 0 0 0 0 1 0 1 0 0
//Output
//2
//2
#include <bits/stdc++.h>
using namespace std;
int dx[8]={-1,-1,-1,0,0,1,1,1};
int dy[8]={-1,0,1,-1,1,-1,0,1};
void duyet(int a[100][100], int i, int j, int n, int m){
	a[i][j]=0;
	for(int k=0;k<8;k++){
		int i1=i+dx[k], j1=j+dy[k];
		if(i1>=0&&i1<n&&j1>=0&&j1<m&&a[i1][j1]==1){
			duyet(a,i1,j1,n,m);
		}
	}
}
int main(){
	int t; cin >> t;
	while(t--){
		int n, m, a[100][100]; cin >> n >> m;
		int cnt=0;
		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++){
				cin >> a[i][j];
			}
		}
		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++){
				if(a[i][j]==1){
					++cnt;
					duyet(a,i,j,n,m);
				}
			}
		}
		cout << cnt << endl; 
	}
}