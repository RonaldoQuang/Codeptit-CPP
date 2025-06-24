//Cho mảng A[] gồm n phần tử và mảng B[] gồm m phần tử. 
//Nhiệm vụ của bạn là tìm tích giữa phần tử lớn nhất của mảng A[] và phần tử nhỏ nhất của mảng B[]. 
//Ví dụ A[] = {5, 7, 112, 9, 3, 6, 2 }, B[] = {1, 2, 6, -1, 0, 9} ta có kết quả là -9 = 9*(-1).
//Input
//2
//6 6
//5 7 9 3 6 2
//1 2 6 -1 0 9
//6 6
//1 4 2 3 10 2
//4 2 6 5 2 9
//Output
//-9
//20
#include <bits/stdc++.h>
using namespace std;
void TestCase(){
    int n, m;
    cin >> n >> m;
    int a[n], b[m];
    for(auto &x:a) cin >> x;
    for(auto &x:b) cin >> x;
    int maxx=*max_element(a,a+n);
    int minn=*min_element(b,b+m);
    long long r=(long long) minn*maxx;
    cout << r << endl;
}
int main(){
    int T;
    cin >> T;
    while(T--)
        TestCase();
    return 0;
}