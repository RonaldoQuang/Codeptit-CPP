//Cho số N biểu diễn cho ma trận vuông A[4*N][4*N] được điền các con số từ 1 đến 4*N*4*N theo thứ tự từ nhỏ đến lớn, từ trái qua phải. 
//Nhiệm vụ của bạn là in các phần tử của ma trận theo hai hình cuộn dây. 
//Ví dụ với N = 2 ta có ma trận 4×4 và hai cuộn dây sau:
//1 2 3 4
//5 6 7 8
//9 10 11 12
//13 14 15 16
//Cuộn 1: 10  6  2  3  4  8  12  16
//Cuộn 2: 7  11  15  14  13  9  5  1
//Input
//1
//1
//Output
//10 6 2 3 4 8 12 16
//7 11 15 14 13 9 5 1
#include <bits/stdc++.h>
using namespace std;
void in(int a[100][100], int n){
	int m=4*n;
	cout << a[m/2+1][m/2] << " ";
	string d[10000];
	d[1]="hg", d[2]="ct", d[3]="ht", d[0]=d[4]="cg";
	for(int i=5;i<10000;i++){
		d[i]=d[i%4];
	}
	int s[10000];
	for(int i=2;i<10000;i+=2){
		s[i]=i;
	}
	for(int i=1;i<10000;i+=2){
		s[i]=s[i+1];
	}
	int x=m/2+1, y=m/2, cnt=0;
	for(int i=1;i<10000;i++){
		if(d[i]=="hg"){
			for(int j=x-1;j>=x-s[i];j--){
				cout << a[j][y] << " ";
			}
			x-=s[i];
		}
		else if(d[i]=="ct"){
			for(int j=y+1;j<=y+s[i];j++){
				cout << a[x][j] << " ";
			}
			y+=s[i];
		}
		else if(d[i]=="ht"){
			for(int j=x+1;j<=x+s[i];j++){
				cout << a[j][y] << " ";
				if(j==m){
					++cnt;
					break;
				}
			}
			x+=s[i];
		}
		else if(d[i]=="cg"){
		    for(int j=y-1;j>=y-s[i];j--){
				cout << a[x][j] << " ";
			}
			y-=s[i];
		}
		if(cnt==1) break;			
	}
	cout << endl;
}
int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		int a[100][100], b[100][100];
		int so=1, m=4*n;
		for(int i=1;i<=m;i++){
			for(int j=1;j<=m;j++){
				a[i][j]=so;
				b[m+1-i][m+1-j]=a[i][j];
				++so;
			}
		}
		in(a,n);
		in(b,n);
	}
}