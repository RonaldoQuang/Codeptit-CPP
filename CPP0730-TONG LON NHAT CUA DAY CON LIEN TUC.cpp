//Cho mảng A[] gồm n phần tử. 
//Nhiệm vụ của bạn là tìm tổng lớn nhất các dãy con liên tục của mảng A[]. 
//Ví dụ với A[] = { -2, -3, 4, -1, -2, 1, 5, -3} ta có câu trả lời là 7 tương ứng với tổng lớn nhất của dãy con liên tục {4, -1, -2, 1, 5}. 
//Input
//2
//5
//1 2 3 -2 5
//4
//-1 -2 -3 -4
//Output
//9
//-1
#include <bits/stdc++.h>
using namespace std;
int main() {
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		int a[n];
		int cnt=0;
		for(int i=0;i<n;i++) {
			cin >> a[i];
			if(a[i]>0) ++cnt;
		}
		if(cnt==0){
			auto it=max_element(a,a+n);
			cout << *it << endl;
		}
		else{
			long long s=0, max=-1e9;
			for(int i=0;i<n;i++){
				s+=a[i];
				if(s>max) max=s;
				if(s<0) s=0;
			}
			cout << max << endl;
		}

	}
}