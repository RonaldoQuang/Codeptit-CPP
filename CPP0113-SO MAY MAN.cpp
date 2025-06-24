//John rất thích con số 86 vì theo John đó là con số may mắn. 
//Khi bắt gặp một số nguyên X John muốn kiểm tra xem trong dạng biểu diễn của nó kết thúc là số 86 hay không? 
//Ví dụ số 111539786 kết thúc là  số 86, còn số 123456789 thì không.
//Nhiệm vụ của bạn là viết một chương trình đọc số nguyên X và kiểm tra xem trong dạng biểu diễn của nó kết thúc là số 86 hay không?
//Input
//3
//111539786 123456789 8686  
//Output
//1 0 1
#include <iostream>
#include <math.h>
using namespace std;
int main(){
    int t; cin >> t;
    while(t--){
        string s; cin >> s;
        int n=s.size();
        if(s[n-2]=='8'&&s[n-1]=='6'){
            cout << "1" << endl;
        }
        else cout << "0" << endl;
    }
}