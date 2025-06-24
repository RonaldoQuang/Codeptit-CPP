//Cho số tự nhiên N được biểu diễn dưới dạng nhị phân. 
//Hãy kiểm tra xem N có phải là số chia hết cho 5 hay không? 
//Đưa ra “Yes” nếu N chia hết cho 5, trái lại đưa ra “No”.
//Input
//2
//1010
//10000101001
//Output
//Yes
//Yes
#include <bits/stdc++.h>
using namespace std;
void TestCase(){
    string s;
    cin >> s;
    long long n=0;
    for(auto x:s) {
        n=n*2+(x-'0');
        n%=5;
    }
    if(n==0) cout << "Yes\n";
    else cout << "No\n";
}