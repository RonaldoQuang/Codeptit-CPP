//Một người du lịch muốn đi tham quan N thành phố T1, T2, ..., TN . 
//Xuất phát tại một thành phố nào đó, người du lịch muốn qua tất cả các thành phố còn lại mỗi thành phố đúng một lần rồi trở lại thành phố ban đầu. 
//Biết cij là chi phí đi lại từ thành phố i đến thành phố j. 
//Hãy tìm một hành trình cho người đi du lịch có tổng chi phí là nhỏ nhất.
#include <bits/stdc++.h>
using namespace std;
int scs(int n){
	int cnt=0;
	if(n==0) cnt=1;
	while(n!=0){
		++cnt;
		n/=10;
	}
	return cnt;
}
void kt(int a[100], int n){
    for(int i=1;i<=n;i++){
        a[i]=i;
    }
    a[n+1]=1;
}
int main(){
	cout << "So thanh pho: ";
    int n; cin >> n;
    cout << "Ma tran chi phi:\n";
    int b[n+1][n+1], c[100];
    for(int i=1;i<=n;i++){
    	for(int j=1;j<=n;j++){
    		cin >> b[i][j];
		}
	}
	cout << endl;
    int a[100];
    kt(a,n);
    cout << "X                 f                 fopt\n";
    for(int i=1;i<=n+1;i++){
        cout << a[i];	
	}
	for(int i=1;i<=17-n;i++){
		cout << " ";
	}
	int sum=0;
	for(int i=1;i<=n;i++){
		sum+=b[a[i]][a[i+1]];
	}
	cout << sum;
	for(int i=1;i<=18-scs(sum);i++){
		cout << " ";
	}
	int min1=sum;
	for(int i=1;i<=n+1;i++){
		c[i]=a[i];
	}
	cout << min1 << endl;
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
		if(a[1]==2) x=0;
		else{
			x=1;
			for(int i=1;i<=n+1;i++){
				cout << a[i];
			}
			for(int i=1;i<=17-n;i++){
		        cout << " ";
	        }
	        int sum=0;
	        for(int i=1;i<=n;i++){
		        sum+=b[a[i]][a[i+1]];
	        }
	        cout << sum;
	        for(int i=1;i<=18-scs(sum);i++){
		        cout << " ";
	        }
	        if(sum<min1){
			    min1=sum;
			    for(int i=1;i<=n+1;i++){
		            c[i]=a[i];
	            }
			}
	        cout << min1 << endl;
		}
	}
	cout << endl;
	cout << "Chi phi toi uu: " << min1 << endl;
	cout << "Hanh trinh: ";
	for(int i=1;i<=n+1;i++){
		if(i<=n) cout << c[i] << " -> ";
		else cout << c[i];
	}
}