//Cho ma trận vuông A[][] cấp n. 
//Các phần tử của ma trận A[][] đã được sắp xếp theo hàng, cột. 
//Hãy tìm phần nhỏ nhất thứ k của ma trận. 
//Ví dụ với ma trận cấp 4 dưới đây sẽ cho ta số nhỏ nhất thứ 3 là 20, số nhỏ nhất thứ 7 là 30.
//10  20  30  40
//15  25  35  45
//24  29  37  48
//32  33  39  50
//Input
//1
//4  7
//10  20  30  40
//15  25  35  45
//24  29  37  48
//32  33  39  50
//Output
//30
#include <bits/stdc++.h>
using namespace std;
void Test(){
    int n, k;
    cin >> n >> k;
    int a[n*n];
    for(auto &x:a) cin >> x;
    sort(a,a+n*n);
    cout << a[k-1] << endl;
}
int main(){
    int T;
    cin >> T;
    while(T--)
        Test();
    return 0;
}