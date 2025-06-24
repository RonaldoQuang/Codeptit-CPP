//Cho ma trận A[][] gồm các số nguyên dương. 
//Nhiệm vụ của bạn là quay ma trận theo chiều kim đồng hồ. 
//Ví dụ về quay theo chiều kim đồng hồ ma trận A[][] dưới đây.
//1   2   3          4   1   2         
//4   5   6          7   5   3
//7   8   9          8   9   6
//Input:
//2
//2 2
//1 2 5 6
//3 3
//1 2 3 4 5 6 7 8 9
//Output
//5 1 6 2
//4 1 2 7 5 3 8 9 6
#include <bits/stdc++.h>
using namespace std;
int main(){
    int t; cin >> t;
    while(t--){
    	int n, m;
        cin >> n >> m;
        int a[n][m], b[n][m]={};
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cin >> a[i][j];
            }
        }
        for(int i=n-1;i>=n/2;i--) {
            for(int j=n-i;j<=i;j++) {
                b[n-i-1][j]=a[n-i-1][j-1];
                b[i][j-1]=a[i][j];
                b[j][i]=a[j-1][i];
                b[j-1][n-i-1]=a[j][n-i-1];
            }
        }
        for(int i=0;i<n;i++) {
            for(int j=0;j<m;j++) {
                if(b[i][j]==0) cout << a[i][j] << " ";
                else cout << b[i][j] << " ";
            }
        }
        cout << endl;
	}
}