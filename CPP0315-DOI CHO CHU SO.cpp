//Cho số tự nhiên N. 
//Bạn chỉ được phép sử dụng nhiều nhất một phép đổi chỗ giữa 2 chữ số để nhận được số lớn nhất nhỏ hơn N. 
//Ví dụ với số N=12435, sử dụng một phép đổi chỗ ta nhận được số lớn nhất nhỏ hơn N là 12345. 
//Mặc dù 12354 > 12345 nhưng ta không thể tạo ra số 12345 với chỉ một phép hoán vị. 
//Với số N=12345 ta không có phép đổi chỗ.
//Input
//2
//12435
//12345
//Output
//12345
//-1
#include <bits/stdc++.h>
using namespace std;
int main(){
	int t; cin >> t;
	while(t--){
		string s; cin >> s;
		int cnt=0,b,m,n=-1e9,min=-1e5;
		for(int i=s.size()-1;i>=1;i--){
			for(int j=i-1;j>=0;j--){
				if(s[j]>s[i]){
					n=j;
					break;
				}
			}
			if(n>min){
				min=n;
				m=i;
			}
			if(n==min){
			    if(s[i]==s[m]){
			    	min=n;
			    	m=i;
				}
			}
		}
		if(min>=0){
			char temp=s[min];
			s[min]=s[m];
			s[m]=temp;
			cout << s << endl;
		}
		else cout << "-1" << endl;
	}
}