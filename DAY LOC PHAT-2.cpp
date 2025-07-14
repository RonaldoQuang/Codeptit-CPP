//Viet chuong trinh nhap vao so nguyen duong N (3<=N<=10). 
//Hay in ra cac xau co N ki tu, chi chua 6 va 8, chia het cho 3 va khong co chua 3 chu so 8 lien tiep nao.
//Input
//2
//4
//5
//Output
//6666 8688 8868
//66666 68688 68868 86688 86868 86886 88668 88686
#include <bits/stdc++.h>
using namespace std;
void kt(int a[100], int n){
	for(int i=1;i<=n;i++){
		a[i]=6;
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
		cout << " ";
		int x=1;
		while(x){
			int m, cnt=0;
			for(int i=n;i>=1;i--){
				if(a[i]==6&&(a[i-2]*10+a[i-1])!=88){
					++cnt;
					m=i;
					a[i]=8;
					break;
				}
			}
			for(int i=m+1;i<=n;i++){
				a[i]=6;
			}
			if(cnt==1){
				x=1;
				int sum=0;
				for(int i=1;i<=n;i++){
			                sum+=a[i];
		                }
		                if(sum%3==0){
		                        for(int i=1;i<=n;i++){
			                        cout << a[i];
		                        }
		                        cout << " ";
				}
			}
			else x=0;
		}
		cout << endl;
	}
}
