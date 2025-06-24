//Cho ma trận vuông A[N][N]. Hãy in các phần tử thuộc theo hình con rắn.
//10->20->30->40
//             |
//50<-60<-70<-80
//|
//27->29->47->48
//            |
//32<-33<-39<-50
//Input
//2
//3
//45 48 54 21 89 87 70 78 15
//2
//25 27 23 21
//Output
//45 48 54 87 89 21 70 78 15
//25 27 21 23
#include <bits/stdc++.h>
using namespace std;
int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		int a[n][n];
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				cin >> a[i][j];
			}
		}
		for(int i=0;i<n;i++){
			if(i%2==0){
				for(int j=0;j<n;j++){
					cout << a[i][j] << " ";
				}
			}
			else{
				for(int j=n-1;j>=0;j--){
					cout << a[i][j] << " ";
				}
			}
		}
		cout << endl;
	}
}