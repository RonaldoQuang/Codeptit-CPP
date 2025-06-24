//Cho file dữ liệu dạng văn bản DATA.in có thể chứa cả số và ký tự.
//Hãy lọc ra các số nguyên int trong file và tính tổng các số đó.
//Chú ý: file dữ liệu có rất nhiều dòng với rất nhiều số và ký tự xen kẽ nhau. 
//Chỉ tính tổng các số thỏa mãn điều kiện là số kiểu int.
//DATA.in
//12 3 4 5 6 7 Aaa 1 1 Bbb XXX yyy 5 5 999999999999999999999999 9
//Output
//58
#include<bits/stdc++.h> 
#include<fstream>
using namespace std; 
int ktra(string s){
	for (int i=0;i<s.length();i++)
		if(s[i]>'9'||s[i]<'0')
			return 0;
	if(s.length()>10) return 0;
	return 1;
}
long long ch(string s){
	long long sum=0;
	for(int i=0;i<s.size();i++){
		sum=sum*10+s[i]-'0';
	}
	return sum;
}
int main(){
	long long res=0;
	fstream file;
	file.open("DATA.in");
	while(1){
		string s;
		file >> s;
		if(file.eof()){
			break;
		}
		if(ktra(s)){
			res+=ch(s);
		}
	}
	file.close();
	cout << res << endl;
}