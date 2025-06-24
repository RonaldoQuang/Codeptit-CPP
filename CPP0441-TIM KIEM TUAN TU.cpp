//Cho mảng A[] gồm n phần tử. Hãy tìm vị trí của phần tử đầu tiên có giá trị X trong mảng A[]. 
//Nếu không tìm thấy X hãy đưa ra -1.
//2 
//5  16
//9  7  2  16  4
//7  98
//1  22  57  47  34  18  66
//Output
//4
//-1
#include <bits/stdc++.h>
using namespace std;
void TestCase(){
    int n, x;
    cin >> n >> x;
    int a[n];
    for(auto &so:a) cin >> so;
    for(int i=0;i<n;++i) {
        if(a[i]==x){
            cout << i+1 << endl;
            return;
        }
    }
    cout << "-1\n";
}
int main(){
    int T;
    cin >> T;
    while(T--) 
	    TestCase();
    return 0;
}