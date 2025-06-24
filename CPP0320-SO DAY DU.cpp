//Cho một số nguyên dương lớn có nhiều hơn 20 chữ số nhưng không quá 1000 chữ số. 
//Hãy kiểm tra xem số đó có đầy đủ tất cả các chữ số từ 0 đến 9 hay không.
//Input
//3
//01234aa32432432432534545b987978
//123444444444444566666666667890
//324562783924723543243243242354354354333234324
//Output
//INVALID
//YES
//NO
#include <bits/stdc++.h>
using namespace std;
void TestCase(){
    string s;
    cin >> s;
    if(s[0]=='0'){
        cout << "INVALID\n";
        return;
    }
    bool dd[10]={0};
    for(auto x:s){
        if(x>='0'&&x<='9')
            dd[x-'0']=1;
        else{
            cout << "INVALID\n";
            return;
        }
    }
    for(auto x:dd){
        if(x==0){
            cout << "NO\n";
            return;
        }
    }
    cout << "YES\n";
}
int main(){
    int T;
    cin >> T;
    while(T--)
        TestCase();
    return 0;
}