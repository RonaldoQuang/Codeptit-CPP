//Cho bốn số nguyên dương X, Y, Z và N. 
//Hãy tìm số nguyên dương nhỏ nhất có N chữ số chia hết đồng thời cho X, Y, Z.  
//Ví dụ với X = 2, Y = 3, Z = 5, N = 4 ta tìm được số nguyên dương nhỏ nhất có 4 chữ số là 1020 chia hết cho cả 2, 3, 5.
//Input
//3
//2  3  5  4
//4  5  6  3
//3  5  7  2
//Output
//1020
//120
//-1
#include <bits/stdc++.h>
#define endl '\n'
using namespace std;
typedef long long LL;
LL gcd(LL a, LL b){
    while(b>0){
        LL x=a%b;
        a=b;
        b=x;
    }
    return a;
}
LL lcm(LL a, LL b){
    return a*b/gcd(a,b);
}
void TestCase(){
    LL x,y,z,n;
    cin >> x >> y >> z >> n;
    LL l=pow(10,n-1);
    LL r=pow(10,n)-1;
    LL bc=lcm(lcm(x, y),z);
    if(bc>r)
        cout << "-1\n";
    else if(l%bc==0)
        cout << l << endl;
    else{
        LL d=l/bc;
        cout << bc*(d+1) << endl;
    }
}
int main(){
    int T;
    cin >> T;
    while(T--)
        TestCase();
    return 0;
}