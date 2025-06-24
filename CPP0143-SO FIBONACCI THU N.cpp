//Dãy số Fibonacci được định nghĩa theo công thức như sau:
//F1 = 1
//F2 = 1
//Fn = Fn-1 + Fn-2 với n>2
//Viết chương trình tính số Fibonacci thứ n (với n không quá 92)
//Input
//3
//2 
//5 
//20
//Output
//1 
//5 
//6765
#include <iostream>
using namespace std;
int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		long long int a[100];
		a[0]=1;
		a[1]=1;
		for(int i=2;i<92;i++)
			a[i]=a[i-2]+a[i-1];
		cout << a[n-1] << endl;
	}
}