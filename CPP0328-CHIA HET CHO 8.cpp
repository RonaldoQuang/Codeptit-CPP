//Cho xâu ký tự S bao gồm các số từ 0 đến 9. 
//Nhiệm vụ của bạn là đếm số các xâu con của S là số chia hết cho 8 và không chia hết cho 3.
//Input
//2
//888
//6564525600
//Output
//5
//15
#include<bits/stdc++.h> 
using namespace std; 
int dem(string s, int n){
	int cnt=0;
	for(int i=0;i<s.size();i++){
		int sum=0;
		for(int j=i;j<s.size();j++){
			sum=sum*10+s[j]-'0';
			sum%=n;
			if(sum==0) ++cnt;
		}
	}
	return cnt;
}
int main(){
	int t; cin >> t;
	while(t--){
		string s; cin >> s;
		cout << dem(s,8)-dem(s,24) << endl;
	}
}