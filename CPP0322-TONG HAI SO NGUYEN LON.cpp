//Cho hai số rất lớn X và Y được biểu diễn như hai xâu ký tự. 
//Nhiệm vụ của bạn là tìm X+Y?
//Input
//1
//12
//198111
//Output
//198123
#include <bits/stdc++.h>
using namespace std;
string Sum(string a, string b){
    int len=max(a.length(),b.length());
    while(a.length()<len)
        a="0"+ a;
    while(b.length()<len)
        b="0"+b;
    string res="";
    int remember=0;
    for(int i=len-1;i>=0;i--){
        int digit=(a[i]-'0')+(b[i]-'0')+remember;
        remember=digit/10;
        res=char(digit%10+'0')+res;
    }    
    if(remember>0)
        res=char(remember+'0')+res;
    return res;
}
void TestCase(){
    string a, b;
    cin >> a >> b;
    cout << Sum(a, b) << endl;
}
int main(){
    int T;
    cin >> T;
    while(T--)
	    TestCase();
    return 0;
}