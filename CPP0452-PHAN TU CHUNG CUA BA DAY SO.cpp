//Cho mảng A[], B[], C[] gồm N1, N2, N3 phần tử đã được sắp xếp. 
//Hãy đưa ra các phần tử có mặt trong cả ba mảng theo thứ tự tăng dần. 
//Nếu không có đáp án, in ra -1. 
//Input
//1
//6 5 8
//1 5 10 20 40 80
//6 7 20 80 100
//3 4 15 20 30 70 80 120
//Output
//20 80
#include <bits/stdc++.h>
using namespace std;
void TestCase(){
    int n, m, l;
    cin >> n >> m >> l;
    long long a[n], b[m], c[l];    
    for(auto &x:a) cin >> x;
    for(auto &x:b) cin >> x;
    for(auto &x:c) cin >> x;
    int i=0,j=0,k=0;
    bool OK=0;
    while(i<n&&j<m&&k<l) {
        if(a[i]==b[j]&&b[j]==c[k]){
            cout << a[i] << " ";
            i++, j++, k++;
            OK=1;
        }
        else if(a[i]<b[j]) i++;
        else if(b[j]<c[k]) j++;
        else k++;
    }
    if (!OK) cout << -1;
    cout << endl;
}
int main(){
    int T;
    cin >> T;
    while(T--){
        TestCase();
    }
    return 0;
}
