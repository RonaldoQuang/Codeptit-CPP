//Dãy số Fibonacci được định nghĩa Fn = Fn-1 + Fn-2, n>1 và F0 = 0, F1 = 1. 
//Dưới đây là một số số Fibonacci : 0, 1, 1, 2, 3, 5, 8, 13, 21…
//Nhiệm vụ của bạn là tìm số Fibonacci thứ n.
//Input
//2
//2
//5
//Output
//1
//5
#include <bits/stdc++.h> 
using namespace std;  
const int MOD=1e9+7; 
long long fib(long long f[], long long n){
    f[0]=0;
	f[1]=1;
	if(n==0||n==1) return n;
	else{
        for(long long i=2;i<=1000;i++){
    	    f[i]=f[i-2]%MOD+f[i-1]%MOD;
    	    f[i]%=MOD;
		    if(i==n){
    	        return f[i];
    	        break;
    	    }
		}
	}
} 
int main(){ 
	int t; cin >> t;
	while(t--){
		long long f[1001], n; cin >> n;
		cout << fib(f,n) << endl;
	}
}