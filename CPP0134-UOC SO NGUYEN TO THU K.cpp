//Cho số tự nhiên N. 
//Nhiệm vụ của bạn là hãy đưa ra ước số nguyên tố thứ k của N. 
//Đưa ra -1 nếu không tồn tại ước số thứ k của N. 
//Ví dụ N = 225, k =2 ta có kết quả là 3 vì 225 = 3×3×5×5. 
//Với N = 81, k = 5 ta có kết quả -1 vì 81 = 3×3×3×3.
//Input
//2
//225 2
//81 5
//Output
//3
//-1
#include <bits/stdc++.h>
using namespace std;
int main(){
	int t; cin >> t;
	while(t--){
	    int n,k,cnt=0; cin >> n >> k;
	    for(int i=2;i<=sqrt(n);i++){
		    while(n%i==0){
			    ++cnt;
			    n/=i;
			    if(cnt==k){
			    	cout << i << endl;
			    	break;
				}
		    }
		    if(cnt==k) break;
	    }
		if(n!=1&&cnt==k-1) cout << n;
		if(n!=1&&cnt+1<k) cout << "-1";
		if(n==1&&cnt<k) cout << "-1";	    
	    cout << endl;
	}
}