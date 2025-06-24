//Cho số tự nhiên N. 
//Nhiệm vụ của bạn là hãy kiểm tra N có phải là số Smith hay không. 
//Một số được gọi là số Smith nếu N không phải là số nguyên tố và có tổng các chữ số của N bằng tổng các chữ số của các ước số nguyên tố của N. 
//Ví dụ N = 666 có các ước số nguyên tố là 2, 3, 3, 37 có tổng các chữ số là 18.
//Input
//2
//4
//666
//Output
//YES
//YES
#include <bits/stdc++.h>
using namespace std;
int tong(int n){
	int sum=0;
	while(n!=0){
		sum+=n%10;
		n/=10;
	}
	return sum;
}
int nt(int n){
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0) return 0;
	}
	return n>1;
}
int main(){
    int t; cin >> t;
    while(t--){
        int n, sum=0; cin >> n;
        int x=n;
        if(nt(n)) cout << "NO";
        else{
        	for(int i=2;i<=sqrt(n);i++){
        	    while(n%i==0){
        		    sum+=tong(i);
        	        n/=i;
			    }
		    }
		    if(n==1){
			    if(sum==tong(x)) cout << "YES";
			    else cout << "NO";
		    }
		    else{
			    if(sum+tong(n)==tong(x)) cout << "YES";
			    else cout << "NO";
		    }
		}
		cout << endl;
    }
}