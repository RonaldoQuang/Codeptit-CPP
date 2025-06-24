//Cho mảng A[] gồm N phần tử. 
//Hãy đếm số phần tử bị lặp lại ít nhất 1 lần. 
//Ví dụ với mảng A[] = {5, 6, 1, 2, 1, 4} thì ta có đáp án là 2 vì có 2 phần tử 1.
//Input
//2
//5
//4 5 1 2 1
//6
//10 20 30 30 20 5
//Output
//2
//4
#include <iostream>
#include <map>
using namespace std;
int main(){
	int t; cin >> t;
	while(t--){
		int n,cnt=0; cin >> n;
		map<int,int> mp;
		for(int i=0;i<n;i++){
			int x; cin >> x;
			mp[x]++;
		}
		for(auto z:mp){
			if(z.second>1) cnt+=z.second;
		}
		cout << cnt << endl;
	}
}