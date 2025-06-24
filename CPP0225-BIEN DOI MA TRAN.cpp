//Cho ma trận vuông A[N][N]. 
//Tìm số phép biến đổi ít nhất để tổng theo các hàng, các cột của ma trận đều bằng nhau. 
//Biết mỗi phép biến đổi bạn chỉ được phép tăng một phần tử bất kỳ của ma trận lên 1 đơn vị. 
//Ví dụ với ma trận
//1  2          4  3
//        ---> 
//3  4          3  4
//Input
//2
//2
//1 2 3 4
//3
//1 2 3 4 2 3 3 2 1
//Output
//4
//6
#include <bits/stdc++.h>
using namespace std;
int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		int a[n][n],h[n],c[n];
		for(int i=0;i<n;i++){
			h[i]=0;
			c[i]=0;
		}
		int maxh=-1e9,maxc=-1e9,max,sumh=0,sumc=0;
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				cin >> a[i][j];
				h[i]+=a[i][j];
				c[j]+=a[i][j];
			}
		}
		for(int i=0;i<n;i++){
			if(h[i]>maxh) maxh=h[i];
			if(c[i]>maxc) maxc=c[i];
		}
		if(maxh>=maxc) max=maxh;
		else max=maxc;
		for(int i=0;i<n;i++){
			if(h[i]<max) sumh+=max-h[i];
			if(c[i]<max) sumc+=max-c[i];
		}
		if(sumh>=sumc) cout << sumh << endl;
		else cout << sumc << endl;
	}
}