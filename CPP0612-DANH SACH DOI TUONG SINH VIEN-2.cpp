//Viết chương trình khai báo lớp Sinh Viên gồm các thông tin: Mã SV, Họ tên, Lớp và Điểm GPA (dạng số thực float). 
//Hàm khởi tạo không có tham số, gán các giá trị thuộc tính ở trạng thái mặc định (xâu ký tự rỗng, giá trị số bằng 0).
//Yêu cầu sử dụng chồng toán tử nhập và xuất để nhập đối tượng sinh viên với cin và in ra đối tượng sinh viên với cout.
//Đọc thông tin N thí sinh từ bàn phím (không có mã sinh viên) và in ra lần lượt màn hình mỗi dòng 1 sinh viên theo đúng thứ tự ban đầu. 
//Trong đó Mã SV được tự tạo ra theo quy tắc thêm mã B20DCCN sau đó là giá trị nguyên tự động tăng tính từ 001 (tối đa là 099). Họ tên được xử lý đưa về dạng chuẩn. 
//Ngày sinh được chuẩn hóa về dạng dd/mm/yyyy
//Input
//1
//nGuyEn  vaN    biNH
//D20CQCN01-B
//2/12/2002
//3.1
//Output
//B20DCCN001 Nguyen Van Binh D20CQCN01-B 02/12/2002 3.10
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
string ch(string s){
	if(s[0]<='z'&&s[0]>='a') s[0]-=32;
	for(int i=1;i<s.size();i++){
		if(s[i]<='Z'&&s[i]>='A'){
			s[i]+=32;
		}
	}
	return s;
}
void xuat(string s){
	stringstream ss(s);
	string w;
	vector<string> v;
	while(ss >> w){
		v.push_back(w);
	}
	for(int i=0;i<v.size();i++){
		cout << ch(v[i]) << " ";
	}
}
struct SinhVien{
	string ten,lop,ngay_sinh;
	double gpa;
	int stt;
	friend istream& operator >> (istream &in, SinhVien &a){
		a.stt=n;
		in.ignore();
		getline(in,a.ten);
		in >> a.lop >> a.ngay_sinh >> a.gpa;
		if (a.ngay_sinh[2] != '/') a.ngay_sinh.insert(0, "0");
        if (a.ngay_sinh[5] != '/') a.ngay_sinh.insert(3, "0");
		++n;
		return in;		 
	}
	friend ostream &operator << (ostream &os, SinhVien a) {
        if(a.stt<10) cout << "B20DCCN00" << a.stt << " ";
		else cout << "B20DCCN0" << a.stt << " ";
        xuat(a.ten);
        os << a.lop << " " << a.ngay_sinh << " ";
        cout << fixed << setprecision(2) << a.gpa << "\n";;
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

