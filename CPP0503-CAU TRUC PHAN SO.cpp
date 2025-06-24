//Viết chương trình xây dựng cấu trúc Phân số gồm hai phần tử là tử số và mẫu số. 
//Các giá trị đều nguyên dương và không quá 18 chữ số.
//Sau đó thực hiện nhập vào một phân số và in ra phân số đó ở dạng tối giản.
//Input
//123 456
//Output
//41/152
//Bài tập này yêu cầu sử dụng hàm main cho sẵn như sau:
//C/C++
//int main() {
//    struct PhanSo p;
//	  nhap(p);
//	  rutgon(p);
//	  in(p);
//	  return 0;
//}
#include <bits/stdc++.h>
using namespace std;
struct PhanSo{
    long long tu, mau;
};
void nhap(PhanSo &p){
    cin >> p.tu >> p.mau;
}
void rutgon(PhanSo &p){
    long long g=__gcd(p.tu, p.mau);
    p.tu/=g;
    p.mau/=g;
}
void in(PhanSo p){
    cout << p.tu << "/" << p.mau;
}
int main() {
	struct PhanSo p;
	nhap(p);
	rutgon(p);
	in(p);
	return 0;
}