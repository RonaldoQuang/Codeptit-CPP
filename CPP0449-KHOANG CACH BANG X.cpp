//Cho mảng A[] gồm N phần tử và số X. 
//Nhiệm vụ của bạn là tìm cặp phần tử A[i] - A[j] = X.  
//Nếu tồn tại A[i] - A[j] = X đưa ra 1, ngược lại đưa ra -1.
//Input
//2
//6 78
//5 20 3 2 5 80
//5 45
//90 70 20 80 50
//Output
//1
//-1
#include <bits/stdc++.h>
using namespace std;
int main(){
	int t; cin >> t;
	while(t--){
		int n,X; cin >> n >> X;
		int a[n];
		vector<int> v;
		for(int i=0;i<n;i++){
			cin >> a[i];
			v.push_back(a[i]);
		}
		sort(v.begin(),v.end());
		int cnt=0;
		for(int i=0;i<n;i++){
			if(binary_search(v.begin(),v.end(),v[i]+X)){
				++cnt;
				cout << "1";
				break;
			}
		}
		if(cnt==0) cout << "-1";
		cout << endl;
	}
}
