//Tuyến đường ven biển của thành phố Highland có N chiếc đèn. 
//Không may cơn bão vừa rồi đã làm hỏng B chiếc đèn.
//Để khắc phục sự cố và nhanh chóng khôi phục lại hoạt động du lịch, chính quyền thành phố đã quyết định sửa tạm thời một số đèn đường bị hỏng sao cho có ít nhất một khu vực có K chiếc đèn liên tiếp hoạt động.
//Các bạn hãy xác định xem số đèn đường cần phải sữa chữa ít nhất là bao nhiêu?
//Input
//10 6 5
//2
//10
//1
//5
//9
//Output
//1
#include <bits/stdc++.h>
using namespace std;
int main(){
	int n, k, b; cin >> n >> k >> b;
	int a[n], cnt=0, min=1e9;
	for(int i=0;i<n;i++){
		a[i]=1;
	}
	while(b--){
		int x; cin >> x;
		a[x-1]=0;
	}
	for(int i=1;i<=n-k;i++){
		for(int j=i;j<i+k;j++){
			if(a[j]==0) ++cnt;
		}
		if(cnt<min) min=cnt;
	        cnt=0;
	}
	cout << min; 
}
