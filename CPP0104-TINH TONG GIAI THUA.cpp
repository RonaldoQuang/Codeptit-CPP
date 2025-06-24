//Viết chương trình tính tổng  S = 1 + 1.2 + 1.2.3 + ...+1.2.3...N
//Input 
//3
//Output
//9
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    long long t = 1, s = 0;
    for (int i = 1; i <= n; ++i){
        t *= i;
        s += t;
    }
    cout << s;
}