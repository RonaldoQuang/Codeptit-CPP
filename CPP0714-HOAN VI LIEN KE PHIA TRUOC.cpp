//Cho số tự nhiên N và một hoán vị X[] của 1, 2, .., N. 
//Nhiệm vụ của bạn là đưa ra hoán vị trước đó của X[]. 
//Ví dụ N=5, X[] = {1, 2, 3, 4, 5} thì hoán vị trước đó của X[] là {5, 4, 3, 2, 1}.
//Input
//2
//5 
//1  2  3  5  4
//5
//5  4  3  2  1
//Output
//1  2  3  4  5
//5  4  3  1  2
#include <bits/stdc++.h>
using namespace std;
int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		int a[n];
		for(int i=0;i<n;i++){
			cin >> a[i];
		}
		for(int i=n-1;i>=0;i--){
			if(a[i]<a[i-1]){
				int temp=a[i];
				a[i]=a[i-1];
				a[i-1]=temp;
				break;
			}
		}
		for(int i=0;i<n;i++){
			cout << a[i] << " ";
		}
		cout << endl;
	}
}