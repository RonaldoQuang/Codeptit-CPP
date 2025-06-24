//Tí được mẹ cho tiền để đi mua kem. 
//Tại cửa hàng, có N loại kem, mỗi loại có mức giá là A[i] và số lượng mua tối đa là B[i] cái.
//Tí thì rất thích ăn kem. 
//Với cậu, số lượng hơn chất lượng, kem loại nào cũng ngon như nhau cả. 
//Các bạn hãy xác định xem Tí có thể mua được M chiếc kem với số tiền ít nhất bằng bao nhiêu?
//Input
//2 5
//4 9
//2 4

//3 5
//2 3
//4 6
//1 2
//Output
//12

//8
#include <bits/stdc++.h>
using namespace std;
int main(){
	int n,m; cin >> n >> m;
	int a[n],b[n];
	multimap<int,int> mp;
	for(int i=0;i<n;i++){
		cin >> a[i] >> b[i];
		mp.insert({a[i],b[i]});
	}
	int sum=m;
	long long gia=0;
	for(auto x:mp){
		if(x.second<sum){
			sum-=x.second;
			gia+=(long long) x.first*x.second;
		}
		else{
			gia+=(long long) x.first*sum;
			sum=0;
		}
		if(sum==0) break;
	}
	cout << gia;
}