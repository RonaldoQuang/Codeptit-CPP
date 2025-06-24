//Một xâu ký tự được gọi là Pangram nếu nó chứa đầy đủ các ký tự từ ‘a’, ..’z’. 
//Cho xâu ký tự S và số K. 
//Hãy xác định xem có thể thực hiện nhiều nhất K phép biến đổi các ký tự để S trở thành Pangram hay không? 
//Mỗi phép biến đổi là một phép thay thế ký tự này bằng một ký tự khác.
//Input
//2
//qwqqwqeqqwdsdadsdasadsfsdsdsdasasas
//4
//qwqqwqeqqwdsdadsdasadsfsdsdsdasasas
//24
//Output
//0
//1
#include <iostream>
#include <set>
using namespace std;
int main(){
	int t; cin >> t;
	while(t--){
		string s; cin >> s;
		int k; cin >> k;
		set<char> se;
		for(int i=0;i<s.size();i++){
			se.insert(s[i]);
		}
		if(26-se.size()<=k) cout << "1\n";
		else cout << "0\n";
	}
}