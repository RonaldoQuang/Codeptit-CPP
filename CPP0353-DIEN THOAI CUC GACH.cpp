//Một thời không quá xa, điện thoại di động với chỉ các tính năng nghe, gọi, nhắn tin vẫn còn chiếm đại đa số thiết bị cầm tay tại Việt Nam. 
//Khi nhắn tin, người nhắn sẽ bấm các phím số một đến bốn lần liên tiếp tương ứng với ký tự đi kèm ghi trên đó.
//Cụ thể: các số và chữ cái tương ứng gồm:
//2: ABC, 3: DEF, 4: GHI, 5: JKL
//6: MNO, 7: PQRS, 8: TUV, 9: WXYZ
//Cho trước dãy ký tự mô tả tin nhắn (không tính các ký tự khác ngoài danh sách nêu trên). 
//Hãy kiểm tra xem dãy số được nhấn ứng với dãy ký tự đó có phải số thuận nghịch hay không 
//(chỉ xét tương ứng giữa số và ký tự, không tính số đó được nhấn bao nhiêu lần, ví dụ tất cả A,B,C,a,b,c đều chỉ là một chữ số 2).
//Input
//2
//BOHIMA
//IamACoder
//Output
//YES
//NO
#include <bits/stdc++.h>
using namespace std;
char ch(char a){
	if(a<='z'&&a>='a'){
		return a-32;
	}
	else return a;
}
int main(){
	int t; cin >> t;
	while(t--){
		string s; cin >> s;
		map<char,int> mp;
		mp['A']=mp['B']=mp['C']=2;
		mp['D']=mp['E']=mp['F']=3;
		mp['G']=mp['H']=mp['I']=4;
		mp['J']=mp['K']=mp['L']=5;
		mp['M']=mp['N']=mp['O']=6;
		mp['P']=mp['Q']=mp['R']=mp['S']=7;
		mp['T']=mp['U']=mp['V']=8;
		mp['W']=mp['X']=mp['Y']=mp['Z']=9;
		int cnt=0;
		for(int i=0;i<s.size()/2;i++){
			if(mp[ch(s[i])]==mp[ch(s[s.size()-1-i])]) ++cnt;
		}
		if(cnt==s.size()/2) cout << "YES\n";
		else cout << "NO\n";
	}
}