//Cho dãy số A[] chỉ bao gồm các số nguyên dương không quá 1000. 
//Hãy liệt kê các số khác nhau trong dãy theo thứ tự tăng dần.
//Input
//10
//3 7 9 3 6 13 7 7 9 3
//Output
//3 6 7 9 13
#include <bits/stdc++.h>
using namespace std;
int main(){
	int n; cin >> n;
	int a[n];
	set<int> se;
	for(int i=0;i<n;i++){
		cin >> a[i];
		se.insert(a[i]);
	}
	for(auto x:se){
		cout << x << " ";
	}
}