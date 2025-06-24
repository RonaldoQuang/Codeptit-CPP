//Cho mảng A[] gồm n phần tử. 
//Nhiệm vụ của bạn là hãy sắp đặt lại các phần tử của mảng sao cho A[i] = i. 
//Nếu phần tử A[j] của có giá trị khác j, hãy đưa ghi vào -1. 
//Ví dụ với mảng A[] = {-1,-1,6,1,9, 3, 2, -1, 4, -1} ta có kết quả A[] = {-1, 1, 2, 3, 4, -1, 1, -1, -1, 9}.
//Input
//2
//10
//-1 -1 6 1 9 3 2 -1 4 -1
//6
//0  -3  1  -2  3 - 4
//Output
//-1 1 2 3 4 -1 6 -1 -1 9
//0 1 -1 3 -1 -1
#include <bits/stdc++.h>
using namespace std;
void TestCase(){
    int n;
    cin >> n;
    vector<bool> v(n,0);
    for(int i=0;i<n;++i) {
        long long x;
        cin >> x;
        if(x<0||x>=n)
            continue;
        v[x]=1;
    }
    for(int i=0;i<n;++i) {
        if(v[i])
            cout << i << " ";
        else
            cout << "-1 ";
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