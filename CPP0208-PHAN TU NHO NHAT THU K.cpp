//Cho mảng A[] gồm n số và số k. 
//Hãy tìm phần tử nhỏ nhất thứ k của mảng. 
//Ví dụ với mảng A[] = {7, 10, 4, 3, 20, 15 }, k=3 ta nhận được số nhỏ nhất thứ k là 7.
//Input
//2
//6 3
//7  10  4  3  20  15
//6 4
//9  7  12  8  6  5
//Output
//7
//8
#include <bits/stdc++.h>
using namespace std;
void TestCase(){
    int n, k;
    cin >> n >> k;
    vector<int> v(n);
    for(int i=0;i<n;++i) cin >> v[i];
    sort(v.begin(),v.end());
    cout << v[k-1] << endl;
}
int main(){
    int T;
    cin >> T;
    while(T--)
        TestCase();
    return 0;
}