//Cho mảng A[] gồm n số nguyên không âm. 
//Hãy sắp đặt lại các phần tử trong mảng sao cho khi nối các số lại với nhau ta được một số lớn nhất. 
//Ví dụ với mảng A[] = {54, 546, 548, 60 } thực hiện theo nguyên tắc trên ta được số lớn nhất là  6054854654.
//Input
//2
//4
//54  546  548  60
//8
//1  34  3  98  9  76  45  4
//Output
//6054854654
//998764543431
#include <bits/stdc++.h>
using namespace std;
bool cmp(string a, string b){
    string s1=a+b;
    string s2=b+a;
    return s1>s2;
}
void TestCase(){
    int n;
    cin >> n;
    string a[n];
    for(auto &x:a) {
        cin >> x;
    }
    sort(a,a+n,cmp);
    for(auto x:a) {
        cout << x;
    }
    cout << endl;
}
int main(){
    int T;
    cin >> T;
    while(T--){
        TestCase();
    }
    return 0;
}
