//Cho số tự nhiên N. 
//Nhiệm vụ của bạn là hãy kiểm tra N có phải là số hoàn hảo hay không. 
//Một số N được gọi là số hoàn hảo nếu tổng các ước số của nó bằng chính nó. 
//Ví dụ N = 6=1 + 2 + 3 là số hoàn hảo.
//Input
//2
//6
//21
//Output
//1
//0
#include <bits/stdc++.h>
using namespace std;
int main(){ 
    int t; cin >> t; 
	while(t--){ 
	    long long n; cin >> n; 
	    if(n==6||n==28||n==496||n==8128||n==33550336||n==8589869056||n==137438691328||n==2305843008139952128){ 
	        cout << "1" << endl; 
	    } 
	    else{ 
	        cout << "0" << endl; 
	    } 
	}  
}
