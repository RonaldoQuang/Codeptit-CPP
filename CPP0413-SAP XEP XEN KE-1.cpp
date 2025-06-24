//Cho mảng A[] gồm n số nguyên khác nhau. 
//Hãy đưa ra các phần tử của mảng theo khuôn dạng lớn nhất, nhỏ nhất, lớn thứ hai, nhỏ thứ 2, … 
//Ví dụ với A[] = {9, 7, 12, 8, 6, 5} ta đưa ra : 12, 5, 9, 6, 8, 7.
//Input
//2
//7
//7 1 2 3 4 5 6
//8
//1 6 9 4 3 7 8 2
//Output
//7 1 6 2 5 3 4
//9 1 8 2 7 3 6 4
#include <bits/stdc++.h>
#define endl '\n'
using namespace std;
void TestCase(){
    int n;
    cin >> n;
    int a[n];
    for(auto &x:a)
        cin >> x;
    sort(a,a+n,greater<int>());
    int i=0,j=n-1;
    while(i<j){
        cout << a[i++] << " ";
        if(i!=j)
            cout << a[j--] << " ";
    }
    if(i==j)
        cout << a[i];
    cout << endl;
}
int main(){
    int T;
    cin >> T;
    while(T--)
        TestCase();
    return 0;
}