//Sinh viên CNTT PTIT đến năm cuối được cử đi thực tập tại các doanh nghiệp.
//Thông tin của mỗi sinh viên trong danh sách thực tập bao gồm:
//Số thứ tự: là 1 số nguyên tự động tăng
//Mã sinh viên: là một xâu ký tự không có khoảng trống, không quá 12 ký tự
//Họ tên: là một xâu ký tự họ tên đã chuẩn hóa, không quá 50 ký tự
//Lớp: là một xâu ký tự không có khoảng trống, không quá 10 ký tự
//Email: là một địa chỉ email, không có khoảng trống, không quá 100 ký tự
//Doanh nghiệp: tên viết tắt của doanh nghiệp, không có khoảng trống, không quá 15 ký tự.
//Hãy viết chương trình đọc vào danh sách thực tập sau đó in danh sách cho từng doanh nghiệp theo yêu cầu.
//Input
//6
//B17DCCN016 
//Le Khac Tuan Anh 
//D17HTTT2   
//test1@stu.ptit.edu.vn
//VIETTEL
//B17DCCN107 
//Dao Thanh Dat    
//D17CNPM5   
//test2@stu.ptit.edu.vn
//FPT
//B17DCAT092 
//Cao Danh Huy     
//D17CQAT04-B
//test3@stu.ptit.edu.vn
//FPT
//B17DCCN388 
//Cao Sy Hai Long  
//D17CNPM2   
//test4@stu.ptit.edu.vn
//VNPT
//B17DCCN461 
//Dinh Quang Nghia 
//D17CNPM2   
//test5@stu.ptit.edu.vn
//FPT
//B17DCCN554 
//Bui Xuan Thai    
//D17CNPM1   
//test6@stu.ptit.edu.vn
//GAMELOFT
//1
//FPT
//Output
//3 B17DCAT092 Cao Danh Huy D17CQAT04-B test3@stu.ptit.edu.vn FPT
//2 B17DCCN107 Dao Thanh Dat D17CNPM5 test2@stu.ptit.edu.vn FPT
//5 B17DCCN461 Dinh Quang Nghia D17CNPM2 test5@stu.ptit.edu.vn FPT
#include <bits/stdc++.h>
using namespace std;
struct SinhVien{
	string msv,ten,lop,mail,dn;
	int stt;
};
typedef struct SinhVien sv;
void nhap(sv a[100], int n){
	for(int i=0;i<n;i++){
		a[i].stt=i+1;
		cin >> a[i].msv;
		cin.ignore();
		getline(cin,a[i].ten);
		cin >> a[i].lop >> a[i].mail >> a[i].dn;
	}
}
void in(sv a){
	cout << a.stt << " " << a.msv << " " << a.ten << " ";
	cout << a.lop << " " << a.mail << " " << a.dn << endl;
}
int main(){
	int n; cin >> n;
	sv a[100];
	nhap(a,n);
	int t; cin >> t;
	while(t--){
		string s; cin >> s;
		set<string> se;
		for(int i=0;i<n;i++){
			if(a[i].dn==s){
				se.insert(a[i].ten);
			}
		}
		for(auto x:se){
			for(int i=0;i<n;i++){
				if(a[i].ten==x){
					in(a[i]);
				}
			}
		}
	}
}

