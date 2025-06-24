//Cho một xâu ký tự S chỉ bao gồm các ký tự chữ cái và không có khoảng trống. 
//Hãy loại bỏ các nguyên âm trong S.
//Kết quả được viết ra dưới dạng chữ cái viết thường của các phụ âm có mặt trong S, trước mỗi phụ âm ghi một ký tự dấu chấm ‘.’
//Các nguyên âm bao gồm: ‘A’, ‘E’, ‘I’, ‘O’, ‘U’, ‘Y’ (cả viết hoa và viết thường).
//Input
//HocVienCNBCVT
//Output
//.h.c.v.n.c.n.b.c.v.t
#include <bits/stdc++.h>
using namespace std;
bool isVowel(char c){
    if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||c=='y') return 1;
    return 0;
}
int main(){
    string s;
    cin >> s;
    for(auto x:s) {
        x=(char) tolower(x);
        if(!isVowel(x))
            cout << "." << x;
    }
    return 0;
}