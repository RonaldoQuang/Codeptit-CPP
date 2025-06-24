//Cho mảng A[] gồm n phần tử, mảng B[] gồm m phần tử khác nhau. 
//Các phần tử của mảng A[] và B[] đã được sắp xếp. 
//Hãy tìm mảng hợp và giao được sắp giữa A[] và B[]. 
//Ví dụ với A[] = {1, 3, 4, 5, 7}, B[]={2, 3, 5, 6} ta có mảng hợp Union = {1, 2, 3, 4, 5, 6, 7}, mảng giao Intersection = {3, 5}. 
//In ra đáp án theo giá trị phần tử từ nhỏ đến lớn.
//Input
//1
//5 3
//1 2 3 4 5
//1 2 3
//Output
//1 2 3 4 5
//1 2 3
#include <bits/stdc++.h>
using namespace std;
int main(){
	int t; cin >> t;
	while(t--){
		int n,m; cin >> n >> m;
		int a[n],b[m];
		set<int> se;
		set<int> s;
		for(int i=0;i<n;i++){
			cin >> a[i];
			se.insert(a[i]);
		}
		for(int i=0;i<m;i++){
			cin >> b[i];
			se.insert(b[i]);
		}
		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++){
				if(a[i]==b[j]){
					s.insert(a[i]);
					break;
				}
			}
		}
		for(auto x:se){
			cout << x << " ";
		}
		cout << endl;
		for(auto x:s){
			cout << x << " ";
		}
		cout << endl;
	}
}