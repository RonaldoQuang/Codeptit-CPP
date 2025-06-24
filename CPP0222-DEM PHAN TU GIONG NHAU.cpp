//Cho ma trận vuông A[][] cấp N. 
//Nhiệm vụ của bạn là đưa ra số các phần tử giống nhau ở tất cả các hàng. 
//Ví dụ với ma trận A[][] dưới đây sẽ cho ta kết quả là 2 tương ứng với số 2, 3 xuất hiện ở tất cả các hàng.
//2   1   4   3
//1   2   3   2
//3   6   2   3
//5   2   5   3
//Input
//1
//4
//2 1 4 3 1 2 3 2 3 6 2 3 5 2 5 3
//Output
//2
#include <bits/stdc++.h>
using namespace std;
int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		int a[n][n];
		map<int,int> mp;
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				cin >> a[i][j];
			}
		}
		int i=0;
		while(i<n){
			for(int j=0;j<n;j++){
				if(i==0) mp[a[i][j]]=1;
				if(i>0&&mp[a[i][j]]==i) mp[a[i][j]]=i+1;
			}
			++i;
		}
		int cnt=0;
		for(auto x:mp){
			if(x.second==n) ++cnt;
		}
		cout << cnt << endl;
	}
}