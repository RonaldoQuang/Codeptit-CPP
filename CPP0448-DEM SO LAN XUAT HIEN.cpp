//Cho mảng A[] gồm n phần tử đã được sắp xếp. 
//Hãy tìm số lần xuất hiện số X trong mảng. 
//Nếu số lần xuất hiện số x trong mảng là 0 hãy đưa ra -1.
//2
//7 2
//1 1 2 2 2 2 3
//7 4
//1 1 2 2 2 2 3
//Output
//4
//-1
#include <iostream>
#include <map>
using namespace std;
int main(){
	int t; cin >> t;
	while(t--){
		int n,k; cin >> n >> k;
		map<int,int> mp;
		for(int i=0;i<n;i++){
			int x; cin >> x;
			mp[x]++;
		}
		if(mp[k]==0) cout << "-1\n";
		else cout << mp[k] << endl;
	}
}