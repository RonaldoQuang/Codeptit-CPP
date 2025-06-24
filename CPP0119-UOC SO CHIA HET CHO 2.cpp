//Cho số nguyên dương N.
//Nhiệm vụ của bạn là hãy xác định xem có bao nhiêu ước số của N chia hết cho 2?
//Input
//2
//9
//8
//Output
//0 
//3
#include <bits/stdc++.h>
using namespace std;
void TestCase(){
    int n;
    cin >> n;
    int d=0;
    for(int i=1;i<=sqrt(n);i++){
        if(n%i==0){
            if(i%2==0)
                d++;
            if((n/i)%2==0&&i*i!=n)
                d++;
        }
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