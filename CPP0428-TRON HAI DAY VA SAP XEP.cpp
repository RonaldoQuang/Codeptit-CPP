//Cho mảng A[] gồm n phần tử và mảng B[] gồm m phần tử. 
//Nhiệm vụ của bạn là hợp nhất hai mảng A[] và B[] để được một mảng mới đã được sắp xếp. 
//Ví dụ A[] = {10, 5, 15}, B[] = {20, 3, 2} ta có kết quả là C[] = {2, 3, 5, 10, 15, 20}.
//Input
//1
//3 3
//10 5 15
//20 3 2
//Output
//2 3 5 10 15 20
#include <bits/stdc++.h>
using namespace std;
void TestCase(){
    int n, m;
    cin >> n >> m;
    vector<int> v(n+m);
    for(auto &x:v) cin >> x;
    sort(v.begin(),v.end());
    for(auto x:v)
        cout << x << " ";
    cout << endl;
}
int main(){
    int T;
    cin >> T;
    while(T--)
        TestCase();
    return 0;
}