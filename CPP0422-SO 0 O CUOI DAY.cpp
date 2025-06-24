//Cho mảng A[] gồm n phần tử. 
//Nhiệm vụ của bạn là hãy sắp đặt lại các phần tử của mảng sao cho các số 0 để ở cuối cùng, các phần tử khác không được bảo toàn thứ tự trước sau. 
//Ví dụ với mảng A[] = {1, 2, 0, 0, 0, 3, 6} ta có kết quả A[] = {1, 2, 3, 6, 0, 0, 0}.
//Input
//2
//7
//1  2  0  0  0  3  6
//6
//0  1  0  2  0  3
//Output
//1  2  3  6  0  0  0
//1  2  3  0  0  0
#include <bits/stdc++.h>
using namespace std;
int main(){
    int t; cin >> t;
    while(t--){
        int n, cnt=0; cin >> n;
        long long a[n];
        for(int i=0;i<n;i++){
        	cin >> a[i];
        	if(a[i]!=0) cout << a[i] << " ";
        	else ++cnt;
		}
		for(int i=1;i<=cnt;i++){
			cout << "0 ";
		}
		cout << endl;
    }
}