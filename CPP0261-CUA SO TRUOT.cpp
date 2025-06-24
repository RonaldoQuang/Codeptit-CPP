//Cho ma trận vuông A cỡ N*N. 
//Một ma trận vuông B nhỏ hơn cỡ M*M có thể dùng làm “cửa sổ trượt” trên ma trận A nếu M là ước số của N.
//Hãy thực hiện tính tích chập của ma trận B với từng “khung cửa số” tương ứng trên ma trận A. 
//Tích chập được hiểu là tính giá trị tích từng vị trí tương ứng trên 2 ma trận kích thước bằng nhau.
//Xem ví dụ để hiểu rõ hơn.
//Input
//4
//1 2 3 4
//5 6 7 8
//9 10 11 12
//13 14 15 16
//2
//1 0
//0 2
//Output
//1 0 3 0
//0 12 0 16
//9 0 11 0
//0 28 0 32
#include <bits/stdc++.h>
using namespace std;
int main(){
	int n; cin >> n;
	int a[n][n];
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
		    cin >> a[i][j];
		}
	}
	int m; cin >> m;
	int b[m][m];
	for(int i=0;i<m;i++){
		for(int j=0;j<m;j++){
     		cin >> b[i][j];
     	}
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cout << a[i][j]*b[i%m][j%m] << " ";
		}
		cout << endl;
	}
}