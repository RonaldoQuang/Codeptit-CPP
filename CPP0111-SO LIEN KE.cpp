//Viết chương trình kiểm tra số nguyên dương N có thỏa mãn tính chất: tất cả các chữ số cạnh nhau chỉ sai khác nhau đúng một đơn vị hay không. 
//Ví dụ: số 123212 là số thỏa mãn, số 34578 không thỏa mãn.
//Input
//3
//123212
//5654345676
//10233211123
//Output
//YES
//YES
//NO
#include <bits/stdc++.h>
using namespace std;
int main(){
	int t; cin >> t;
	while(t--){
		cin.ignore();
	    string s; cin >> s;
	    int cnt=0;
		for(int i=1;i<s.size();i++){
			if((s[i]-'0'-(s[i-1]-'0'))!=1&&(s[i]-'0'-(s[i-1]-'0'))!=-1){
				cout << "NO\n";
				break;
			}
			else ++cnt;
		}
		if(cnt==s.size()-1) cout << "YES\n";	
    }
}