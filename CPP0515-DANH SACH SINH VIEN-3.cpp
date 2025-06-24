//Viết chương trình khai báo cấu trúc Sinh Viên gồm các thông tin: Mã SV, Họ tên, Ngày sinh, Lớp và Điểm GPA (dạng số thực float).
//Đọc thông tin N sinh viên từ bàn phím (không có mã sinh viên) sau đó sắp xếp theo điểm GPA giảm dần và in ra lần lượt màn hình mỗi dòng 1 sinh viên.
//Trong đó Mã SV được tự tạo ra theo quy tắc thêm mã B20DCCN sau đó là giá trị nguyên tự động tăng tính từ 001 (tối đa là 099). 
//Họ tên được xử lý đưa về dạng chuẩn. 
//Ngày sinh được chuẩn hóa về dạng dd/mm/yyyy
//Input
//2
//ngUYen Van NaM
//D20DCCN01-B
//2/12/1994
//2.17
//Nguyen QuanG hAi
//D20DCCN02-B
//1/9/1994
//3.0
//Output
//B20DCCN002 Nguyen Quang Hai D20DCCN02-B 01/09/1994 3.00
//B20DCCN001 Nguyen Van Nam D20DCCN01-B 02/12/1994 2.17
//Bài tập này yêu cầu sử dụng hàm main cho sẵn như sau:
//C/C++
//int main(){
//    struct SinhVien ds[50];
//    int N;
//    cin >> N;
//    nhap(ds, N);
//    sapxep(ds,N);
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
void sapxep(SinhVien ds[50],int N){
	for(int i=0;i<N-1;i++){
		int min=i;
		for(int j=i+1;j<N;j++){
			if(ds[j].gpa>ds[i].gpa) min=j;
		}
		SinhVien temp=ds[i];
		ds[i]=ds[min];
		ds[min]=temp;
	}
}
void in(SinhVien ds[50],int N){
	for(int i=0;i<N;i++){
		if(ds[i].stt<10) cout << "B20DCCN00" << ds[i].stt << " ";
		else cout << "B20DCCN0" << ds[i].stt << " ";
		xuat(ds[i].ten);
		cout << ds[i].lop << " " << ds[i].dob << " ";
		cout << fixed << setprecision(2) << ds[i].gpa << endl;
	}
}
int main(){
    struct SinhVien ds[50];
    int N;
    cin >> N;
    nhap(ds, N);
    sapxep(ds,N);
    in(ds, N);
    return 0;
}

