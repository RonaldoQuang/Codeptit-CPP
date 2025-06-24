//Cho số tự nhiên N, hãy kiểm tra xem N có phải là số chia hết cho 11 hay không? 
//Đưa ra 1 nếu N chia hết cho 11, trái lại đưa ra 0.
//Input
//2
//76945
//363588395960667043875487
//Output
//1
//0
#include <iostream>
using namespace std;
int main(){
	int t; cin >> t;
	while(t--){
		string s; cin >> s;
		int sum=0, sum1=0;
		for(int i=0;i<s.size();i++){
			if(i%2==0 ) sum=sum+s[i]-'0';
			else sum1=sum1+s[i]-'0';
		}
		if((sum-sum1)%11==0) cout << "1\n";
		else cout << "0\n";
	}
}