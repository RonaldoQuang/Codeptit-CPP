//Cho mảng A[] gồm n số nguyên dương. 
//Mảng A[] được gọi là mảng mục tiêu. 
//Hãy tạo một mảng bắt đầu S[] gồm n phần tử có các phần tử ban đầu được thiết lập là 0. 
//Chỉ được phép thực hiện hai thao tác dưới đây:
//Thao tác 1 (Increament Operation): tăng giá trị của 1 phần tử bất kỳ lên 1 đơn vị.
//Thao tác 2 (Double Operation ): nhân toàn bộ phần tử trong mảng với 2.
//Hãy tìm số các ít nhất để dịch chuyển mảng bắt đầu S[] thành mảng mục tiêu A[]. 
//Ví dụ với A[] = { 16, 16, 16} ta cần thực hiện ít nhất 7 thao tác như sau:
//Sử dụng 3 thao tác Increament để biến : S[0] =1, S[1]=1, S[2]=1.
//Sử dụng 4 thao tác Double để biến : S[0] =16, S[1]=16, S[2]=16.
//Input
//2
//3
//16 16 16
//2 
//2 3
//Output
//7
//4
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
		int dem=0,max1=0;
		for(int i=0;i<n;i++){
			int cnt=0;
			while(a[i]!=0){
				if(a[i]%2==0){
				    ++cnt;
				    a[i]/=2;
			    }
			    else{
				    ++dem;
				    a[i]-=1;
			    }
			}
			max1=max(max1,cnt);
		}		
		cout << max1+dem << endl;
	}
}