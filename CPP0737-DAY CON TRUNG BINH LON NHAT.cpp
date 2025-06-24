//Cho mảng A[] gồm n số và số nguyên dương k. 
//Hãy tìm dãy con liên tục độ dài k có giá trị trung bình các phần tử lớn nhất. 
//Ví dụ với A[] = { 1, 12, -5, -6, 50, 3} và k = 4 ta có câu trả lời là {12, -5, -6, 50} có trung bình các phần tử lớn nhất là (12-5-6+30)/4=7.75.
//Input
//2
//5 2
//10 4 5 15 20
//4 2
//-12 34 56 7
//Output
//15 20
//34 56
#include <bits/stdc++.h>
using namespace std;
int main() {
	int t; cin >> t;
	while(t--){
		int n,k,x=0; cin >> n >> k;
		int a[n];
		for(int i=0;i<n;i++){
			cin >> a[i];
		}
		int tb=0;
		for(int i=0;i<k;i++){
			tb+=a[i];
		}
		int ln=tb;
		for(int i=1;i<=n-k;i++){
			tb=tb-a[i-1]+a[i+k-1];
			if(tb>ln){
				ln=tb;
				x=i;
			}
		}
		for(int i=x;i<x+k;i++){
			cout << a[i] << " ";
		}
		cout << endl;
	}
}
