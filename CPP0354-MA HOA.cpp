//Cho dãy A[] chỉ bao gồm các số nguyên dương không quá 105 nhưng không biết trước số phần tử của dãy. 
//Cho một xâu ký tự độ dài không quá 100 chỉ bao gồm các chữ cái in hoa. 
//Người ta thực hiện mã hóa bằng cách đếm các ký tự cạnh nhau giống nhau và viết số lượng phía sau các chữ cái đó.
//Ví dụ xâu AAECCCCGGGD thì được mã hóa thành A2E1C4G3D1
//Với giả thiết không có ký tự nào xuất hiện nhiều hơn 9 lần liên tiếp. Hãy viết chương trình mã hóa xâu ký tự theo cách như trên.
//Input
//2
//AAAAAAAA
//AAECCCCGGGD
//Output
//A8
//A2E1C4G3D1
#include <bits/stdc++.h>
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
			if(s[i]!=s[i+1]||s[i+1]=='\0'){
				cout << s[i] << mp[s[i]];
			}
		}
		cout << endl;
	}
}