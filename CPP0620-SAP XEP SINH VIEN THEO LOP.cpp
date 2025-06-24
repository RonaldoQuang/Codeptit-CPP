//Thông tin về mỗi sinh viên gồm:
//Mã sinh viên: dãy ký tự không có khoảng trống (không quá 15). Đảm bảo không trùng nhau.
//Họ và tên: độ dài không quá 100
//Lớp: dãy ký tự không có khoảng trống (không quá 15)
//Email: dãy ký tự không có khoảng trống (không quá 15)
//Hãy nhập danh sách sinh viên và sắp xếp theo lớp tăng dần (thứ tự từ điển)
//Input
//4
//B16DCCN011
//Nguyen Trong Duc Anh
//D16CNPM1
//sv1@stu.ptit.edu.vn
//B15DCCN215
//To Ngoc Hieu
//D15CNPM3
//sv2@stu.ptit.edu.vn
//B15DCKT150
//Nguyen Ngoc Son
//D15CQKT02-B
//sv3@stu.ptit.edu.vn
//B15DCKT199
//Nguyen Trong Tung
//D15CQKT03-B
//sv4@stu.ptit.edu.vn
//Output
//B15DCCN215 To Ngoc Hieu D15CNPM3 sv2@stu.ptit.edu.vn
//B15DCKT150 Nguyen Ngoc Son D15CQKT02-B sv3@stu.ptit.edu.vn
//B15DCKT199 Nguyen Trong Tung D15CQKT03-B sv4@stu.ptit.edu.vn
//B16DCCN011 Nguyen Trong Duc Anh D16CNPM1 sv1@stu.ptit.edu.vn
#include <bits/stdc++.h>
using namespace std;
struct SinhVien{
	string msv,ten,lop,mail;
};
typedef struct SinhVien sv;
void nhap(sv a[1001], int n){
	for(int i=0;i<n;i++){
		cin >> a[i].msv;
		scanf("\n");
		getline(cin,a[i].ten);
		cin >> a[i].lop >> a[i].mail;
	}
}
void sx(sv a[1001], int n){
	for(int i=0;i<n-1;i++){
		int min=i;
		for(int j=i+1;j<n;j++){
			if(a[j].lop<a[min].lop) min=j;
			else if(a[j].lop==a[min].lop){
				if(a[j].msv<a[min].msv) min=j;
			}
			
		}
		sv temp=a[i];
		a[i]=a[min];
		a[min]=temp;
	}
}
void in(sv a[1001], int n){
	for(int i=0;i<n;i++){
		cout << a[i].msv << " " << a[i].ten << " " << a[i].lop << " " << a[i].mail << endl;
	}
}
int main(){
	int n; cin >> n;
	sv a[1001];
	nhap(a,n);
	sx(a,n);
	in(a,n);
}
