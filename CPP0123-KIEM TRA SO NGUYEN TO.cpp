//Một số được gọi là số nguyên tố nếu nó chỉ có 2 ước là 1 và chính nó. 
//Số 0 và 1 không được coi là số nguyên tố.
//Yêu cầu: Cho số n, hãy kiểm tra xem n có là số nguyên tố hay không.
//Input
//2 4 7
//Output
//YES NO YES
#include <iostream>
#include <math.h>
using namespace std;
int nt(int n){
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0) return 0;
    }
    return n>1;
}
int main(){
    int t; cin >> t;
    if(nt(t)) cout << "YES";
    else cout << "NO";
}