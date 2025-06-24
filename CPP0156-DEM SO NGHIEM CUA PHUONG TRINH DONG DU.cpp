//Tìm số nghiệm của phương trình đồng dư x2 = 1(mod) p trong khoảng [1,b].  
//Ví dụ với b=5, p=7 ta tìm được x = 1 €[1,5] để x2 = 1 %7=1. 
//Với b = 8, p=6 ta tìm được x = {1, 5, 7} để x2 = 1(mod 7).
//6%1 = 38%1 = 34%1 =0; 6%2 = 38%2 = 34%2 =0; 6%4 = 38%4 = 34%4 =2;
//Input
//2
//5 7
//8 6
//Output
//1
//3
#include<iostream>
using namespace std;
typedef long long int ll;
int test(int n,int p){
	ll a=0;
	for(ll x=1;x<p;x++){
		if((x*x)%p==1){
			ll y=x+p*(n/p);
			if(y>n)
				y-=p;
			a+=((y-x)/p+1);
		}
	}
	return a;
}
int main(){
	int t; cin >> t;
	while(t--){
		int a, b; cin >> a >> b;
		cout << test(a,b) << endl;
	}
}