//Viet chuong trinh nhap vao so nguyen duong N (3<=N<=10). 
//Hay in ra cac xau nhi phan co do dai N va khong co chua 3 chu so 1 lien tiep nao.
#include <bits/stdc++.h>
using namespace std;
void kt(int a[100], int n){
	for(int i=1;i<=n;i++){
		a[i]=0;
	}
}
int main(){
	int t; cin >> t;
	while(t--){
		int n, a[100]; cin >> n;
		kt(a,n);
		for(int i=1;i<=n;i++){
			cout << a[i];
		}
		cout << endl;
		int x=1;
		while(x){
			int m, cnt=0;
			for(int i=n;i>=1;i--){
				if(a[i]==0&&(a[i-2]*10+a[i-1])!=11){
					++cnt;
					m=i;
					a[i]=1;
					break;
				}
			}
			for(int i=m+1;i<=n;i++){
				a[i]=0;
			}
			if(cnt==1){
				x=1;
				for(int i=1;i<=n;i++){
			        cout << a[i];
		        }
		        cout << endl;
			}
			else x=0;
		}
	}
}