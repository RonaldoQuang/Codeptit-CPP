//Một số được coi là đẹp nếu đó là số thuận nghịch và chỉ toàn các chữ số chẵn. 
//Viết chương trình đọc vào các số nguyên dương có không quá 500 chữ số và kiếm tra xem số đó có đẹp hay không.
//Input
//4
//123456787654321
//86442824468
//8006000444422220000222244440006008
//235365789787654324567856578654356786556
//Output
//NO YES YES NO
#include <bits/stdc++.h>
using namespace std;
int main(){
	int t; cin >> t;
	while(t--){
	    string s; cin >> s;
	    int cnt=0;
	    for(int i=0;i<s.size();i++){
	    	if((s[i]-'0')%2!=0){
	    		++cnt;
	    		cout << "NO\n";
	    		break;
			}
		}
		if(cnt==0){
			int dem=0,b=s.size();
			for(int i=0;i<b/2;i++){
				if(s[i]!=s[b-1-i]){
					++dem;
					cout << "NO\n";
					break;
				}
			}
			if(dem==0) cout << "YES\n";
		}
	}
}