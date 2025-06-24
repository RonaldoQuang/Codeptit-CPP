//Một số được gọi là “cân bằng chẵn lẻ” nếu số chữ số chẵn và số chữ số lẻ là bằng nhau. 
//Tất nhiên khi đó số chữ số của nó phải là chẵn.
//Cho số N là một số chẵn (1<N<7). Hãy liệt kê các số cân bằng chẵn lẻ có N chữ số. Mỗi dòng ghi ra 10 số thỏa mãn.
//Input
//2
//Output
//10 12 14 16 18 21 23 25 27 29
//30 32 34 36 38 41 43 45 47 49
//50 52 54 56 58 61 63 65 67 69
//70 72 74 76 78 81 83 85 87 89
//90 92 94 96 98
#include <bits/stdc++.h>
using namespace std;
int ss(int n){
	int chan=0, le=0;
	while(n!=0){
		if((n%10)%2==0) ++chan;
		else ++le;
		n/=10;
	}
	if(chan==le) return 1;
	else return 0;
}
int main(){
	int n, cnt=0; cin >> n;
	for(int i=pow(10,n-1);i<pow(10,n);i++){
		if(ss(i)==1){
			++cnt;
			cout << i << " ";
			if(cnt%10==0){
				cout << endl;
			}
		}
	}
}