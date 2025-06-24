//Cho số nguyên dương n. 
//Hãy kiểm tra xem n có phải là số Fibonacci hay không?
//Input
//2
//8
//15
//Output
//YES
//NO
#include <bits/stdc++.h> 
using namespace std; 
int check(long long n){ 
    if(n==0) return 1; 
	long long a=0,b=1,c=1; 
	while(c<n){ 
	    c=a+b; 
	    a=b; 
	    b=c; 
	} 
	if(c==n) return 1; 
	return 0; 
} 
int main(){ 
    int t; cin>>t; 
	while(t--){ 
	    long long n; cin>>n; 
		if(check(n)) cout<<"YES"<<endl; 
		else cout<<"NO"<<endl; 
	} 
	return 0; 
}