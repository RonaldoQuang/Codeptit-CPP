//Viết chương trình khai báo lớp Sinh Viên gồm các thông tin: Mã SV, Họ tên, Lớp và Điểm GPA (dạng số thực float). 
//Hàm khởi tạo không có tham số, gán các giá trị thuộc tính ở trạng thái mặc định (xâu ký tự rỗng, giá trị số bằng 0).
//Yêu cầu sử dụng chồng toán tử nhập và xuất để nhập đối tượng sinh viên với cin và in ra đối tượng sinh viên với cout.
//Đọc thông tin N thí sinh từ bàn phím (không có mã sinh viên) và in ra lần lượt màn hình mỗi dòng 1 sinh viên theo đúng thứ tự ban đầu. 
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
//    SinhVien ds[50];
//    int N, i;
//    cin >> N;
//    for(i=0;i<N;i++){
//        cin >> ds[i];
//    }
//    for(i=0;i<N;i++){
//        cout << ds[i];
//    }
//    return 0;
//}
#include <bits/stdc++.h>
using namespace std;
int n=1;
struct SinhVien{
	string ten, lop, dob;
	float gpa;
	int stt;
	friend istream& operator >> (istream &in, SinhVien &a){
		a.stt=n;
		in.ignore();
		getline(in,a.ten);
		in >> a.lop >> a.dob >> a.gpa;
		if (a.dob[2] != '/') a.dob.insert(0, "0");
        if (a.dob[5] != '/') a.dob.insert(3, "0");
        ++n;
        return in;		 
	}
	friend ostream &operator << (ostream &os, SinhVien a){
		if(a.stt<10) cout << "B20DCCN00" << a.stt << " ";
		else cout << "B20DCCN0" << a.stt << " ";
        os << a.ten << " " << a.lop << " " << a.dob << " ";
        cout << fixed << setprecision(2) << a.gpa << "\n";
        return os;
    }
};
int main(){
    SinhVien ds[50];
    int N, i;
    cin >> N;
    for(i=0;i<N;i++){
        cin >> ds[i];
    }
    for(i=0;i<N;i++){
        cout << ds[i];
    }
    return 0;
}

