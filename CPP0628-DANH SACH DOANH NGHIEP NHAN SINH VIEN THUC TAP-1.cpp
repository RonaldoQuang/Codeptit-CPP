//Để chuẩn bị cho đợt thực tập tốt nghiệp của sinh viên năm cuối, Khoa CNTT1 trao đổi với các doanh nghiệp đối tác và chốt số lượng sinh viên có thể nhận thực tập.
//Hãy sắp xếp các doanh nghiệp theo số lượng sinh viên có thể nhận giảm dần.
//Input
//4
//VIETTEL
//TAP DOAN VIEN THONG QUAN DOI VIETTEL
//40
//FSOFT
//CONG TY TNHH PHAN MEM FPT - FPT SOFTWARE
//300
//VNPT
//TAP DOAN BUU CHINH VIEN THONG VIET NAM
//200
//SUN
//SUN*
//50
//Output
//FSOFT CONG TY TNHH PHAN MEM FPT - FPT SOFTWARE 300
//VNPT TAP DOAN BUU CHINH VIEN THONG VIET NAM 200
//SUN SUN* 50
//VIETTEL TAP DOAN VIEN THONG QUAN DOI VIETTEL 40
#include <bits/stdc++.h>
using namespace std;
struct DoanhNghiep{
	string ma,ten;
	int sl;
};
typedef struct DoanhNghiep dn;
void nhap(dn a[100], int n){
	for(int i=0;i<n;i++){
		cin.ignore();
		getline(cin,a[i].ma);
		getline(cin,a[i].ten);
		cin >> a[i].sl;
	}
}
void sx(dn a[100], int n){
	for(int i=0;i<n-1;i++){
		int min=i;
		for(int j=i+1;j<n;j++){
			if(a[j].sl>a[min].sl) min=j;
			else if(a[j].sl==a[min].sl){
				if(a[j].ma<a[min].ma) min=j;
			}
		}
		dn temp=a[i];
		a[i]=a[min];
		a[min]=temp;
	}
}
int main(){
	int n; cin >> n;
	dn a[100];
	nhap(a,n);
	sx(a,n);
	for(int i=0;i<n;i++){
		cout << a[i].ma << " " << a[i].ten << " " << a[i].sl;
		cout << endl;
	}
}
