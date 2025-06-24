//Cho xâu ký tự s chỉ bao gồm hai chữ cái là ‘A’ và ‘B’.
//Mỗi bước được phép biến đổi một vị trí bất kỳ trong xâu (A thành B, B thành A) hoặc cũng có thể biến đổi một dãy liên tiếp các ký tự nào đó tính từ đầu xâu.
//Hãy tính xem cần ít nhất bao nhiêu bước để biến đổi xâu về dạng toàn chữ cái A.
//Input
//AAABBBAAABBB
//Output
//4
#include<bits/stdc++.h>
using namespace std;
int main(){
	string s; cin >> s;
	int cnt=0;
	for(int i=1;i<s.size()-1;i++){
		if(s[i-1]=='A'&&s[i]=='B'&&s[i+1]=='A'){
			s[i]='A';
			++cnt;
		}
		if(s[i-1]=='B'&&s[i]=='A'&&s[i+1]=='B'){
			s[i]='B';
			++cnt;
		}		
	}
	if(s[0]=='B'&&s[1]=='A'){
		s[0]='A'; 
		++cnt;
	}
	if(s[s.size()-2]=='A'&&s[s.size()-1]=='B'){
		s[s.size()-1]='A'; 
		++cnt;
	}
	for(int i=0;i<s.size()-1;i++){
		if(s[i]!=s[i+1]){
			++cnt;
		}
	}
	if(s[0]=='A'&&s[s.size()-1]=='B') ++cnt;
	if(s[0]=='B'&&s[s.size()-1]=='B') ++cnt;
	cout << cnt;
}