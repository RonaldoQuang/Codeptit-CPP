//Cho dữ liệu bảng điểm thành phần trong đó thông tin của mỗi sinh viên gồm:
//Mã sinh viên (xâu ký tự độ dài không quá 15, không có khoảng trống)
//Tên sinh viên (xâu ký tự, độ dài không quá 50)
//Lớp (xâu ký tự độ dài không quá 15, không có khoảng trống)
//Điểm 1, Điểm 2, Điểm 3: mỗi điểm là một số thực (hệ 10)
//Hãy sắp xếp lại bảng điểm thành phần theo mã sinh viên (thứ tự từ điển tăng dần).
//Input
//3
//B20DCCN999
//Nguyen Van An
//D20CQCN04-B
//10.0
//9.0
//8.0
//B20DCAT001
//Le Van Nam
//D20CQAT02-B
//6.0
//6.0
//4.0
//B20DCCN111
//Tran Hoa Binh
//D20CQCN04-B
//9.0
//5.0
//6.0
//Output
//1 B20DCAT001 Le Van Nam D20CQAT02-B 6.0 6.0 4.0
//2 B20DCCN111 Tran Hoa Binh D20CQCN04-B 9.0 5.0 6.0
//3 B20DCCN999 Nguyen Van An D20CQCN04-B 10.0 9.0 8.0
//Bài tập này yêu cầu sử dụng hàm main cho sẵn như sau:
//C/C++
//int main(){
//    int n;
//    cin >> n;
//    struct SinhVien *ds = new SinhVien[n];
//    for(int i = 0; i < n; i++) {
//    	nhap(ds[i]);
//	  }
//	  sap_xep(ds, n);
//    in_ds(ds,n);
//    return 0;
//}
#include <bits/stdc++.h>
using namespace std;
struct SinhVien{
	string msv,ten,lop;
	float mon1,mon2,mon3;
};
void nhap(SinhVien &a){
	cin >> a.msv;
	cin.ignore();
	getline(cin,a.ten);
	cin >> a.lop;
	cin >> a.mon1 >> a.mon2 >> a.mon3;
}
void sap_xep(SinhVien ds[105], int n){
	for(int i=0;i<n-1;i++){
		int min=i;
		for(int j=i+1;j<n;j++){
			if(ds[j].msv<ds[min].msv) min=j;
		}
		SinhVien temp=ds[i];
		ds[i]=ds[min];
		ds[min]=temp;
	}
}
void in_ds(SinhVien ds[105], int n){
	for(int i=0;i<n;i++){
		cout << i+1 << " " << ds[i].msv << " " << ds[i].ten << " " << ds[i].lop << " ";
		cout << fixed << setprecision(1) << ds[i].mon1 << " ";
		cout << fixed << setprecision(1) << ds[i].mon2 << " ";
		cout << fixed << setprecision(1) << ds[i].mon3 << " ";
		cout << endl;
	}
}
int main(){
    int n;
    cin >> n;
    struct SinhVien *ds = new SinhVien[n];
    for(int i = 0; i < n; i++) {
    	nhap(ds[i]);
	}
	sap_xep(ds, n);
    in_ds(ds,n);
    return 0;
}

