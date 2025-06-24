//Cho số tự nhiên N và số K. 
//Hãy đưa ta các tổ hợp chập K của 1, 2, .., N.
//Input
//1
//5 3
//123 124 125 134 134 145 234 235 245 345
#include <bits/stdc++.h>
using namespace std;
void kt(int a[100], int k){
    for(int i=1;i<=k;i++){
        a[i]=i;
    }
}
int main(){
    int t; cin >> t;
    while(t--){
        int n,k; cin >> n >> k;
        int a[100];
        int x=1;
        kt(a,k);
        for(int i=1;i<=k;i++){
            cout << a[i];
        }
        cout << " ";
        int i=k;
        while(i>=1){
            if(a[i]<n-(k-i)){
        	    a[i]+=1;
                for(int j=i+1;j<=k;j++){
                    a[j]=a[j-1]+1;
                }
                for(int j=1;j<=k;j++){
                	cout << a[j];
				}
				cout << " ";
				i=k;
            }
            else{
                --i;
            }
        }
        cout << endl;
    }
}