//Khi viết tên người Việt Nam sang dạng chuẩn Tiếng Anh không dấu, người ta có thể lựa chọn 1 trong 2 cách viết:
//Cách 1: tên có 1 từ.
//Ví dụ: Nguyen Manh Son được viết thành Son Nguyen Manh
//Cách 2: họ có 1 từ.
//Ví dụ: Nguyen Manh Son được viết thành Manh Son Nguyen
//Hãy viết chương trình chuẩn hóa xâu ký tự họ tên theo một trong hai dạng trên.
//Input
//2
//1
//NguyeN    vAn    Nam
//2
//hoAng  le Nhat THONG chi
//Output
//Nam Nguyen Van
//Le Nhat Thong Chi Hoang
#include <bits/stdc++.h>
using namespace std;
void TestCase(){
    int n;
    cin >> n;
    cin.ignore();
    vector<string> v;
    string str, s;
    getline(cin,str);
    stringstream ss(str);
    while (ss >> s){
        for(auto &x:s)
            x=tolower(x);
        s[0]=toupper(s[0]);
        v.push_back(s);
    }
    if(n==1){
        cout << v.back() << " ";
        for(int i=0;i<v.size()-1;++i)
            cout << v[i] << " ";
    }
    else if(n==2){
        for(int i=1;i<v.size();++i)
            cout << v[i] << " ";
        cout << v[0];
    }
    cout << endl;
}
int main(){
    int T;
    cin >> T;
    while(T--)
        TestCase();
    return 0;
}