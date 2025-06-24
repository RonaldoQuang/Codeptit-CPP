//Viết chương trình nhập vào N (không quá 100) là độ dài cạnh của tam giác đều. 
//Thực hiện in ra tam giác đều rỗng tương ứng theo mẫu trong ví dụ.
#include <bits/stdc++.h>
using namespace std;
int main() {
	int n; cin >> n;
	for(int i=1;i<n;i++){
		cout << " ";
	}
	cout << "*\n";
	for(int i=1;i<=n-2;i++){
		for(int j=n-1-i;j>=1;j--){
			cout << " ";
		}
		cout << "*";
		for(int j=1;j<=2*i-1;j++){
			cout << " ";
		}
		cout << "*";
		cout << endl;
	}
	for(int i=1;i<=n;i++){
		cout << "* ";
	}
}