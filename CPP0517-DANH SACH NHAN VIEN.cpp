//Một nhân viên làm việc trong công ty được lưu lại các thông tin sau:
//Mã nhân viên: được gán tự động tăng, bắt đầu từ 00001
//Họ tên: Xâu ký tự không quá 40 chữ cái.
//Giới tính: Nam hoặc Nu
//Ngày sinh: đúng theo chuẩn dd/mm/yyyy
//Địa chỉ: Xâu ký tự không quá 100 chữ cái
//Mã số thuế: Dãy số có đúng 10 chữ số
//Ngày ký hợp đồng: đúng theo chuẩn dd/mm/yyyy
//Viết chương trình nhập danh sách nhân viên (không nhập mã) và in ra màn hình danh sách nhân viên vừa nhập.
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
//00001 Nguyen Van A Nam 10/22/1982 Mo Lao-Ha Dong-Ha Noi 8333012345 31/12/2013
//00002 Ly Thi B Nu 10/15/1988 Mo Lao-Ha Dong-Ha Noi 8333012346 22/08/2011
//00003 Hoang Thi C Nu 04/02/1981 Mo Lao-Ha Dong-Ha Noi 8333012347 22/08/2011
//Bài tập này yêu cầu sử dụng hàm main cho sẵn như sau:
//C/C++
//int main(){
//    struct NhanVien ds[50];
//    int N,i;
//    cin >> N;
//    for(i = 0; i < N; i++) nhap(ds[i]);
//    inds(ds,N);
//    return 0;
//}
#include <bits/stdc++.h>
using namespace std;
struct NhanVien{
    string id, name, gender, dob, address, tax, date;
};
string STT(int i){
    string r=to_string(i);
    while(r.length()<5)
        r='0'+ r;
    return r;
}
void nhap(NhanVien &a){
    scanf("\n");
    getline(cin, a.name);
    getline(cin, a.gender);
    getline(cin, a.dob);
    getline(cin, a.address);
    getline(cin, a.tax);
    getline(cin, a.date);
}
void inds(NhanVien ds[], int N){
    for(int i=0;i<N;++i) {
        cout << STT(i+1) << " ";
        cout << ds[i].name << " " << ds[i].gender << " " << ds[i].dob << " " << ds[i].address << " " << ds[i].tax << " " << ds[i].date << endl;
    }
}
int main(){
    struct NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i = 0; i < N; i++) nhap(ds[i]);
    inds(ds,N);
    return 0;
}