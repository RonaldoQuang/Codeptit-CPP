//Viết chương trình khai báo cấu trúc Sinh Viên gồm các thông tin: Mã SV, Họ tên, Lớp, Ngày sinh và Điểm GPA (dạng số thực float).
//Đọc thông tin N sinh viên từ bàn phím (không có mã sinh viên) và in ra lần lượt màn hình mỗi dòng 1 sinh viên theo đúng thứ tự ban đầu. 
//Trong đó Mã SV được tự tạo ra theo quy tắc thêm mã B20DCCN sau đó là giá trị nguyên tự động tăng tính từ 001 (tối đa là 099). 
//Ngày sinh được chuẩn hóa về dạng dd/mm/yyyy
//Input
//1
//Nguyen Van An
//D20CQCN01-B
//2/12/2002
//3.19
//Output
//B20DCCN001 Nguyen Van An D20CQCN01-B 02/12/2002 3.19
//Bài tập này yêu cầu sử dụng hàm main cho sẵn như sau:
//C/C++
//int main(){
//    struct SinhVien ds[50];
//    int N;
//    cin >> N;
//    nhap(ds, N);
//    in(ds, N);
//    return 0;
//}
#include <bits/stdc++.h>
using namespace std;
struct SinhVien{
	string ten,lop,dob;
	float gpa;
	int stt;
};
void nhap(SinhVien ds[50],int N){
	for(int i=0;i<N;i++){
		cin.ignore();
		getline(cin,ds[i].ten);
		cin >> ds[i].lop;
		cin >> ds[i].dob;
		if(ds[i].dob[2]!='/') ds[i].dob.insert(0,"0");
		if(ds[i].dob[5]!='/') ds[i].dob.insert(3,"0");
		cin >> ds[i].gpa;
		ds[i].stt=i+1;
	}
}
void in(SinhVien ds[50],int N){
	for(int i=0;i<N;i++){
		if(ds[i].stt<10) cout << "B20DCCN00" << ds[i].stt << " ";
		else cout << "B20DCCN0" << ds[i].stt << " ";
		cout << ds[i].ten << " " << ds[i].lop << " " << ds[i].dob << " ";
		cout << fixed << setprecision(2) << ds[i].gpa << endl;
	}
}
int main(){
    struct SinhVien ds[50];
    int N;
    cin >> N;
    nhap(ds, N);
    in(ds, N);
    return 0;
}

