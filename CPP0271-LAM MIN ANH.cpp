//Với ma trận kernel có kích thước L = 2k + 1.
//Giá trị điểm ảnh (i,j) của ma trận mới sẽ bằng tổng của (2k + 1) x (2k + 1) phần tử (i+u, j+v) với mọi –k ≤ u,v ≤ k, sau đó chia cho (2k + 1) x (2k + 1). 
//Kết quả điểm ảnh mới thu được sau khi thực hiện phép chia sẽ được làm tròn xuống.
//Cho ma trận ảnh đầu vào và kích thước L của ma trận kernel, nhiệm vụ của bạn là hãy in ra ma trận ảnh sau khi được làm mịn.
//Input
//2

//4 4 3
//2 1 0 0
//3 2 1 1
//4 5 2 1
//2 2 9 0

//3 3 3
//1 2 3
//4 5 6
//7 8 9
//Output
//2 1
//3 2

//5
//Giải thích test 1: Giá trị phần tử (1,1) = floor[(2+1+0+3+2+1+4+5+2) / 9] = floor [20/9] = 2.
#include <bits/stdc++.h>
using namespace std;
int main(){
    int t; cin >> t;
    while(t--){
    	int n, m, l; cin >> n >> m >> l;
    	long long sum[n-l+1];
    	for(int i=0;i<n-l+1;i++){
    		sum[i]=0;
		}
    	int a[500][500];
    	for(int i=0;i<n;i++){
    		for(int j=0;j<m;j++){
    			cin >> a[i][j];
			}
		}
		for(int i=0;i<l;i++){
			for(int j=0;j<l;j++){
				sum[0]+=a[i][j];
			}
		}
		for(int i=1;i<=n-l;i++){
			sum[i]=sum[i-1];
			for(int j=0;j<l;j++){
				sum[i]+=a[i-1+l][j]-a[i-1][j];
			}
		}
		for(int i=0;i<=n-l;i++){
			cout << floor(sum[i]/(l*l)) << " ";
			for(int j=1;j<=m-l;j++){
				for(int k=i;k<i+l;k++){
					sum[i]+=a[k][j-1+l]-a[k][j-1];
				}
				cout << floor(sum[i]/(l*l)) << " ";
			}
			cout << endl;
		}			
	}
}