//Cho số tự nhiên N. Hãy đưa ta các hoán vị của 1, 2, .., N.
//Input
//1
//3
//Output
//123 132 213 231 312 321
#include <bits/stdc++.h>
using namespace std;
void kt(int a[100], int n){
    for(int i=1;i<=n;i++){
        a[i]=i;
    }
}
int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        int a[100];
        kt(a,n);
        for(int i=1;i<=n;i++){
        	cout << a[i];
		}
		cout << " ";
		int x=1;
		while(x){
			int m,z,cnt=0,min=100;
			for(int i=n-1;i>=1;i--){
				if(a[i]<a[i+1]){
					m=i;
					++cnt;
					break;
				}
			}
			for(int i=m+1;i<=n;i++){
				if(a[i]>a[m]&&a[i]<min){
					min=a[i];
					z=i;
				}
			}
			int temp=a[m];
			a[m]=a[z];
			a[z]=temp;
			sort(a+m+1,a+n+1);
			if(cnt==1){
				x=1;
				for(int i=1;i<=n;i++){
					cout << a[i];
				}
				cout << " ";
			}
			else x=0; 
		}
		cout << endl;
    }
}