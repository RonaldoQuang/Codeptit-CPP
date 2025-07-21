//Cho ma trận vuông A[N][N] có các phần tử hoặc là ký tự ‘O’ hoặc là ký tự ‘X’. 
//Hãy tìm cấp của ma trận vuông lớn nhất có các phần tử ‘X’ bao quanh các phần tử ‘O’. 
//Ví dụ với ma trận dưới đây ta sẽ có kết quả là 3.
//X         O         X         X         X
//X         X         X         X         X
//X         X         O         X         O                                
//X         X         X         X         X                    
//X         X         X         O         O
//Input
//2
//2
//X X
//X X
//4
//X X X O
//X O X X
//X X X O
//X O X X
//Output
//2
//3    
#include <bits/stdc++.h>
using namespace std;
int xet(char a[100][100], int x, int y, int z){
	int dem1=0,dem2=0,dem3=0,dem4=0;
	for(int i=y;i<y+z;i++){
		if(a[x][i]=='O'){
			++dem1;
			break;
		}
	}
	for(int i=y;i<y+z;i++){
		if(a[x+z-1][i]=='O'){
			++dem2;
			break;
		}
	}
	for(int i=x+1;i<x+z-1;i++){
		if(a[i][y]=='O'){
			++dem3;
			break;
		}
	}
	for(int i=x+1;i<x+z-1;i++){
		if(a[i][y+z-1]=='O'){
			++dem4;
			break;
		}
	}
	if(dem1==1||dem2==1||dem3==1||dem4==1) return 0;
	else return 1;
}
int main(){
    int t; cin >> t;
    while(t--){
    	int n; cin >> n; 
    	char a[100][100];
    	for(int i=0;i<n;i++){
    		for(int j=0;j<n;j++){
    			cin >> a[i][j];
		}
	}
	int x=n, max=0, cnt=0;
	while(x>=1){
		for(int i=0;i<=n-x;i++){
			for(int j=0;j<=n-x;j++){
				if(xet(a,i,j,x)==1){
					++cnt;
					max=x;
					break;
				}
			}
			if(cnt==1) break;
		}
		if(cnt==1) break;
		else x--;
	}
	cout << max << endl;
    }
}
