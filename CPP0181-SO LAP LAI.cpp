//Cho ba số a, x, y. 
//Nhiệm vụ của bạn là tìm ước số chung lớn nhất của hai số P và Q, trong đó P lặp lại x lần số a và Q lặp lại y lần số a. 
//Ví dụ a =2, x = 3, y =2 thì P=222, Q=22.
//Input
//2
//2  2  3
//123 5  2
//Output
//2
//123
#include <bits/stdc++.h>
using namespace std;
int main(){
	int t; cin >> t;
	while(t--){
		long long a,x,y; cin >> a >> x >> y;
		long long z=__gcd(x,y);
		while(z--){
			cout << a;
		}
		cout << endl;
	}
}