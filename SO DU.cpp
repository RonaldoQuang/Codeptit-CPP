//Cho hai số nguyên n và k. 
//Yêu cầu tìm tất cả số dư của n khi lần lượt cho các số từ 1 đến k có khác nhau hay không. 
//Tức là không có cặp số (i, j) nào thỏa mãn : 
//1  ≤  i  <  j  ≤  k.
//n mod i = n mod j.
//Input
//4 4
//5 3
//Output
//No
//Yes
//- Giải thích test 1 : 4 chia cho 1 và chia cho 4 có cùng số dư.
//- Giải thích test 2 : 5 mod 1 = 0, 5 mod 2 = 1, 5 mod 3 = 2.
#include <bits/stdc++.h>
using namespace std;
int main(){
    long long n; cin >> n;
    int k, cnt=0; cin >> k;
    map<int,int> mp;
    for(int i=1;i<=k;i++){
    	mp[n%i]++;
    	if(mp[n%i]==2){
    		++cnt;
    		break;
		}
	}
	if(cnt==1) cout << "No";
	else cout << "Yes";
}
