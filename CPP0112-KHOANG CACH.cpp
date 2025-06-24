//Cho 2 điểm A  và B trong không gian Oxy. 
//Hãy tính khoảng cách giữa hai điểm đó.
//Input
//2
//0 0 0 5
//0 199 5 6
//Output
//5.0000
//193.0648
#include <bits/stdc++.h>
#define endl '\n'
using namespace std;
void TestCase(){
    double a, b, c, d;
    cin >> a >> b >> c >> d;
    double r = sqrt((a - c) * (a - c) + (b - d) * (b - d));
    cout << setprecision(4) << fixed << r << endl;
}
int main(){
    int T;
    cin >> T;
    while (T--){
        TestCase();
    }
}