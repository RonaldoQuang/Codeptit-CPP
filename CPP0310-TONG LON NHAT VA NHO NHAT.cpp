//Cho hai số nguyên dương X1, X2. 
//Ta chỉ được phép thay đổi chữ số 5 thành 6 và ngược lại chữ số 6 thành chữ số 5 của các số X1 và X2. 
//Hãy đưa ra tổng nhỏ nhất và tổng lớn nhất các số X1 và X2 được tạo ra theo nguyên tắc kể trên.
//Input
//2
//645  666
//5466 4555
//Output
//1100  1312
//10010 11132
#include <bits/stdc++.h>
using namespace std;
long long Min(string a, string b){
    for(int i=0;i<a.length();++i){
        if(a[i]=='6') a[i]='5';
    }
    for(int i=0;i<b.length();++i){
        if(b[i]=='6') b[i]='5';
    }
    long long x=stoll(a),y=stoll(b);
    return x+y;
}
long long Max(string a, string b){
    for(int i=0;i<a.length();++i){
        if(a[i]=='5') a[i]='6';
    }
    for(int i=0;i<b.length();++i){
        if(b[i]=='5') b[i]='6';
    }
    long long x=stoll(a),y=stoll(b);
    return x+y;
}
void TestCase(){
    string a, b;
    cin >> a >> b;
    cout << Min(a, b) << " " << Max(a, b) << endl;
}
int main(){
    int T;
    cin >> T;
    while(T--)
        TestCase();
    return 0;
}