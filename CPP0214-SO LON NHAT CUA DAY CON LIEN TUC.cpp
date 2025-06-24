//Cho mảng A[] gồm n số nguyên không âm và số k. 
//Hãy tìm số lớn nhất của mỗi dãy con liên tục gồm k phần tử của mảng. 
//Ví dụ với mảng A[] = {1, 2, 3, 1, 4, 5, 2, 3, 6}, K = 3, ta có kết quả 3 3 4 5 5 5 6.
//Input
//2
//9 3
//1 2 3 1 4 5 2 3 6
//10 4
//8 5 10 7 9 4 15 12 90 13
//Output
//3 3 4 5 5 5 6
//10 10 10 15 15 90 90
#include <bits/stdc++.h>
using namespace std;
int main() {
	int t; cin >> t;
	while(t--){
		int n,k,x=0; cin >> n >> k;
		int a[n];		
		for(int i=0;i<n;i++){
			cin >> a[i];
		}
		multiset<int> ms;
		for(int i=0;i<k;i++){
			ms.insert(a[i]);
		}
		for(int i=k;i<n;i++){
			cout << *ms.rbegin() << " ";
			ms.erase(ms.find(a[i-k]));
			ms.insert(a[i]);
		}
		cout << *ms.rbegin() << endl;
	}
}
