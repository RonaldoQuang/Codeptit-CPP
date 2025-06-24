//Cho hai số L, R. 
//Nhiệm vụ của bạn là hãy đếm tất cả các số có đúng ba ước số trong khoảng [L, R]. 
//Ví dụ L =1, R =10, ta có kết quả là 2 vì chỉ có số 3 và 9 là có đúng 3 ước số.
//Input
//2
//1 10
//1 1000000000000
//Output
//2
//78498
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
    long long l, r;
    cin >> l >> r;
    l=ceil(sqrt(l));
    r=floor(sqrt(r));
    int d=0;
    for(int i=l;i<=r;++i){
        if(isPrime(i))
            d++;
    }
    cout << d << endl;
}
int main(){
    int T;
    cin >> T;
    while(T--)
        TestCase();
    return 0;
}
