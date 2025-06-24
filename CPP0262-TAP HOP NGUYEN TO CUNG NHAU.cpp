//Cho hai số tự nhiên n, m. 
//Nhiệm vụ của bạn là xác định xem có thể chia các số từ 1 đến n thành hai tập 
//Sao cho giá trị tuyệt đối của hiệu hai tập là m và tổng các phần tử của cả hai tập là các số đồng nguyên tố (co-prime : nguyên tố cùng nhau) hay không? 
//Ví dụ n =5, m = 7 ta có kết quả là Yes vì ta chia thành 2 tập {1, 2, 3, 5} và 4 có giá trị tuyệt đối của hiệu hai tập là 7 và là các số nguyên tố cùng nhau. 
//Với n=6, m=3 ta có câu trả lời là No vì ta có thể tìm ra hai tập {1, 2, 4, 5} và {3, 6} có trị tuyệt đối của hiệu là 3 tuy nhiên cặp 12=1+2+4+5 và 9=3 + 6 không là đồng nguyên tố.
//Input
//2
//5
//7
//Output
//Yes
//No
#include <bits/stdc++.h>
using namespace std;
int main(){
	int t; cin >> t;
	while(t--){
		long long n, m; cin >> n >> m;
		long long sum=(n+1)*n/2;
		long long x=(sum+m)/2, y=(sum-m)/2;
		if(__gcd(x,y)==1&&(sum+m)%2==0) cout << "Yes\n";
		else cout << "No\n";
	}
}