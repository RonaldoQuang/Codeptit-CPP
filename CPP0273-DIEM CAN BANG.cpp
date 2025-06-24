//Cho dãy số A[] gồm có N phần tử nguyên dương. 
//Phần tử thứ i được gọi là điểm cân bằng của dãy số nếu như tổng các số bên trái bằng tổng các số bên phải của nó.
//Nhiệm vụ của bạn là điểm cân bằng đầu tiên của dãy A[] cho trước. Nếu không có đáp án, in ra -1.
//Input
//2
//7
//-7 1 5 2 -4 3 0
//5
//1 2 3 4 5
//Output
//4
//-1
#include <bits/stdc++.h>
using namespace std;
int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		int a[n];
		int sum2=0;
		for(int i=0;i<n;i++){
			cin >> a[i];
			if(i>=2){
				sum2+=a[i];
			}
		}
		int cnt=0,sum1=a[0];
		for(int i=1;i<n-1;i++){
			if(sum1==sum2){
				++cnt;
				cout << i+1 << endl;
				break;
			}
			else{
				sum1+=a[i];
				sum2-=a[i+1];
			}
		}
		if(cnt==0) cout << "-1" << endl;
	}
}