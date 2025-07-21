//Viết chương trình cho phép nhập vào hai số nguyên dương và tìm tất cả các số nguyên tố nằm trong khoảng đó.
//Input
//10 50
//Output
//11 13 17 19 23 29 31 37 41 43 47
#include <bits/stdc++.h>
using namespace std;
int nt(int n){
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0) return 0;
	}
	return n>1;
}
int main() {
    int a, b; cin >> a >> b;
    if(a>b) swap(a,b);
    for(int i=a+1;i<b;i++){
        if(nt(i)) cout << i << " ";
    }
}
