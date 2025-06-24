//Cho xâu ký tự S. 
//Nhiệm vụ của bạn là hãy tìm độ dài xâu con nhỏ nhất của S chứa đầy đủ các ký tự của S mỗi ký tự ít nhất một lần. 
//Ví dụ với xâu S=”aabcbcdbca” ta có xâu con nhỏ nhất là “dbca”.
//Input
//2
//aabcbcdbca
//aaab
//Output
//4
//2
#include <bits/stdc++.h>
using namespace std;
int main(){
    int t; cin >> t;
    while(t--){
        string s; cin >> s;
        set<char> se;
        for(int i=0;i<s.size();i++){
            se.insert(s[i]);
        }
        int min1=1e9;
        for(int i=0;i<=s.size()-se.size();i++){
            set<char> ss;
            for(int j=i;j<s.size();j++){
                ss.insert(s[j]);
                if(ss.size()==se.size()){
                    min1=min(min1,j-i+1);
                    break;
                }
            }
        }
        cout << min1 << endl;
    }
}