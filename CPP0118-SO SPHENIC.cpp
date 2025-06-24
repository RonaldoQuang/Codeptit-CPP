//Số nguyên dương N được gọi là số Sphenic nếu N được phân tích duy nhất dưới dạng tích của ba số khác nhau. 
//Ví dụ N=30 là số Sphenic vì 30 = 2×3×5;  N = 60 không phải số Sphenic vì 60 = 2×2×3×5. 
//Cho số tự nhiên N, nhiệm vụ của bạn là kiểm tra xem N có phải số Spheic hay không?
//Input
//2
//30
//60
//Output
//1 
//0
#include <bits/stdc++.h>
#include <math.h>
using namespace std;
int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		int dem=0,dem1=0;
		for(int i=2;i<=sqrt(n);i++){
			int cnt=0;
			while(n%i==0){
				++cnt;
				if(cnt==2){
					++dem;
					break;
				}
				n/=i;
			}
			if(cnt==1) ++dem1;
			if(dem>0){
				break;
			}
		}
		if(dem==0&&dem1==3&&n==1) cout << "1\n";
		else if(dem==0&&dem1==2&&n!=1) cout << "1\n";
		else cout << "0\n";
	}
}