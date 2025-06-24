//Cho xâu ký tự S chỉ bao gồm các ký tự ‘0’ và ‘1’. 
//Nhiệm vụ của bạn là loại bỏ các xâu con “100” trong S và đưa ra độ dài lớn nhất xâu con bị loại bỏ. 
//Ví dụ S =” 1011110000” ta nhận được kết quả là 6 vì ta cần loại bỏ xâu “110000” có độ dài 6.
//Input
//2
//010010
//1011110000
//Output
//3
//6
#include <iostream>
using namespace std;
int main(){
	int t; cin >> t;
	while(t--){
		string s; cin >> s;
		int cnt=0, i=0, x=s.size();
		while(i<=x-3){
			if(s[i]=='1'&&s[i+1]=='0'&&s[i+2]=='0'){
				cnt+=3;
				s.erase(i,3);
				x-=3;
				if(s[i-1]=='1') i-=1;
				else i-=2;
			}
			else ++i;
		}
		if(cnt==0) cout << endl;
		else cout << cnt << endl;
	}
}
