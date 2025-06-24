//Cho mảng A[] gồm n phần tử gồm các số âm và dương. 
//Hãy tìm giá trị lớn nhất tích các phần tử của tất cả các dãy con liên tục trong mảng A[]. 
//Ví dụ với mảng A[] = {6, -3, - 10, 0, 2 } ta có kết quả là 180 tương ứng với tích các phần tử của dài dãy con {6, -3, -10}.
//Input
//3
//5
//6 -3 -10 0 2
//6
//2 3 4 5 -1 0 
//10
//8 -2 -2 0 8 0 -6 -8 -6 -1
//Output
//180
//120
//288
#include <bits/stdc++.h>
using namespace std;
int main(){ 
    int t; cin >> t; 
	while(t--){
	    int n; cin >> n;
	    long long a[n];
	    for(int i=0;i<n;i++) cin >> a[i];
	    long long max1=-1e9;
	    for(int i=0;i<n;i++){
	    	long long sum=a[i];
	    	max1=max(max1,sum);
	    	for(int j=i+1;j<n;j++){
	    		sum*=a[j];
	    		max1=max(max1,sum);
			}
		}
		cout << max1 << endl;
    } 
}