//Cho xâu ký tự S. 
//Nhiệm vụ của bạn là đảo ngược các từ trong S. 
//Ví dụ S =  “I like this program very much”, ta nhận được kết quả là “much very program this like I”.
//Input
//2
//I like this program very much
//much very program this like I
//Output
//much very program this like I
//I like this program very much
#include <bits/stdc++.h>
using namespace std;
int main(){
    int t; cin >> t;
    cin.ignore();
    while(t--){
        string s;
        getline(cin,s);
        stringstream ss(s);
        string w;
        vector<string> v;
        while(ss >> w){
            v.push_back(w);
        }
        for(int i=v.size()-1;i>=0;i--){
            cout << v[i] << " ";
        }
        cout << endl;
    }
}