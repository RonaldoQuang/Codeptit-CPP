//Viết chương trình tính tổng  S = 1 + ½ + 1/3 + … + 1/N
//Input 
//2
//Output
//1.5000
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    double s = 0;
    for (int i = 1; i <= n; ++i)
        s += 1.0 / i;
    cout << setprecision(4) << fixed << s;
}