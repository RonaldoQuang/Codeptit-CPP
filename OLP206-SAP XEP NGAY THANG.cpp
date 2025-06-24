//Cho N xâu kí tự có định dạng ngày/tháng/năm, ví dụ như 20/11/2024 hay 2/2/2000. 
//Nhiệm vụ của bạn là hãy chuẩn hóa xâu theo định dạng ngày, tháng có đủ 2 chữ số, rồi sắp xếp các xâu theo thứ tự tăng dần.
//Input
//4
//1/1/2024
//30/1/2024
//31/1/2024
//1/11/2024
//Output
//01/01/2024
//30/01/2024
//31/01/2024
//01/11/2024
#include <bits/stdc++.h>
using namespace std;
bool cmp(string a, string b){
    if(a.substr(6,4)!=b.substr(6,4)) return a.substr(6,4)<b.substr(6,4);
	else if(a.substr(3,2)!=b.substr(3,2)) return a.substr(3,2)<b.substr(3,2);
	else return a.substr(0,2)<b.substr(0,2);	
}
int main(){
	int n; cin >> n;
	string a[n];
	for(int i=0;i<n;i++){
		cin >> a[i];
		if(a[i].substr(2,1)!="/") a[i].insert(0,"0");
		if(a[i].substr(5,1)!="/") a[i].insert(3,"0");
	}
	sort(a,a+n,cmp);
	for(int i=0;i<n;i++){
		cout << a[i] << endl;
	}
}