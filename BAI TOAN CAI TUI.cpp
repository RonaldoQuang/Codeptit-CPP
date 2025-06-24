//Một nhà thám hiểm cần đem theo một cái túi trọng lượng không quá B. 
//Có N đồ vật cần đem theo. 
//Đồ vật thứ i có trọng lượng ai, có giá trị sử dụng ci(i = 1, 2, ..., N; ai, ci thuộc Z+). 
//Hãy tìm cách đưa đồ vật vào túi cho nhà thám hiểm sao cho tổng giá trị sử dụng các đồ vật trong túi là lớn nhất.
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
	for(int i=0;i<n;i++){
		a[i]=0;
	}
}
int sinh(int a[100], int n){
	int i=n-1;
	while(i>=0&&a[i]==1){
		a[i]=0;
		--i;
	}
	if(i==-1) return 0;
	else{
		a[i]=1;
		return 1;
	}
}
int main(){
	cout << "So loai do vat: ";
	int n; cin >> n;
	cout << "Trong luong tui: ";
	int b; cin >> b;
	cout << "Vector trong luong: ";
	int x[n];
	for(int i=0;i<n;i++) cin >> x[i];
	cout << "Vector gia tri su dung: ";
	int y[n];
	for(int i=0;i<n;i++) cin >> y[i];
	cout << endl;
	int array[n], max=-1e9;
	cout << "X                 ";
	cout << "X thuoc D                 ";
	cout << "f                 ";
	cout << "fopt                 \n";
	int a[100];
	int x1=1;
	kt(a,n);
	while(x1){
		int f;
		for(int i=0;i<n;i++){
			cout << a[i];
		}
		for(int i=1;i<=18-n;i++){
			cout << " ";
		}
		int sum=0;
		for(int i=0;i<n;i++){
			sum+=x[i]*a[i];
		}
		if(sum<=b){
			int sum1=0;
			cout << "Thoa man                  ";
			for(int i=0;i<n;i++){
				sum1+=y[i]*a[i];
			}
			f=sum1;
			cout << f;
			for(int i=1;i<=18-scs(f);i++){
				cout << " ";
			}			
			if(f>max){
				max=f;
				for(int i=0;i<n;i++){
					array[i]=a[i];
				}
			}
		}
		else{
			int sum1=0;
			for(int i=0;i<n;i++){
				sum1+=y[i]*a[i];
			}
			f=sum1;
			cout << "Loai                      ";
			cout << f;
			for(int i=1;i<=18-scs(f);i++){
				cout << " ";
			}
		}
		cout << max << endl;
		if(sinh(a,n)) x1=1;
		else x1=0;
	}
	cout << "Ket qua toi uu: " << max << endl;
	cout << "Phuong an toi uu: ";
	for(int i=0;i<n;i++){
		cout << array[i] << " ";
	}
	cout << endl;
}