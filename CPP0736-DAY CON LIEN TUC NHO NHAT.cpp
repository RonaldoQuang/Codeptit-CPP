//Cho mảng A[] gồm n số nguyên và số X. 
//Hãy tìm độ dài dãy con liên tục nhỏ nhất có tổng lớn hơn X. 
//Ví dụ với A[] = { 1, 4, 45, 6, 0, 19} và X = 51 ta có câu trả lời là 3 tương ứng với dãy con {4, 45, 6}. 
//Với dãy A[] = {1, 10, 5, 2, 7} và X =9 ta có câu trả lời là 1 tương ứng với dãy con {10}. 
//Với dãy A[] = {1, 2, 4}và X=8 ta có câu trả lời là -1.
//Input
//2
//6 51
//1 4 45 6 0 19
//3 8
//1 2 4
//Output
//3
//-1
#include <bits/stdc++.h> 
using namespace std;   
int main(){ 
	int t; cin >> t;
	while(t--){
		long long n, x; cin >> n >> x;
		long long a[n];
		for(int i=0;i<n;i++){
			cin >> a[i];
		}
		int l=0, r=0, nn=1e9;
		long long sum=a[r];
		while(r<n){ 
			if(sum>x){
				while(sum>x&&l<r){
					++l;
					sum-=a[l-1];
				}
				if(sum<=x){
				    nn=min(nn,r-l+2);
				    while(sum<=x){
					    ++r;
					    sum+=a[r];
					}
				}
				else if(l==r){
					nn=min(nn,r-l+1);
					++r;
					sum+=a[r];
				}
				nn=min(nn,r-l+1);
			}
			else{
				++r;
				sum+=a[r];
			}
		}
		if(nn<1e9) cout << nn << endl;
		else cout << "-1\n";
	}
}