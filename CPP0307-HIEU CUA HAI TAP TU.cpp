//Cho hai xâu ký tự S1 và S2. 
//Hãy viết chương trình tìm các từ chỉ xuất hiện trong S1 mà không xuất hiện trong S2. 
//Chú ý: mỗi từ chỉ liệt kê 1 lần.
//Dữ liệu vào: Dòng 1 ghi số bộ test. 
//Mỗi bộ test gồm 2 dòng, mỗi dòng ghi một xâu ký tự độ dài không quá 200, chỉ bao gồm các ký tự viết thường và các khoảng trống. 
//Kết quả: Với mỗi bộ test ghi ra các từ có trong S1 mà không có trong S2. Các từ được ghi theo thứ tự từ điển.
//Input
//2
//abc ab ab ab abcd
//ab abc
//aaa xyz ab zzz abc dd dd abc
//xyz dd ttt sas cdc
//Output
//abcd
//aaa ab abc zzz
#include <bits/stdc++.h>
using namespace std;
int main(){
    int t; cin >> t;
    cin.ignore();
    while(t--){
    	string a,b;
    	getline(cin,a);
    	getline(cin,b);
    	set<string> se;
    	map<string,int> mp;
    	string w;
    	stringstream ss(b);
    	while(ss >> w){
    		mp[w]=1;
		}
		stringstream ta(a);
		string s;
		while(ta >> s){
			if(mp[s]==0) se.insert(s);
		}
		for(auto x:se){
			cout << x << " ";
		}
		cout << endl;
	}
}