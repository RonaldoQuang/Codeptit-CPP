//Cho mảng các số nhị phân A1[] và A2[] gồm n 0, 1. 
//Hãy tìm khoảng chung dài nhất thỏa mãn: j ≥i và span(i, j) = A1[i] + A1[i+1] + …+A1[j] = A2[i] + A2[i+1] + …+A2[j]. 
//Ví dụ với A1[] = {0, 1, 0, 0, 0, 0}, A2[] = {1, 0, 1, 0, 0, 1} ta có kết quả là 4 tương ứng với A1[1]+ A1[2]+ A1[3]+ A1[4] = A2[1]+ A2[2]+ A2[3]+ A2[4] = 1.
//Input
//1
//6
//0 1 0 0 0 0
//1 0 1 0 0 1
//Output
//4
#include <bits/stdc++.h>
using namespace std;
int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		int a[n],b[n];
		int sum1=0,sum2=0;
		for(int i=0;i<n;i++){
			cin >> a[i];
			sum1+=a[i];
		}
		for(int i=0;i<n;i++){
			cin >> b[i];
			sum2+=b[i];
		}
		int dn=-1e9;
		int suma=0,sumb=0;
		for(int i=0;i<n;i++){			
			if(i>0) suma+=a[i-1],sumb+=b[i-1];
			int sumA=sum1-suma, sumB=sum2-sumb;
			for(int j=n-1;j>=i;j--){
				if(sumA==sumB){
					if(j-i+1>dn) dn=j-i+1;
					break;
				}
				else{
					sumA-=a[j];
					sumB-=b[j];
				}
			}
		}
		cout << dn << endl;
	}
}