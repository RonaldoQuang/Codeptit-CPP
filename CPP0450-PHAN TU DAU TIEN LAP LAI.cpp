//Cho mảng A[] gồm N phần tử. 
//Hãy tìm phần tử lặp lại đầu tiên của mảng. 
//Ví dụ với mảng A[] = {5, 6, 1, 2, 1, 4} thì ta có 1 là phần tử đầu tiên lặp lại trong mảng. 
//Nếu không tồn tại đáp án, in ra -1.
//2
//5
//4 5 1 2 1
//6
//10 20 30 30 20 5 7
//Output
//1
//30
#include <iostream>
#include <map>
using namespace std;
int main(){
	int t; cin >> t;
	while(t--){
		int n,cnt=0; cin >> n;
		int a[n];
		map<int,int> mp;
		for(int i=0;i<n;i++){
			cin >> a[i];
		}
		for(int i=0;i<n;i++){
			mp[a[i]]++;
			if(mp[a[i]]==2){
				cout << a[i];
				++cnt;
				break;
			}
		}
		if(cnt==0) cout << "-1";
		cout << endl;
	}
}