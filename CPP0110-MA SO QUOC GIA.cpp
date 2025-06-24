//Trong mã hàng hóa  người ta thường ghi kèm theo mã số quốc gia sản xuất. 
//Nếu sản xuất tại Việt Nam thì mã tương ứng là 084. 
//Bài toán đặt ra là cho một dãy mã dạng số nguyên không quá 18 chữ số. 
//Hãy loại bỏ đoạn mã 084 ra khỏi mã ban đầu.
//Input
//3
//123084567 3300478808445 1084
//Output
//123567 3300478845 1
#include <bits/stdc++.h>
using namespace std;
int main(){
	int t; cin >> t;
	while(t--){
	    string s; cin >> s;
		for(int i=0;i<s.size();i++){
			if(s[i]=='0'&&s[i+1]!='8'&&s[i+2]!='4'||s[i]=='0'&&s[i+1]!='8'&&s[i+2]=='4'||s[i]=='0'&&s[i+1]=='8'&&s[i+2]!='4'){
				cout << s[i];
			}
			if(s[i]=='8'&&s[i-1]!='0'&&s[i+1]!='4'||s[i]=='8'&&s[i-1]!='0'&&s[i+1]=='4'||s[i]=='8'&&s[i-1]=='0'&&s[i+1]!='4'){
				cout << s[i];
			}
			if(s[i]=='4'&&s[i-2]!='0'&&s[i-1]!='8'||s[i]=='4'&&s[i-2]!='0'&&s[i-1]=='8'||s[i]=='4'&&s[i-2]=='0'&&s[i-1]!='8'){
				cout << s[i];
			}
			if(s[i]!='4'&&s[i]!='0'&&s[i]!='8'){
				cout << s[i];
			}
		}
		cout << endl;	
    }
}