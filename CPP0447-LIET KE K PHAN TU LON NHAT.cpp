//Cho mảng A[] gồm n phần tử, hãy tìm k phần tử lớn nhất của mảng. 
//Các phần tử được đưa ra theo thứ tự giảm dần.
//2
//5 3
//10 7 9 12 6
//6 2
//9 7 12 8 6 5
//Output
//12 10 9
//12 9
#include <bits/stdc++.h>
using namespace std;
void TestCase(){
    int n, k;
    cin >> n >> k;
    int a[n];
    for(auto &x:a) cin >> x;
    sort(a,a+n,greater<int>());
    for(int i=0;i<n;++i) {
        cout << a[i] << " ";
        k--;
        if(k==0) break;
    }
    cout << endl;
}
int main(){
    int T;
    cin >> T;
    while(T--) 
	    TestCase();
    return 0;
}