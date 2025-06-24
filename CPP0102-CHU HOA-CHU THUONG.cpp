//Cho một chữ cái bất kỳ.
//Hãy kiểm tra xem đó là chữ hoa hay chữ thường
// Nếu là chữ thường thì in ra chữ hoa, nếu là chữ hoa thì in ra chữ thường tương ứng.
//Input 
//2
//B
//q
//Output
//b
//Q
#include <iostream>
using namespace std;
int main(){
    int t; cin >> t;
    while(t--){
        char n; cin >> n;
        if(n>='A'&&n<='Z'){
            cout << (char) (n+32) << endl;
        }
        else if(n>='a'&&n<='z'){
            cout << (char) (n-32) << endl;
        }
    }
}