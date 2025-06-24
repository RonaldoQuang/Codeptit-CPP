//Cho một danh sách tên người và ngày tháng năm sinh.
//Hãy tìm ra người trẻ nhất và người già nhất.
//Input
//5
//Nam 01/10/1991
//An 30/12/1990
//Binh 15/08/1993
//Tam 18/09/1990
//Truong 20/09/1990
//Output
//Binh
//Tam
#include <bits/stdc++.h>
using namespace std;
struct Nguoi{
	string ten,dob;
	int nam=0,thang=0,ngay=0;
};
typedef struct Nguoi Ng;
void nhap(Ng a[100], int n){
	for(int i=0;i<n;i++){
		cin.ignore();
		cin >> a[i].ten;
		cin >> a[i].dob;
		int j=0;
		while(a[i].dob[j]<='9'&&a[i].dob[j]>='0'){
			a[i].ngay=a[i].ngay*10+a[i].dob[j]-'0';
			++j;
		}
		++j;
		while(a[i].dob[j]<='9'&&a[i].dob[j]>='0'){
			a[i].thang=a[i].thang*10+a[i].dob[j]-'0';
			++j;
		}
		++j;
		while(a[i].dob[j]<='9'&&a[i].dob[j]>='0'){
			a[i].nam=a[i].nam*10+a[i].dob[j]-'0';
			++j;
		}
	}
}
int main(){
	int n; cin >> n;
	Ng a[100];
	nhap(a,n);
	int tre=0,gia=0;
	for(int i=1;i<n;i++){
		if(a[i].nam>a[tre].nam){
			tre=i;
		}
		else if(a[i].nam==a[tre].nam){
			if(a[i].thang>a[tre].thang){
				tre=i;
			}
			else if(a[i].thang==a[tre].thang){
				if (a[i].ngay>a[tre].ngay){
					tre=i;
				}
			}
		}
		if(a[i].nam<a[gia].nam){
			gia=i;
		}
		else if(a[i].nam==a[gia].nam){
			if(a[i].thang<a[gia].thang){
				gia=i;
			}
			else if(a[i].thang==a[gia].thang){
				if(a[i].ngay<a[gia].ngay){
					gia=i;
				}
			}
		}
	}
	cout << a[tre].ten << endl << a[gia].ten;
}

