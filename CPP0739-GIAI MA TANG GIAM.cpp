//Cho mảng A[] chỉ bao gồm các ký tự I hoặc D. 
//Ký tự I được hiểu là tăng (Increasing) ký tự D được hiểu là giảm (Degreeasin). 
//Sử dụng các số từ 1 đến 9, hãy đưa ra số nhỏ nhất được đoán nhận từ mảng A[]. 
//Chú ý, các số không được phép lặp lại. Dưới đây là một số ví dụ mẫu:
//A[] = “I”            : số tăng nhỏ nhất là 12.
//A[] = “D”            : số giảm nhỏ nhất là 21
//A[] =”DD”            : số giảm nhỏ nhất là 321
//A[] = “DDIDDIID”     : số thỏa mãn 321654798
//Input
//4
//I
//D
//DD
//DDIDDIID
//Output
//12
//21
//321
//321654798
#include <bits/stdc++.h>
using namespace std;
void kt(int a[100], int n){
    for(int i=1;i<=n;i++){
        a[i]=i;
    }
}
int main(){
    int t; cin >> t;
    while(t--){
        string s; cin >> s;
        int n=s.size()+1;
        string b="";
        int a[100];
        kt(a,n);
        for(int i=1;i<n;i++){
        	if(a[i]<a[i+1]) b+="I";
			else b+="D";
		}
		if(b==s){
			for(int i=1;i<=n;i++){
				cout << a[i];
			}
		}
		else{
			int x=1;
		    while(x){
		    	b="";
			    int m,z,cnt=0,min=100,dem=0;
			    for(int i=n-1;i>=1;i--){
				    if(a[i]<a[i+1]){
					    m=i;
					    ++cnt;
					    break;
				    }
			    }
			    for(int i=m+1;i<=n;i++){
				    if(a[i]>a[m]&&a[i]<min){
					    min=a[i];
					    z=i;
				    }
			    }
			    int temp=a[m];
			    a[m]=a[z];
			    a[z]=temp;
			    sort(a+m+1,a+n+1);
			    if(cnt==1){
				    for(int i=1;i<n;i++){
					    if(a[i]<a[i+1]) b+="I";
			            else b+="D";
				    }
				    if(b==s){
				    	for(int i=1;i<=n;i++){
				    		cout << a[i];
						}
						break;
					}
					else x=1;
			    }
			    else x=0; 
		    }
		}
		cout << endl;
    }
}
