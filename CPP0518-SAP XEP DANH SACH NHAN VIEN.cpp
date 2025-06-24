//Một nhân viên làm việc trong công ty được lưu lại các thông tin sau:
//Mã nhân viên: được gán tự động tăng, bắt đầu từ 00001
//Họ tên: Xâu ký tự không quá 40 chữ cái.
//Giới tính: Nam hoặc Nu
//Ngày sinh: đúng theo chuẩn dd/mm/yyyy
//Địa chỉ: Xâu ký tự không quá 100 chữ cái
//Mã số thuế: Dãy số có đúng 10 chữ số
//Ngày ký hợp đồng: đúng theo chuẩn dd/mm/yyyy
//Viết chương trình nhập danh sách nhân viên (không nhập mã), sau đó sắp xếp theo thứ tự ngày sinh từ già nhất đến trẻ nhất và in ra màn hình danh sách nhân viên đã sắp xếp.
//Input
//3
//Nguyen Van A
//Nam
//10/22/1982
//Mo Lao-Ha Dong-Ha Noi
//8333012345
//31/12/2013
//Ly Thi B
//Nu
//10/15/1988
//Mo Lao-Ha Dong-Ha Noi
//8333012346
//22/08/2011
//Hoang Thi C
//Nu
//04/02/1981
//Mo Lao-Ha Dong-Ha Noi
//8333012347
//22/08/2011
//Output
//00003 Hoang Thi C Nu 04/02/1981 Mo Lao-Ha Dong-Ha Noi 8333012347 22/08/2011
//00001 Nguyen Van A Nam 10/22/1982 Mo Lao-Ha Dong-Ha Noi 8333012345 31/12/2013
//00002 Ly Thi B Nu 10/15/1988 Mo Lao-Ha Dong-Ha Noi 8333012346 22/08/2011
//Bài tập này yêu cầu sử dụng hàm main cho sẵn như sau:
//C/C++
//int main(){
//    struct NhanVien ds[50];
//    int N,i;
//    cin >> N;
//    for(i = 0; i < N; i++) nhap(ds[i]);
//    sapxep(ds, N);
//    inds(ds, N);
//    return 0;
//}
#include <bits/stdc++.h>
using namespace std;
struct NhanVien{
	string ten,gt,dob,dc,id,hd;
	int ngay=0,thang=0,nam=0,stt;
};
void nhap(NhanVien &a){
	cin.ignore();
	getline(cin,a.ten);
	cin >> a.gt >> a.dob;
	cin.ignore();
	getline(cin,a.dc); 
	cin >> a.id >> a.hd;
	int j=0;
	while(a.dob[j]<='9'&&a.dob[j]>='0'){
		a.ngay=a.ngay*10+a.dob[j]-'0';
		++j;
	}
	++j;
	while(a.dob[j]<='9'&&a.dob[j]>='0'){
		a.thang=a.thang*10+a.dob[j]-'0';
		++j;
	}
	++j;
	while(a.dob[j]<='9'&&a.dob[j]>='0'){
		a.nam=a.nam*10+a.dob[j]-'0';
		++j;
	}
}
void sapxep(NhanVien ds[50], int N){
	for(int i=0;i<N;i++){
		ds[i].stt=i+1;
	}
	for(int i=0;i<N-1;i++){
		int min=i;
		for(int j=i+1;j<N;j++){
			if(ds[j].nam<ds[min].nam){
			    min=j;
			}
			else if(ds[j].nam==ds[min].nam){
				if(ds[j].ngay<ds[min].ngay){
				    min=j;
				}
				else if(ds[j].ngay==ds[min].ngay){
					if(ds[j].thang<ds[min].thang){
					    min=j;
					}
				}
			}
		}
		NhanVien temp=ds[i];
		ds[i]=ds[min];
		ds[min]=temp;
	}
}
void inds(NhanVien ds[50], int N){
	for(int i=0;i<N;i++){
		if(ds[i].stt<10){
		    cout << "0000" << ds[i].stt << " ";
		}
		else{
		    cout << "000" << ds[i].stt << " ";
		}
		cout << ds[i].ten << " " << ds[i].gt << " " << ds[i].dob << " " << ds[i].dc << " " << ds[i].id << " " << ds[i].hd << endl;
	}
}
int main(){
    struct NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i = 0; i < N; i++) nhap(ds[i]);
    sapxep(ds, N);
    inds(ds, N);
    return 0;
}

