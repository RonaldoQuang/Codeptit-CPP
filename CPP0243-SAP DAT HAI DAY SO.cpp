//Cho mảng A1[] và A2[] gồm n, m phần tử theo thứ tự. 
//Hãy sắp xếp lại các phần tử trong A1[] theo quan hệ thứ tự trong A[2]. 
//Phần tử xuất hiện trước trong A2[] và có mặt trước trong A1[] đứng trước; các phần tử xuất hiện trong A1[] nhưng không xuất hiện trong A2[] đứng sau theo thứ tự tăng dần. 
//Ví dụ với mảng A1[] = {2, 1, 2, 5, 7, 1, 9, 3, 6, 8, 8 }, A2[] = {2, 1, 8, 3} sau khi sắp xếp ta được A1[] = {2, 2, 1, 1, 8, 8, 3, 5, 6, 7, 9}.
//Input:
//1
//11 4
//2 1 2 5 7 1 9 3 6 8 8
//2 1 8 3
//Output:
//2 2 1 1 8 8 3 5 6 7 9
#include <bits/stdc++.h>
using namespace std;
int main(){
	int t; cin >> t;
	while(t--){
		int n,m; cin >> n >> m;
		int a[n],b[m];
		map<int,int> mp;
		map<int,int> ma;
		vector<int> v;
		for(int i=0;i<n;i++){
			cin >> a[i];
			mp[a[i]]++;
		}
		for(int i=0;i<m;i++){
			cin >> b[i];
		}
		int cnt=0;
		for(int i=0;i<m;i++){
			ma[b[i]]++;
			if(ma[b[i]]==1){
				for(int j=1;j<=mp[b[i]];j++){
					cout << b[i] << " ";
				}
				cnt+=mp[b[i]];
			}
		}
		for(int i=0;i<n;i++){
			if(ma[a[i]]==0){
				v.push_back(a[i]);
			}
		}
		sort(v.begin(),v.end());
		for(int i=0;i<v.size();i++){
			cout << v[i] << " ";
		}
		cout << endl;
	}
}