//Cho xâu ký tự S. 
//Nhiệm vụ của bạn là in ra tất cả các ký tự không lặp khác nhau trong S. 
//Ví dụ S =”ABCDEABC” ta nhận được kết quả là “DE”.
//Input
//2
//ABCDEAABC
//ABC
//Output
//DE
//ABC
#include <iostream>
#include <map>
using namespace std;
int main(){
	int t; cin >> t;
	while(t--){
		string s; cin >> s;
		map<char,int> mp;
		for(int i=0;i<s.size();i++){
			mp[s[i]]++;
		}
		for(int i=0;i<s.size();i++){
			if(mp[s[i]]==1) cout << s[i];
		}
		cout << endl;
	}
}