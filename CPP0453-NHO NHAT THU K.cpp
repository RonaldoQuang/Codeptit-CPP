//Cho mảng A[]gồm N phần tử. 
//Hãy đưa ra các phần tử nhỏ nhất thứ k của mảng.
//Input
//1
//6 3
//10 5 15 50 40 80
//Output
//15
#include <bits/stdc++.h>
using namespace std;
void TestCase(){
    int n, k;
    cin >> n >> k;
    int a[n];
    for (auto &x:a) cin >> x;
    sort(a,a+n);
    cout << a[k-1] << endl;
}
int main(){
    int T;
    cin >> T;
    while(T--) 
	    TestCase();
    return 0;
}
