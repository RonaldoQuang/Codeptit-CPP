//Cho bốn số M, N, A, B. 
//Nhiệm vụ của bạn là hãy đếm tất cả các số trong khoảng [M, N] chia hết cho các số A, B.
//Input
//2
//5 11 4 6
//3 1000 5 9
//Output
//2 
//289
#include <bits/stdc++.h>
#define endl '\n'
using namespace std;
void TestCase(){
    int m, n, a, b;
    cin >> m >> n >> a >> b;
    int d=0;
    for(int i=m;i<=n;++i){
        if(i%a==0||i%b==0)
            d++;
    }
    cout << d << endl;
}
int main(){
    int T;
    cin >> T;
    while(T--)
        TestCase();
    return 0;
}