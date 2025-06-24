//Cho ma trận vuông A[N][N]. Hãy in các phần tử thuộc vùng biên.
//Input
//2
//4
//1 2 3 4 5 6 7 8 1 2 3 4 5 6 7 8
//3
//45 48 54 21 89 87 70 78 15
//Output
//1 2 3 4 
//5     8 
//1     4 
//5 6 7 8

//45 48 54 
//21   87 
//70 78 15 
#include <iostream>
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
			for(int j=0;j<n;j++){
				if(i==0||i==n-1){
					cout << a[i][j] << " ";
				}
				else{
					if(j==0||j==n-1){
						cout << a[i][j] << " ";
					}
					else{
						cout << "  ";
					}
				}
			}
			cout << endl;
		}
	}
}