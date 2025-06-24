//Giá trị độ đo thời gian được biểu diễn bởi ba thành phần: giờ, phút, giây.
//Cho N giá trị thời gian, hãy sắp xếp danh sách theo thứ tự tăng dần.
//Input
//3
//11 20 20
//14 20 14
//11 15 12
//Output
//11 15 12
//11 20 20
//14 20 14
#include <bits/stdc++.h>
using namespace std;
struct ThoiGian{
	int gio,phut,giay;
};
typedef struct ThoiGian Tg;
void nhap(Tg a[5001], int n){
	for(int i=0;i<n;i++){
		cin >> a[i].gio >> a[i].phut >> a[i].giay;
	}
}
void sx(Tg a[5001], int n){
	for(int i=0;i<n-1;i++){
		int min=i;
		for(int j=i+1;j<n;j++){
			if(a[j].gio<a[min].gio){
				min=j;
			}
			else if(a[j].gio==a[min].gio){
				if(a[j].phut<a[min].phut){
				    min=j;
			    }
			    else if(a[j].phut==a[min].phut){
				    if(a[j].giay<a[min].giay){
				    	min=j;
					}
			    }
			}
		}
		Tg temp=a[i];
		a[i]=a[min];
		a[min]=temp;
	}
}
int main(){
	int n; cin >> n;
	Tg a[5001];
	nhap(a,n);
	sx(a,n);
	for(int i=0;i<n;i++){
		cout << a[i].gio << " " << a[i].phut << " " << a[i].giay << endl;
	}
}

