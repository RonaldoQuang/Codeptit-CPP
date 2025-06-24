//Axe chơi một trò chơi với Lina.
//Họ định nghĩa hàm F(x) với số x nguyên dương là tích giai thừa các chữ số của x.
//Ví dụ F(135)  = 1! * 3! * 5! = 720.
//Đầu tiên, họ chọn một số a có n chữ số và có ít nhất một chữ số lớn hơn 1, có thể có chữ số không ở đầu. Sau đó họ tìm một số nguyên dương x lớn nhất thỏa mãn:
//1.X không chứa chữ số 0 hoặc 1
//2.F(x) = F(a)
//Hãy giúp Axe và Lina tìm ra được số đó.
//Input
//1
//4 1234
//Output
//33222
#include <bits/stdc++.h>
using namespace std;
int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		long long x; cin >> x;
		map<int,int> mp;
	    while(x!=0){
			if(x%10==2) mp[2]++;
			else if(x%10==3) mp[3]++;
			else if(x%10==4){
				mp[3]++;
				mp[2]+=2;
			}
			else if(x%10==5) mp[5]++;
			else if(x%10==6){
				mp[5]++;
				mp[3]++;
			}
			else if(x%10==7) mp[7]++;
			else if(x%10==8){
				mp[7]++;
				mp[2]+=3;
			}
			else if(x%10==9){
				mp[7]++;
				mp[3]+=2;
				mp[2]++;
			}
			x/=10;
		}
		for(int i=7;i>=2;i--){
			if(mp[i]>0){
				for(int j=1;j<=mp[i];j++){
					cout << i;
				}
			}
		}
		cout << endl;
	}
}