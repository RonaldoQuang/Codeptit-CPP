//Cho dữ liệu vào dạng văn bản, với không quá 1000 số nguyên dương, các số không quá 50 chữ số. 
//Hãy liệt kê các số thuận nghịch khác nhau theo thứ tự giảm dần và số lần xuất hiện của nó.
//Input
//12321 456 12321 34 56 9999999999999999999
//12 3 43 34 54 34 54 34 54 657
//5 45 554 12321 12321
//65 76 45 45 34 53
//546 565 65645 6 65 65 35 65
//565 565
//Output
//9999999999999999999 1
//12321 4
//565 3
#include <bits/stdc++.h>
using namespace std;
int stn(string s){
	int cnt=0;
	for(int i=0;i<s.size()/2;i++){
		if(s[i]==s[s.size()-1-i]) ++cnt;
	}
	if(s.size()>1&&cnt==s.size()/2) return 1;
	else return 0;
}
int main(){
	string w;
	map<string,int> mp;
	vector<string> v;
	while(cin >> w){
		if(stn(w)){
			mp[w]++;
		}
	}
	for(auto x:mp){
		v.push_back(x.first);
	}
	for(int i=0;i<v.size()-1;i++){
		int min=i;
		for(int j=i+1;j<v.size();j++){
			if(v[j].size()<v[min].size()) min=j;
			else if(v[j].size()==v[min].size()){
				if(v[j]<v[i]) min=j;
			}
		}
		string temp=v[i];
		v[i]=v[min];
		v[min]=temp;
	}
	for(int i=v.size()-1;i>=0;i--){
		cout << v[i] << " " << mp[v[i]] << endl;
	}
}

