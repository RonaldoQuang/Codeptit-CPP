//Cho ma trận A[N][M] có các phần tử hoặc là ký tự ‘’O’’ hoặc là ký tự ‘’X’’. 
//Hãy thay thế các miền bao quanh ‘O’ bằng ‘X’. 
//Một miền các ký tự ‘O’ bị bao quang bởi ký tự ‘X’ nếu các ký tự ‘X’ xuất hiện ở phía dưới, phía trên, bên trái, bên phải các ký tự ‘O’. 
//Ví dụ với ma trận dưới đây ta sẽ có kết quả như sau:
//X  X  X  X            X  X  X  X
//X  O  X  X            X  X  X  X
//X  O  O  X            X  X  X  X
//X  O  X  X            X  X  X  X
//X  X  O  O            X  X  O  O
//Input
//2
//1 5
//X O X O X 
//3 3
//X X X
//X O X
//X X X
//Output
//X O X O X

//X X X
//X X X
//X X X
#include <bits/stdc++.h>
using namespace std;
int d1[4]={-1,0,0,1};
int d2[4]={0,-1,1,0};
void quet(char a[100][100], int i, int j, int n, int m){
	a[i][j]='*';
	for(int k=0;k<4;k++){
		int i1=i+d1[k], j1=j+d2[k];
		if(i1>=0&&i1<n&&j1>=0&&j1<m&&a[i1][j1]=='O'){
			quet(a,i1,j1,n,m);
		}
	}
}
int main(){
	int t; cin >> t;
	while(t--){
		int n, m; cin >> n >> m;
		char a[100][100];
		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++){
				cin >> a[i][j];
			}
		}
		for(int j=0;j<m;j++){
			if(a[0][j]=='O') quet(a,0,j,n,m);
			if(a[n-1][j]=='O') quet(a,n-1,j,n,m);
		}
		for(int i=0;i<n;i++){
			if(a[i][0]=='O') quet(a,i,0,n,m);
			if(a[i][m-1]=='O') quet(a,i,m-1,n,m);
		}
		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++){
				if(a[i][j]=='*') cout << "O ";
				else if(a[i][j]=='O') cout << "X ";
				else cout << a[i][j] << " ";
			}
			cout << endl;
		}
	}
}