//Cho mảng A[] gồm n số được sinh ra ngẫu nhiên. 
//Hãy tìm độ dài dãy tăng dài nhất các phần tử của mảng. 
//Chú ý, dãy con của mảng không nhất thiết là liên tục. 
//Hai phần tử giống nhau của mảng ta chỉ xem là 1 trong độ dài dãy tăng. 
//Ví dụ với mảng A[] = {5, 8, 3, 7, 9, 1}, ta có kết quả là 3.
//Input
//2
//16
//0 8 4 12 2 10 6 14 1 9 5 13 3 11 7 15
//6
//5 8 3 7 9 1
//Output
//6
//3
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
		map<int,int> mp;
		mp[0]=0;
		int m=0;
		for(int i=1;i<n;i++){
			int max1=-1e9;
			for(int j=0;j<i;j++){
				if(a[j]<a[i]&&mp[j]+1>max1){
					max1=mp[j]+1;
					mp[i]=mp[j]+1;
					m=max(m,max1);
				}
			}
		}
		cout << m+1 << endl;
	}
}