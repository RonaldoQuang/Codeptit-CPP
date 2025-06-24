//Cho số nguyên dương N (2 <= N <= 10^14). 
//Hãy phân tích N thành tích của các thừa số nguyên tố.
//Input
//2
//4
//168
//Output
//2 2

//2 3
//3 1
//7 1
#include <bits/stdc++.h>
using namespace std;
int a[10000001];
vector<long long> v;
void sang(){
    for(long long i=2;i<10000001;i++){
    	a[i]=1;
	}
    a[0]=a[1]=0;
    long long sqr=sqrt(10000000);
    for(long long i=2;i<=sqr;i++){
        if(a[i]){
            for(long long j=i*i;j<=10000000;j+=i){
			    a[j]=0;
			}
        }
    }
    for(int i=2;i<=10000000;i++){
        if(a[i]) v.push_back(i);
    }
}
int main(){
    int t; cin >> t;
    sang();
    while(t--){
        long long n; cin >> n;
        map<long long,long long> mp;
        for(auto x:v){
            if(1ll*x*x>n) break;
            if(n%x==0){
                while(n%x==0){
                    mp[x]++;
                    n/=x;
                }
            }
        }
        for(auto x:mp){
        	cout << x.first << " " << x.second << endl;
		}
        if(n>1) cout << n << " 1\n";
        cout << endl;
    }
}