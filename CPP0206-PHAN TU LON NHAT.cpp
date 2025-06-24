//Cho mảng A[] gồm n phần tử. 
//Hãy tìm phần tử lớn nhất của mảng. 
//Ví dụ với mảng A[] = {7, 10, 4, 3, 20, 15 } ta nhận được kết quả là 20.
//Input
//2
//6
//7  10  4  3  20  15
//6
//9  7  12  8  6  5
//Output
//20
//12
#include <bits/stdc++.h>
using namespace std;
void TestCase(){
    int n;
    cin >> n;
    int a[n];
    for(int i=0;i<n;++i) cin >> a[i];
    sort(a,a+n);
    cout << a[n-1] << endl;
}
int main(){
    int T;
    cin >> T;
    while(T--)
        TestCase();
    return 0;
}