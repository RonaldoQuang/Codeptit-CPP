//Cho ba số a, b, c có thể lớn cỡ 10^16. 
//Nhiệm vụ của bạn là tính (a*b)%c.
//Input
//1
//8 4 5
//Output
//2
#include <bits/stdc++.h>
using namespace std;
long long mod(long long a, long long b, long long c){
    if(b==0) return 0;
    if(b%2==0) return (2*(mod(a,b/2,c)%c))%c;
    else return (a%c+2*(mod(a,b/2,c)%c))%c; 
} 
int main(){ 
    int t; cin >> t; 
	while(t--){
	    long long a,b,c; 
	    cin>> a >> b >> c;
	    cout << mod(a,b,c) << endl;
    } 
}