//Cho mảng A[] gồm N phần tử đã được sắp xếp. 
//Hãy tìm K phần tử gần nhất của X khác X. 
//Ví dụ với mảng A[] = {1, 3, 5, 7, 9, 11}, X = 7, K=2 thì ta có 2 phần tử gần nhất của 7 là 5 và 9. 
//K là số chẵn và cần lấy một nửa lớn, một nửa nhỏ hơn X.
#include <bits/stdc++.h>
using namespace std;
int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		int a[1000000]={0};
		for(int i=0;i<n;i++){
		    cin >> a[i];
		}    
		int k, x; cin >> k >> x;
		int z=lower_bound(a,a+n,x)-a;
		if(a[z]==x){
			for(int i=z-k/2;i<z;i++){
			    if(i>=0) cout << a[i] << " ";
			    else cout << "0" << " ";
			}
			for(int i=z+1;i<=z+k/2;i++){
				if(i<n) cout << a[i] << " ";
				else cout << "0" << " ";
			}
		}
		cout << endl;
	}
}