//Cho ma trận vuông A[N][N] gồm các số nguyên dương và số tự nhiên K. 
//Hãy tìm số các cách di chuyển từ phần tử đầu tiên (A[0][0] đến phần tử cuối cùng A[N-1][N-1] sao cho tổng các phần tử của phép di chuyển đúng bằng K. 
//Biết từ phần tử A[i][j], ta chỉ được phép dịch chuyển đến phần tử A[i+1][j] hoặc A[i][j+1]. 
//Ví dụ với ma trận dưới đây sẽ có 2 phép di chuyển theo nguyên tắc kể trên để có tổng bằng 12.
//1   2   3         
//4   6   5          Cách 1: 1->2->6->2->1    
//3   2   1          Cách 2: 1->2->3->5->1
//Input
//2
//3 16
//1 2 3
//4 6 5
//9 8 7
//3 12
//1 2 3
//4 6 5
//3 2 1
//Ouput
//0
//2
#include<bits/stdc++.h>
using namespace std;
int cnt=0;
int d1[2]={1,0};
int d2[2]={0,1};
void Try(int a[100][100], int i, int j, int n, int sum, int z){
	for(int k=0;k<2;k++){
        int x=i+d1[k], y=j+d2[k]; 
		if(x<n&&y<n||x<n&&y==n||x==n&&y<n){
			sum+=a[x][y];
			Try(a,x,y,n,sum,z);
			sum-=a[x][y];
		}
		else if(x==n&&y==n){
			sum+=a[x][y];
			if(sum==z) ++cnt;
		}
	}
}
int sum1=0;
int main(){
    int t; cin >> t;
    while(t--){
    	int n, k; cin >> n >> k;
    	int a[100][100];
    	for(int i=1;i<=n;i++){
    		for(int j=1;j<=n;j++){
    			cin >> a[i][j];
			}
		}
		int sum=a[1][1];
		if(n==1&&sum==k) cout << "1" << endl;
		else{
		    Try(a,1,1,n,sum,k);
		    cout << cnt-sum1 << endl;
		    sum1+=cnt-sum1;
		}
	}
}