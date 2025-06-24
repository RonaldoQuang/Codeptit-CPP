//Cho ba số nguyên dương x, y, p. 
//Nhiệm vụ của bạn là tính (xy) %p. 
//Ví dụ với x = 2, y = 3, p = 5 thì (23)%5=3.
//Input
//2
//2 3 5
//3 2 4
//Output
//3
//1
#include <bits/stdc++.h>
using namespace std;
int main(){
	int t; cin >> t;
	while(t--){
		long long x,y,p; cin >> x >> y >> p;
		long long z=1;
		for(int i=1;i<=y;i++){
			z=(z*x)%p;
		}
		cout << z << endl;
	}
}