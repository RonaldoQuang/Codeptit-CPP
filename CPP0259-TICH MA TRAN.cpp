//Viết chương trình tính tích hai ma trận A cỡ n*m và ma trận B cỡ m*p.
//Với 1 < n,m,p < 50. 
//Các giá trị trong ma trận đều nguyên dương và không vượt quá 1000.
//Input
//3 4 3
//1 2 3 4
//4 2 3 1
//2 4 1 3
//1 1 1
//2 2 2
//3 3 3
//4 4 4
//Output
//30 30 30
//21 21 21
//25 25 25
#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, m, p;
    cin >> n >> m >> p;
    int a[n][m], b[m][p];
    for(int i=0;i<n;++i){
        for(int j=0;j<m;++j)
            cin >> a[i][j];
    }
    for(int i=0;i<m;++i){
        for(int j=0;j<p;++j)
            cin >> b[i][j];
    }
    for(int i=0;i<n;++i){
        for(int j=0;j<p;++j){
            int s=0;
            for(int k=0;k<m;++k){
                s+=a[i][k]*b[k][j];
            }
            cout << s << " ";
        }
        cout << endl;
    }
    return 0;
}