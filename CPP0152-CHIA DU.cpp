//Cho hai số nguyên dương a và m. 
//Nhiệm vụ của bạn là tìm x nhỏ nhất trong khoảng [0,m-1] sao cho a * x  ≡ 1( mod m). 
//Ví dụ a = 3, m=11 ta tìm được x = 4 vì 4*3%11=1.
//Input
//2
//3 11
//10 17
//Output
//4
//12
#include <bits/stdc++.h>
using namespace std;
int main(){
    int t; cin >> t;
    while(t--){
    	int a,m,cnt=0; cin >> a >> m;
    	for(int i=1;i<m;i++){
    		if((a*i-1)%m==0){
    			++cnt;
    			cout << i;
    			break;
			}
		}
		if(cnt==0) cout << "-1";
		cout << endl;
    }
}