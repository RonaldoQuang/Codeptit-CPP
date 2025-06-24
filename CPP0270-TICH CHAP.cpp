//Cho ma trận ảnh và ma trận kernel 3x3. 
//Nhiệm vụ của bạn là hãy thực hiện phép nhân tích chập của 2 ma trận, sau đó tính tổng tất cả các phần tử của ma trận thu được.
//2D Convolution
//2 1 0 0
//              -1 -1 -1
//3 2 1 1                       0 -2
//          *   -1  8 -1    =
//4 3 2 1                       7  5
//              -1 -1 -1
//2 2 1 0
//Input
//2
//4 4
//2 1 0 0
//3 2 1 1
//4 3 2 1
//2 2 1 0
//-1 -1 -1
//-1 8 -1
//-1 -1 -1
//3 3
//1 2 3
//4 5 6
//7 8 9
//1 1 1
//1 1 1
//1 1 1
//Output
//10
//45
#include <bits/stdc++.h>
using namespace std;
int tong(int a[300][300], int b[3][3], int c, int d){
	int sum=0;
	for(int i=c;i<=c+2;i++){
		for(int j=d;j<=d+2;j++){
			sum+=a[i][j]*b[i-c][j-d];
		}
	}
	return sum;
}
int main(){
    int t; cin >> t;
    while(t--){
    	int n, m; cin >> n >> m;
    	long long int sum=0;
    	int a[300][300];
    	for(int i=0;i<n;i++){
    		for(int j=0;j<m;j++){
    			cin >> a[i][j];
			}
		}
		int b[3][3];
		for(int i=0;i<3;i++){
			for(int j=0;j<3;j++){
				cin >> b[i][j];
			}
		}
		for(int i=0;i<=n-3;i++){
			for(int j=0;j<=m-3;j++){
				sum+=tong(a,b,i,j);
			}
		}
		cout << sum << endl;	
	}
}