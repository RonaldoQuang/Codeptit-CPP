//Cho mảng A[] gồm n phần tử gồm các số nguyên dương. 
//Mảng A[] được gọi là Bitonic nếu các phần tử của mảng được chia thành hai phần: phần thứ nhất tăng dần, phần thứ hai giảm dần. 
//Mảng A[] được sắp xếp tăng dần cũng là mảng Bitonic khi xem phần thứ hai là rỗng. 
//Tương tự như vậy, mảng A[] được sắp xếp giảm dần cũng là một bitonic. Hãy tìm độ dài dãy con dài nhất của mảng A[] là một Bitonic. 
//Ví dụ với mảng A[] = {1, 11, 2, 10, 4, 5, 2, 1 } ta có kết quả là 6 tương ứng với độ dài dãy con {1, 2, 10, 4, 2, 1}.
//Input
//2
//5
//1 2 5 3 2
//8
//1 11 2 10 4 5 2 1
//Output
//5
//6
#include <bits/stdc++.h>
using namespace std;
int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		int a[n],b[n];
		for(int i=0;i<n;i++){
			cin >> a[i];
		}
		for(int i=0;i<n;i++){
			b[i]=a[n-1-i];
		}
		map<int,int> mp;
		mp[0]=0;
		int m=-1e7;
		for(int i=1;i<n;i++){
			int max1=-1e9;
			for(int j=0;j<i;j++){
				if(a[j]<a[i]&&mp[j]+1>max1){
					max1=mp[j]+1;
					mp[i]=mp[j]+1;
				}
			}
		}
		map<int,int> ma;
		ma[0]=0;
		for(int i=1;i<n;i++){
			int max1=-1e9;
			for(int j=0;j<i;j++){
				if(b[j]<b[i]&&ma[j]+1>max1){
					max1=ma[j]+1;
					ma[i]=ma[j]+1;
				}
			}
		}		
		for(int i=0;i<n;i++){
			m=max(m,mp[i]+ma[n-1-i]+1);
		}
		cout << m << endl;
	}
}