//Một số nguyên dương được gọi là số thuận nghịch nếu viết theo chiều ngược lại vẫn có cùng giá trị với số ban đầu. 
//Ví dụ số 121 là số thuận nghịch, số 123 không phải số thuận nghịch.
//Viết chương trình kiểm tra số thuận nghịch
//Input 
//2
//123456789012345 12345678987654321
//Output
//NO YES
#include <iostream>
using namespace std;
int main(){
    int t; cin >> t;
    while(t--){
        string s; cin >> s;
        int n=s.size(),dem=0;
        for(int i=0;i<n/2;i++){
            if(s[i]==s[n-1-i]){
                ++dem;
            }
        }
        if(dem==n/2) cout << "YES\n";
        else cout << "NO\n";
    }
}