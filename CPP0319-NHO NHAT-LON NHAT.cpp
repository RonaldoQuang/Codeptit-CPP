//Cho số tự nhiên m và số nguyên s không âm. 
//Nhiệm vụ của bạn là tìm số bé nhất và lớn nhất có m chữ số và tổng chữ số bằng s.
//Input
//Dòng đầu gồm 2 số m và s (1 ≤ m ≤ 100, 0 ≤ s ≤ 900).
//Output
//In ra kết quả của bài toán.
//Số đầu tiên là số bé nhất, số thứ hai là số lớn nhất.
//Nếu không có đáp án in ra “-1 -1”.
//Example
//Input:
//2 15
//Output:
//69 96
#include <bits/stdc++.h>
using namespace std;
int main(){
	int m,s; cin >> m >> s;
	int a=s/9;
	if(s>9*m||s==0){
		cout << "-1 -1";
	}
	else{
		if(s%9==0){
		    if(m==a){
			    int t=2;
			    while(t--){
				    for(int i=1;i<=a;i++){
					    cout << "9";
				    }
				    cout << " ";
			    }
		    }
		    else{
			    cout << "1";
			    for(int i=1;i<=m-(a-1)-2;i++){
				    cout << "0";
			    }
			    cout << "8";
			    for(int i=1;i<a;i++){
				    cout << "9";
			    }
			    cout << " ";
			    for(int i=1;i<=a;i++){
				    cout << "9";
			    }
			    for(int i=1;i<=m-a;i++){
				    cout << "0";
			    }
		    }
	    }
	    else{
		    if(m>a+1){
			    cout << "1";
			    for(int i=1;i<=m-2-a;i++){
				    cout << "0";
			    }
			    cout << s-a*9-1;
			    for(int i=1;i<=a;i++){
				    cout << "9";
			    }
			    cout << " ";
			    for(int i=1;i<=a;i++){
				    cout << "9";
			    }
			    cout << s-a*9;
			    for(int i=1;i<=m-a-1;i++){
				    cout << "0";
			    }
		    }
		    else{
		    	cout << s-a*9;
		    	for(int i=1;i<=a;i++){
		    		cout << "9";
				}
				cout << " ";
				for(int i=1;i<=a;i++){
		    		cout << "9";
				}
				cout << s-a*9;
			}
	    }
	}
}