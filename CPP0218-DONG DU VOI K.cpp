//Cho mảng các số nguyên dương A[] gồm n số. 
//Hãy tìm tất cả các số nguyên dương K sao cho tất cả các phần tử của mảng A[] lấy phần dư với K đều bằng nhau. 
//Ví dụ với mảng A[] = {6, 38, 34} ta tìm được các số K = {1, 2, 4} vì:
//6%1 = 38%1 = 34%1 =0; 6%2 = 38%2 = 34%2 =0; 6%4 = 38%4 = 34%4 =2;
//Input
//2
//3
//6 38 34
//2
//3 2
//Output
//3
//1
#include <bits/stdc++.h>
using namespace std;
int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        int a[n];
        set<int> se;
        for(int i=0;i<n;i++){
            cin >> a[i];
            se.insert(a[i]);
        }
		int b,count=0;
		for(auto x:se){
			++count;
			if(count==2){
				b=x;
				break;
			}
		}       
        int dem=0;
        if(se.size()==1) cout << "0" << endl;
        else{
            for(int i=1;i<b;i++){
                int cnt=0;
                for(int j=1;j<n;j++){
                    if(a[j]%i!=a[j-1]%i){
                        ++cnt;
                        break;
                    }
                }
                if(cnt==0) ++dem;
            }
            cout << dem << endl;
        }
    }
}
