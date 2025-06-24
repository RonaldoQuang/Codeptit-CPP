//Cho ma trận A[N][M] chỉ bao gồm các số 0 và 1. 
//Hãy tìm hình chữ nhật lớn nhất có các phần tử đều bằng 1 bằng cách tráo đổi các cột của ma trận với nhau. 
//Ví dụ với ma trận dưới đây ta sẽ có hình chữ nhật lớn nhất có các phần tử là 1 bằng 6.
//0  1  0  1  0          0  0  1  1  0
//0  1  0  1  1          0  0  1  1  1
//1  1  0  1  0          1  0  1  1  0
//Input
//2
//2 3
//1 1 1
//0 1 1
//2 2
//1 0
//1 1
//Output
//4
//2
#include <bits/stdc++.h>
using namespace std;
int main(){
	int t; cin >> t;
	while(t--){
		int n, m; cin >> n >> m;
		int a[100][100], b[100][100];
		for(int i=0;i<n;i++){
		    for(int j=0;j<m;j++){
			    cin >> a[i][j];
			}
		}
		for(int j=0;j<m;j++) {
			b[0][j]=a[0][j];
			for(int i=1;i<n;i++)
				if(a[i][j]==0) b[i][j]=0;
				else b[i][j]=b[i-1][j]+1;
		}
		for(int i=0;i<n;i++){
		   sort(b[i],b[i]+m);
	    }
		int max1=0;
		for(int i=0;i<n;i++){
			for(int j=m-1;j>=0;j--){
				max1=max(max1,b[i][j]*(m-j));
			}
		}
		cout << max1 << endl;
	}
}