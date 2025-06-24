//Cho dữ liệu vào là luồng văn bản bất kỳ, gồm các ký tự viết hoa, viết thường, các ký tự số và các dấu câu, không có các ký tự đặc biệt khác. 
//Người ta muốn tách văn bản thành các câu. 
//Mỗi câu in trên một dòng.
//Một câu được định nghĩa là dãy ký tự có ít nhất 1 ký tự chữ cái hoặc chữ số, không chứa các dấu ngắt câu gồm: dấu chấm (.), dấu chấm hỏi (?) và dấu chấm cảm (!).
//Dấu phẩy (,) và dấu hai chấm (:) không được coi là dấu ngắt câu.
//Nhiệm vụ của bạn là in ra mỗi câu trên một dòng, ký tự đầu câu viết hoa, các ký tự khác viết thường, các từ cách nhau đúng một khoảng trống. Không có khoảng trống ở đầu và cuối câu, và không in ra các dấu ngắt câu.
//Input
//ky thi LAP TRINH ICPC PTIT  bat dau to chuc     tu     nam 2010. nhu vay, nam nay la          tron 10 nam!
//    vay CO PHAI NAM NAY LA KY THI LAN THU 10?        khong phai! nam nay la KY THI LAN THU 11.
//Output
//Ky thi lap trinh icpc ptit bat dau to chuc tu nam 2010
//Nhu vay, nam nay la tron 10 nam
//Vay co phai nam nay la ky thi lan thu 10
//Khong phai
//Nam nay la ky thi lan thu 11
#include <bits/stdc++.h>
using namespace std;
string ch(string s){
	s[0]=toupper(s[0]);
	for(int i=1;i<s.size();i++){
		s[i]=tolower(s[i]);
	}
	return s;
}
string ch1(string s){
	for(int i=0;i<s.size();i++){
		s[i]=tolower(s[i]);
	}
	return s;
}
char cc(string s){
	return s[s.size()-1];
}
int main(){
	string w;
	vector<string> v;
	while(cin >> w){
		v.push_back(w);
	}
	int a[v.size()];
	for(int i=0;i<v.size();i++){
		a[i]=0;
	}
	for(int i=0;i<v.size();i++){
		if(cc(v[i])=='!'||cc(v[i])=='.'||cc(v[i])=='?'){
			a[i]=1;
			v[i].pop_back();
			if(a[i-1]==1||i==0){
				cout << ch(v[i]) << endl;
			}
			else{
				cout << ch1(v[i]) << endl;
			}
		}
		else{
			if(a[i-1]==0){
				cout << ch1(v[i]) << " ";
			}
			else{
				cout << ch(v[i]) << " ";
			}
		}
	}
}