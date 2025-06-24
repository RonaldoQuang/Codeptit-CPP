//Viết chương trình xây dựng cấu trúc Phân số gồm hai phần tử là tử số và mẫu số. 
//Các giá trị đều nguyên dương và không quá 9 chữ số.
//Sau đó thực hiện nhập vào hai phân số p và q. 
//Tính tổng p + q, rút gọn và in ra kết quả.
//Input
//123 456 12 34
//Output
//1609/2584
//Bài tập này yêu cầu sử dụng hàm main cho sẵn như sau:
//C/C++
//int main(){
//    struct PhanSo p,q;
//    nhap(p); nhap(q);
//	  PhanSo t = tong(p,q);
//	  in(t);
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
PhanSo tong(PhanSo p, PhanSo q){
    PhanSo t;
    long long g=__gcd(p.mau, q.mau);
    long long l=p.mau*q.mau/g;
    t.tu=l/p.mau*p.tu+l/q.mau*q.tu;
    t.mau=l;
    rutgon(t);
    return t;
}
void in(PhanSo p){
    cout << p.tu << "/" << p.mau;
}
int main() {
	struct PhanSo p,q;
	nhap(p); nhap(q);
	PhanSo t = tong(p,q);
	in(t);
	return 0;
}