//Biển số xe máy được quy định gồm các thành phần:
//Hai chữ số đầu là mã quản lý theo tỉnh – thành phố (ví dụ mã của Hà Nội là 29 đến 31)
//Tiếp theo là dấu gạch ngang, sau đó là một chữ cái in hoa (từ A đến Z) và một chữ số. 
//Cặp chữ cái và chữ số này được cấp theo khu vực quận – huyện.
//Tiếp theo là một dãy 5 số gồm 2 cụm: 3 chữ số đầu và hai chữ số sau, phân tách bởi dấu chấm.
//Thông thường, người ta chỉ quan tâm đến 5 chữ số cuối. Giả sử các trường hợp sau được coi là đẹp:
//Cả 5 chữ số được sắp theo thứ tự tăng chặt từ trái qua phải.
//Cả 5 chữ số đều bằng nhau
//Ba chữ số đầu bằng nhau và hai chữ số cuối bằng nhau
//Cả 5 chữ số đều là 6 và/hoặc 8 (số lộc phát).
//Theo quy tắc trên, các biển số sau được coi là đẹp:
//29-T1 123.79
//29-T1 555.55
//29-T1 222.33
//29-T1 686.88
//Và các biển số sau không đẹp:
//29-T1 123.33
//29-T1 555.54
//29-T1 606.88
//Viết chương trình kiểm tra xem các biển số xe có đẹp hay không.
#include <bits/stdc++.h>
using namespace std;
bool ascending(string s){
    for(int i=1;i<5;++i){
        if(s[i]<=s[i-1]) return 0;
    }
    return 1;
}
bool descending(string s){
    for(int i=1;i<5;++i){
        if(s[i]>=s[i-1]) return 0;
    }
    return 1;
}
bool beautiful(string s){
    return (s[0]==s[1]&&s[1]==s[2]&&s[3]==s[4]);
}
bool lucky(string s){
    for(int i=0;i<5;++i){
        if(s[i]!='6'&&s[i]!='8') return 0;
    }
    return 1;
}
void TestCase(){
    string s;
    cin >> s;
    s.erase(0,5);
    s.erase(3,1);
    if(ascending(s)||descending(s)||beautiful(s)||lucky(s))
        cout << "YES\n";
    else
        cout << "NO\n";
}
int main(){
    int T;
    cin >> T;
    while(T--)
        TestCase();
    return 0;
}