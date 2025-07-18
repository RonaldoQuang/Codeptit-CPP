//Hãy tìm dãy con lớn nhất chỉ toàn các số Fibonacci. 
//Số 0 được coi là số Fibonacci đầu tiên.
//Input
//2
//7
//1 4 3 9 10 13 7
//9
//0 2 8 5 2 1 4 13 23
//Output
//1 3 13
//0 2 8 5 2 1 13
#include <bits/stdc++.h>
using namespace std;
vector<bool> v(1001,0);
void fibo(){
    v[0]=v[1]=1;
    int f1=0,f2=1;
    for(int i=2;f1+f2<=1000;++i){
        int f=f1+f2;
        v[f]=1;
        f1=f2;
        f2=f;
    }
}
void TestCase(){
    int n;
    cin >> n;
    for(int i=1;i<=n;++i){
        int x;
        cin >> x;
        if(v[x])
            cout << x << " ";
    }
    cout << endl;
}
int main(){
    fibo();
    int T;
    cin >> T;
    while(T--)
        TestCase();
    return 0;
}