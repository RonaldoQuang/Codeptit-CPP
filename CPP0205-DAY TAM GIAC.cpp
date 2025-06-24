//Cho mảng A[] gồm n số được thiết lập theo nguyên tắc nửa đầu tăng dần nửa sau giảm dần. 
//Hãy tìm số lớn nhất của mảng. 
//Ví dụ với mảng A[] = {1, 2, 3, 4, 5, 2, 1}, ta có kết quả 5.
//Input
//1
//5
//1 2 7 4 3
//Output
//7
#include <bits/stdc++.h>
using namespace std;
void TestCase(){
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i= 0;i<n;++i)
        cin >> v[i];
    sort(v.begin(),v.end());
    cout << v[n-1] << endl;
}
int main(){
    int T;
    cin >> T;
    while(T--)
        TestCase();
    return 0;
}