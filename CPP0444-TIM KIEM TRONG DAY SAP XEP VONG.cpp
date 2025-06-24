//Một mảng được sắp được chia thành hai đoạn tăng dần được gọi là mảng sắp xếp vòng. 
//Ví dụ mảng A[] = { 5, 6, 7, 8, 9, 10, 1, 2, 3, 4} là mảng sắp xếp vòng. 
//Cho mảng A[] gồm n phần tử, hãy tìm vị trí của phần tử x trong mảng A[].
//2
//10 3
//5 6 7 8 9 10 1 2 3 4
//10 3
//1 2 3 4 5 6 7 8 9 10
//Output
//9
//3
#include <bits/stdc++.h>
using namespace std;
int main(){
    int t; cin >> t;
    while(t--){
    	int n, x;
        cin >> n >> x;
        int p;
        for(int i=1;i<=n;++i) {
            int so; cin >> so;
            if(so==x) p=i;
        }
        cout << p << endl;
	}
}