//Cho mảng A[] gồm n phần tử và Q câu hỏi.
// Mỗi câu hỏi Q là bộ đôi hai số L và R. 
//Nhiệm vụ của bạn là tìm tổng các phần tử của mảng A[] của mỗi câu hỏi Q. 
//Ví dụ với mảng A[] = {1, 1, 2, 1, 3, 4, 5, 2, 8}, các câu hỏi Q: [1, 5], [2, 4], [3, 5] ta sẽ có các câu trả lời : 8 , 4, 6. 
//Input
//1
//9 3
//1  1  2  1  3  4  5  2  8
//1 5
//2 4
//3 5
//Output
//8
//4
//6
#include <bits/stdc++.h>
using namespace std;
void TestCase(){
    int n, q;
    cin >> n >> q;
    vector<int> v(n+1,0);
    for (int i=1;i<=n;++i){
        cin >> v[i];
        v[i]+=v[i-1];
    }
    for(int i=1;i<=q;++i){
        int l,r;
        cin >> l >> r;
        cout << v[r]-v[l-1] << endl;
    }
}
int main(){
    int T;
    cin >> T;
    while(T--)
        TestCase();
    return 0;
}