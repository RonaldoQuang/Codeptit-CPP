//Cho mảng A[] gồm n phần tử. 
//Nhiệm vụ của bạn là tìm giá trị nhỏ nhất lớn hơn A[i] (i=0, 1, 2,.., n-1). 
//Đưa ra ‘_’ nếu A[i] không có phần tử nhỏ hơn nó. 
//Ví dụ với mảng A[] = {13, 6, 7, 12}, ta có kết quả là { _ , 7 . 12, 13}. 
//Input
//2
//9
//6 3 9 8 10 2 1 15 7
//4
//13 6 7 12
//Output
//7 6 10 9 15 3 2 _ 8
//_ 7 12 13
#include <bits/stdc++.h>
using namespace std;
int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		int a[n],b[n];
		for(int i=0;i<n;i++){
			cin >> a[i];
			b[i]=a[i];
		}
		sort(b,b+n);		
		for(int i=0;i<n;i++){
			auto it=upper_bound(b,b+n,a[i]);
			if(it==b+n) cout << "_ ";
			else cout << *it << " "; 
		}
		cout << endl;
	}
}
