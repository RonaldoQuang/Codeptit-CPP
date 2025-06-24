//Cho ma trận A[N][M]. 
//Nhiệm vụ của bạn là in các phần tử của ma trận theo hình xoắn ốc ngược. 
//Ví dụ về in ma trận theo hình xoắn ốc ngược như dưới đây: 10  11  7  6  5  9  13  14  15 16  12  8  4  3  2  1.
//Input
//2
//4 4
//1 2 3 4
//5 6 7 8
//9 10 11 12
//13 14 15 16
//3 6
//1 2 3 4 5 6
//7 8 9 10 11 12
//13 14 15 16 17 18
//Output
//10 11 7 6 5 9 13 14 15 16 12  8  4  3  2  1
//11 10 9 8 7 13 14 15 16 17 18 12 6 5 4 3 2 1
#include <bits/stdc++.h>
using namespace std;
int main(){
	int t; cin >> t;
	while(t--){
		int n,m; cin >> n >> m;
		int a[n][m],b[n][m],c[n*m];
		int cnt=1,h1=0,h2=n-1,c1=0,c2=m-1;
		while(h1<=h2&&c1<=c2){
			for(int i=c1;i<=c2;i++){
				a[h1][i]=cnt;
				++cnt;
			}
			++h1;
			for(int i=h1;i<=h2;i++){
				a[i][c2]=cnt;
				++cnt;
			}
			--c2;
			if(c1<=c2&&h1<=h2){
				for(int i=c2;i>=c1;i--){
					a[h2][i]=cnt;
					++cnt;
				}
				--h2;
			}
			if(h1<=h2&&c1<=c2){
				for(int i=h2;i>=h1;i--){
					a[i][c1]=cnt;
					++cnt;
				}
				++c1;
			}
		}
		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++){
				cin >> b[i][j];
			}
		}
		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++){
				c[a[i][j]-1]=b[i][j];
			}
		}		
		for(int i=n*m-1;i>=0;i--){
			cout << c[i] << " ";
		}
		cout << endl;
	}
}
