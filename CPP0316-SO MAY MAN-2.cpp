//Một số nguyên không âm n được gọi là số may mắn nếu tổng các chữ của n bằng 9 hoặc tổng các chữ số của n là số may mắn. 
//Ví dụ các số 9, 108, 279 là các số may mắn, còn các số 19, 289 không phải là số may mắn.
//Yêu cầu: Cho số nguyên không âm n, hãy kiểm tra xem n có phải là số may mắn hay không?
//Input
//3
//888
//666
//289
//Output
//0
//1
//0
#include <bits/stdc++.h>
using namespace std;
void solve(int &num){
    int sum=0;
    while(num>0){
        sum+=num%10;
        num/=10;
    }
    num=sum;
}
void TestCase(){
    string s;
    cin >> s;
    int num=0;
    for(auto x:s){
        num+=x-'0';
    }
    while(num>=10){
        solve(num);
    }
    cout << (num==9) << endl;
}
int main(){
    int T;
    cin >> T;
    while(T--) 
	    TestCase();
    return 0;
}