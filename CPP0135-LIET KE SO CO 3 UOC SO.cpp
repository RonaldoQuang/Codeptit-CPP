//Cho số tự nhiên N. 
//Nhiệm vụ của bạn là hãy liệt kê tất cả các số có đúng ba ước số. 
//Ví dụ n=100, ta có các số 4, 9, 25, 49.
//Input
//2
//50
//200
//Output
//4 9 25 49
//4 9 25 49 121 169
#include <bits/stdc++.h>
#define endl '\n'
using namespace std;
bool isPrime(int n){
    if(n<2) return 0;
    for(int i=2;i<=sqrt(n);++i){
        if(n%i==0) return 0;
    }
    return 1;
}
void TestCase(){
    int n;
    cin >> n;
    for(int i=2;i<=sqrt(n);++i){
        if(isPrime(i))
            cout << i*i << " ";
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