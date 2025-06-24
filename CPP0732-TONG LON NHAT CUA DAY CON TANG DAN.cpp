//Cho mảng A[] gồm n số nguyên dương. 
//Hãy tìm tổng lớn nhất của dãy con tăng dần của dãy số A[]. 
//Ví dụ với A[] = { 1, 101, 2, 3, 100, 4, 5} ta có câu trả lời là 106=1+2+3+100. 
//Với dãy A[] = {10, 5, 4, 3} ta có câu trả lời là 10.
//Input
//2
//7
//1 101 2 3 100 4 5
//8
//1 101 9 2 3 100 4 5
//Output
//106
//110
#include <bits/stdc++.h> 
using namespace std; 
int main(){ 
    int t; cin >>t; 
	while(t--){ 
	    int n; cin >>n; 
		int a[n], b[n]; 
		for(int i=0;i<n;i++){ 
		    cin >>a[i]; 
			b[i]=a[i]; 
		}
		for(int i=0;i<n;i++){ 
		    for(int j=0;j<i;j++){ 
			    if(a[j]<a[i]){ 
				    b[i]=max(a[i]+b[j],b[i]); 
				} 
			} 
		} 
		auto it=max_element(b,b+n); 
		cout << *it << endl; 
	} 
}