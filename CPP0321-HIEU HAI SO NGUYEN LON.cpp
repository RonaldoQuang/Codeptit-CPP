//Cho hai số rất lớn X và Y được biểu diễn như hai xâu ký tự. 
//Nhiệm vụ của bạn là tìm |X-Y|?
//Input
//2
//978
//12977
//100
//1000000
//Output
//11999
//0999900
#include <bits/stdc++.h>
using namespace std;
string Minus(string a, string b){
    int len=max(a.length(),b.length());
    while(a.length()<len)
        a="0"+a;
    while(b.length()<len)
        b="0"+b;
    if(a<b) swap(a, b);
    string res="";
    int remember=0;
    for (int i=len-1;i>=0;i--){
        int digit=(a[i]-'0')-(b[i]-'0')-remember;
        if(digit<0){
            remember=1;
            digit+=10;
        }
        else
            remember = 0;
        res=char(digit+'0')+res;
    }
    return res;
}
void TestCase(){
    string a, b;
    cin >> a >> b;
    cout << Minus(a, b) << endl;
}
int main(){
    int T;
    cin >> T;
    while(T--)
        TestCase();
    return 0;
}