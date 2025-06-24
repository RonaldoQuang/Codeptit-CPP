//Cho mảng A[] gồm n phần tử và số d. 
//Hãy thực hiện phép quay vòng d phần tử của mảng A[]. 
//Ví dụ với mảng A[] = {1, 2, 3, 4, 5}, d = 2 thì ta có kết quả A[] = {3, 4, 5, 1, 2}.
//Input
//2
//5 2
//1  2  3  4  5
//7 4
//1  2  3  4  5  6  7
//Output
//3 4 5 1 2
//5 6 7 1 2 3 4
#include <bits/stdc++.h>
#define endl '\n'
using namespace std;
void TestCase(){
    int n, d;
    cin >> n >> d;
    vector<int> v(n);
    for(int i=0;i<n;++i) cin >> v[i];
    for(int i=0;i<n;++i)
        cout << v[(i+d)%n] << " ";
    cout << endl;
}
int main(){
    int T;
    cin >> T;
    while(T--)
        TestCase();
    return 0;
}