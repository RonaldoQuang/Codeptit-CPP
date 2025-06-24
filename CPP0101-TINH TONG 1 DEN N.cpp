//Cho số nguyên dương N. 
//Hãy tính S = 1 + 2 + ... + N
//Input
//2
//10
//20
//Output
//55
//210
#include <iostream>
using namespace std;
int main(){
    int t; cin >> t;
    while(t--){
        long long n; cin >> n;
        cout << (n+1)*n/2 << endl;
    }
}