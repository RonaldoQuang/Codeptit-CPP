//Cho mảng A[] gồm n phần tử và một câu hỏi Q. 
//Mỗi câu hỏi Q là bộ đôi hai số L và R. 
//Nhiệm vụ của bạn là xác định xem dãy con của A[] trong khoảng [L, R] có tạo nên một dãy Mountain hay không ? 
//Dãy Mountain là dãy được chia thành hai phần : phần thứ nhất tăng phần thứ hai giảm. 
//Ví dụ với mảng A[] = {2, 3, 2, 4, 4, 6, 3, 2}, các câu hỏi Q: [0, 2], [2, 7], [2, 3], [1, 3] ta sẽ có các câu trả lời : Yes, Yes, Yes, No tương ứng với các dãy Mountain [2, 3, 2], [2, 4, 4, 6, 3, 2], [2, 4], [3, 2, 4].
//Input
//2
//8
//2 3 2 4 4 6 3 2
//0 2
//8
//2 3 2 4 4 6 3 2
//1 3
//Output
//Yes
//No
#include <bits/stdc++.h>
using namespace std;
int vt(int a[], int x, int b, int c){
	for(int i=x;i<=b;i++){
		if(a[i]==c){
			return i;
			break;
		}
	}
}
int main(){
	int t; cin >> t;
	while(t--){
		int n,cnt=0; cin >> n;
		int a[n];
		for(int i=0;i<n;i++){
			cin >> a[i];
		}
		int l, r; cin >> l >> r;
		auto it=max_element(a+l,a+r+1);
		if(it==a+r){
			for(int i=l;i<r;i++){
				if(a[i]>a[i+1]){
					++cnt;
					break;
				}
			}
		}
		else if(it==a+l){
			for(int i=l;i<r;i++){
				if(a[i]<a[i+1]){
					++cnt;
				}
			}
		}
		else{
			for(int i=l;i<vt(a,l,r,*it);i++){
				if(a[i]>a[i+1]){
					++cnt;
					break;
				}
			}
			if(cnt==0){
				for(int i=vt(a,l,r,*it);i<r;i++){
					if(a[i]<a[i+1]){
						++cnt;
						break;
					}
				}
			}
		}
		if(cnt==0) cout << "Yes\n";
		else cout << "No\n";
	}
}