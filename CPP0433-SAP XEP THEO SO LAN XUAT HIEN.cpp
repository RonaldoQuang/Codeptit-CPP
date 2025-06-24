//Cho mảng A[] gồm n số nguyên. 
//Nhiệm vụ của bạn là sắp xếp mảng theo số lần xuất hiện các phần tử của mảng. 
//Số xuất hiện nhiều lần nhất đứng trước. 
//Nếu hai phần tử có số lần xuất hiện như nhau, số nhỏ hơn đứng trước. 
//Ví dụ A[] = {5, 5, 4, 6, 4 }, ta nhận được kết quả là A[] = {4, 4, 5, 5, 6}.
//Input
//2
//5
//5 5 4 6 4
//5
//9 9 9 2 5
//Output
//4 4 5 5 6
//9 9 9 2 5
#include <bits/stdc++.h>
using namespace std;
int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		int a[n];
		set<int> se;
		map<int,int> mp;
		vector<int> v;
		for(int i=0;i<n;i++){
			cin >> a[i];
			mp[a[i]]++;
		}
		for(auto x:mp){
			se.insert(x.second);
		}
		for(auto y:se){
			v.push_back(y);
		}
		sort(v.begin(),v.end());
		int i=v.size()-1;
		while(i>=0){
			for(auto z:mp){
				if(z.second==v[i]){
					for(int j=0;j<z.second;j++){
						cout << z.first << " ";
					}
				}
			}
			i--;
		}
		cout << endl;
	}
}
