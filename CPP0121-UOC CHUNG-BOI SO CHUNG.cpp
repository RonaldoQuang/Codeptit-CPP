//Cho hai số nguyên a, b. 
//Nhiệm vụ của bạn là tìm bội số chung nhỏ nhất và ước số chung lớn nhất của a và b. 
//Bội số chung nhỏ nhất của a và b ký hiệu là LCM(a, b) và ước số chung lớn nhất của a và b ký hiệu là GCD(a,b).
//Input
//2
//5 10
//14 8 
//Output
//10 5
//56 2
#include <bits/stdc++.h>
using namespace std;
int gcd(int a, int b){
    while(b>0){
        int x=a%b;
        a=b;
        b=x;
    }
    return a;
}
long long lcm(int a, int b){
    return (long long)a*b/gcd(a,b);
}
void solve(){
    int a, b;
    cin >> a >> b;
    int y=gcd(a,b);
    long long x=lcm(a,b);
    cout << x << " " << y << endl;
}
int main(){
    int t;
    cin >> t;
    while(t--)
        solve();
    return 0;
}