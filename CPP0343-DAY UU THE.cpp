//Cho dãy A[] chỉ bao gồm các số nguyên dương không quá 105 nhưng không biết trước số phần tử của dãy. 
//Người ta gọi dãy A[] là dãy ưu thế nếu thỏa mãn 1 trong 2 điều kiện sau đây:
//Dãy gọi là ưu thế chẵn nếu số phần tử của dãy là chẵn và số lượng số chẵn trong dãy nhiều hơn số lượng số lẻ.
//Dãy gọi là ưu thế lẻ nếu số phần tử của dãy là lẻ và số lượng số lẻ trong dãy nhiều hơn số lượng số chẵn.
//Hãy kiểm tra xem dãy A[] có phải là dãy ưu thế hay không.
//Input
//2
//11 22 33 44 55 66 77
//23 34 45 56 67 78 89 90 121 131 141 151 161 171
//Output
//YES
//NO
#include <bits/stdc++.h>
using namespace std;
int cl(string s){
	if((s[s.size()-1]-'0')%2==0) return 1;
	else return 0;
}
int main(){
	int t; cin >> t;
	cin.ignore();
	while(t--){
		string s,w;
		getline(cin,s);
		stringstream ss(s);
		vector<string> v;
		while(ss >> w){
			v.push_back(w);
		}
		int chan=0,le=0;
		for(int i=0;i<v.size();i++){
			if(cl(v[i])) ++chan;
			else ++le;
		}
		if(v.size()%2==0&&chan>le) cout << "YES\n";
		else if(v.size()%2!=0&&le>chan) cout << "YES\n";
		else cout << "NO\n";
	}
}