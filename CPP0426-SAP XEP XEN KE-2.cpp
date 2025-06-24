//Cho mảng A[] gồm n số nguyên dương. 
//Nhiệm vụ của bạn là hãy sắp đặt lại các phần tử của mảng sao theo nguyên tắc số lớn nhất ở đầu, số nhỏ nhất thứ 2, số lớn thứ nhì ở vị trí tiếp theo, số nhỏ thứ nhì ở vị trí kế tiếp …. 
//Ví dụ với mảng A[] = {1, 7, 3, 5, 9 } ta được mảng được sắp A[] = { 9, 1, 7, 3, 5}.
//Input
//2
//4
//1  5  2  7
//6
//1  3  2  7  9  8
//Output
//7  1  5  2
//9  1  8  2  7  3
#include <bits/stdc++.h>
using namespace std;
void TestCase(){
    int n;
    cin >> n;
    int a[n];
    for(auto &x:a) cin >> x;
    sort(a,a+n,greater<int>());
    int i=0,j=n-1;
    while(i<j){
        cout << a[i++] << " " << a[j--] << " ";
    }
    if(i==j) cout << a[i];
    cout << endl;
}
int main(){
    int T;
    cin >> T;
    while(T--) 
	    TestCase();
    return 0;
}