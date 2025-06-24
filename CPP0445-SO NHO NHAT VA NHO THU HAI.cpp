//Cho mảng A[] gồm n phần tử, hãy đưa ra số nhỏ nhất và số nhỏ thứ hai của mảng. 
//Nếu không có số nhỏ thứ hai, hãy đưa ra -1.
//2
//10
//5 6 7 8 9 10 1 2 3 4
//5
//1 1 1 1 1
//Output
//1 2
//-1
#include <iostream>
#include <set>
using namespace std;
int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        set<int> se;
        for(int i=0;i<n;i++){
            int x; cin >> x;
            se.insert(x);
        }
        if(se.size()<2) cout << "-1" << endl;
        else{
            int cnt=0;
            for(int z:se){
                cout << z << " ";
                ++cnt;
                if(cnt==2){
                    cout << endl;
                    break;
                }
            }
        }
    }
}