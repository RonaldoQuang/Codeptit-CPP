//Cho file văn bản VANBAN.in.
//Một từ được định nghĩa là một dãy ký tự liên tiếp không có khoảng trống, dấu tab hay dấu xuống dòng. 
//Tạm thời chưa xét đến các dấu câu trong bải toán này.
//Hãy chuyển tất cả các từ về dạng chữ thường sau đó liệt kê các từ khác nhau xuất hiện trong file VANBAN.in theo thứ tự từ điển.
//VANBAN.in
//lap trinh Huong doi tuong
//lap trinh Huong thanh phan
//Output
//doi
//huong
//lap
//phan
//thanh
//trinh
//tuong
#include <bits/stdc++.h>
#include<fstream>
using namespace std;
int main(){
	fstream file;
	string s;
	set<string> se;
	file.open("VANBAN.in");
	while(file>>s) {
		for(int j=0;j<s.length();j++){
			s[j]=tolower(s[j]);
        }
        se.insert(s);
	}
	for(auto x:se){
		cout << x << endl;
	}
	file.close();
}