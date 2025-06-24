//Cho hai số n và r, hãy tìm C(n, r)% P. Trong đó, P = 109+7.
//Input
//2
//3 2
//4 2
//Output
//3
//6
#include <bits/stdc++.h> 
using namespace std; 
long long c[1001][1001]; 
const int MOD=1e9+7; 
void nCk(){ 
    for(int i=0;i<=1000;++i){ 
	    for(int j=0;j<=i;++j){ 
		    if(j==0||j==i) c[i][j]=1; 
			else if(j==1||j==i-1) c[i][j]=i; 
			else{
			    c[i][j]=c[i-1][j-1]+c[i-1][j];
			}
			c[i][j]%=MOD; 
		} 
	} 
} 
int main(){ 
    nCk(); 
	int t; cin >> t; 
	while(t--){ 
	    int n, k; cin >> n >> k; 
		cout << c[n][k] << endl; 
	}
}