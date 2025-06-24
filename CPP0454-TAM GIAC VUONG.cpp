//Theo định lý Pytago, ta đã biết một bộ 3 số (a, b, c) thỏa mãn  a2 + b2 = c2 thì đó là ba cạnh của một tam giác vuông.
//Cho dãy số A[] gồm có N phần tử. 
//Nhiệm vụ của bạn là kiểm tra xem có tồn tại bộ ba số thỏa mãn là ba cạnh của tam giác vuông hay không.
//Input
//2
//5
//3 1 4 6 5
//3
//1 1 1
//Output
//YES
//NO
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
typedef long long int ll;
int test(vector<ll> m,int n){
    for(int i=n-1;i>=2;i--) {
        int l=0;
        int r=i-1;
        while(l<r) {
			if(m[l]+m[r]==m[i])
				return 1;
            (m[l]+ m[r]<m[i]) ? l++ : r--;
        }
    }
	return 0;
}
int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		vector<ll> m(n);
		for(int i=0;i<n; ++) cin >> m[i];
		sort(m.begin(),m.end());
		for(int i=0;i<n;i++) m[i]*=m[i];
		if(test(m,n)) cout << "YES\n";
		else
			cout << "NO\n";
	}
}