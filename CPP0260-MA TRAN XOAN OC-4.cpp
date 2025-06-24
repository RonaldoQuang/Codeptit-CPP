//Cho ma trận vuông A cỡ N*N chỉ bao gồm các số nguyên dương không quá 1000. 
//Hãy sắp đặt các giá trị trong ma trận A sao cho các số được điền lần lượt theo kiểu xoắn ốc tăng dần, theo chiều kim đồng hồ.
//Input
//3
//3 6 1
//8 7 9
//4 12 5
//Output
//1 3 4
//9 12 5
//8 7 6
#include <bits/stdc++.h>
using namespace std;
int main(){
	int n; cin >> n;
	int a[n][n],b[n][n],c[n][n],d[n*n];
	int cnt=1,h1=0,h2=n-1,c1=0,c2=n-1;
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
		if(c1<=c2){
			for(int i=c2;i>=c1;i--){
				a[h2][i]=cnt;
				++cnt;
			}
			--h2;
		}
		if(h1<=h2){
			for(int i=h2;i>=h1;i--){
				a[i][c1]=cnt;
				++cnt;
			}
			++c1;
		}
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cin >> b[i][j];
		}
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			d[a[i][j]-1]=b[i][j];
		}
	}
	sort(d,d+n*n);
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			c[i][j]=d[a[i][j]-1];
		}
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cout << c[i][j] << " ";
		}
		cout << endl;
	}
}