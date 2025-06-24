//Một từ được hiểu là dãy các ký tự liên tiếp không chứa ký tự space, ‘\t’, ‘\n’, 
//Cho xâu ký tự S có các ký tự space, ‘\t’, ‘\n’, hãy đếm số các từ của S.
//Input
//2
//Print the number of words
//Print the number of words present in the string
//Output
//5
//9
#include <bits/stdc++.h>
using namespace std;
int main(){
	int t; cin >> t;
	while(t--){
		cin.ignore();
		string s;
		getline(cin,s);
		stringstream ss(s);
		string w;
		int cnt=0;
		while(ss >> w){
			++cnt;
		}
		cout << cnt << endl;
	}
}