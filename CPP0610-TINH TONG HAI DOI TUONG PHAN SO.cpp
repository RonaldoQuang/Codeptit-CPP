//Viết chương trình xây dựng class Phân số.
//Sau đó thực hiện nhập vào hai phân số p và q. 
//Tính tổng p + q, rút gọn và in ra kết quả.
//Input
//123 456 12 34
//Output
//1609/2584
//Bài tập này yêu cầu sử dụng hàm main cho sẵn như sau:
//C/C++
//int main() {
//	  PhanSo p(1,1), q(1,1);
//	  cin >> p >> q;
//	  cout << p + q;
//	  return 0;
//}
#include <bits/stdc++.h>
using namespace std;
class PhanSo{
	private:
		long long tu, mau;
	public:
		PhanSo(long long tu, long long mau);
		friend istream& operator >> (istream&, PhanSo&);
		friend ostream& operator << (ostream&, PhanSo);
		friend PhanSo operator + (PhanSo, PhanSo);
};
PhanSo::PhanSo(long long tu, long long mau){
	this->tu=tu;
	this->mau=mau;
}
ostream& operator << (ostream& out, PhanSo a){
	out << a.tu << "/" << a.mau;
	return out;
}
istream& operator >> (istream& in, PhanSo &a){
    in >> a.tu >> a.mau;
    return in;
}
PhanSo operator + (PhanSo a,PhanSo b){
	PhanSo tong(1,1);
	tong.mau=(a.mau*b.mau)/(__gcd(a.mau,b.mau));
	tong.tu=tong.mau/a.mau*a.tu+tong.mau/b.mau*b.tu;
	long long x=__gcd(tong.tu,tong.mau);
	tong.tu/=x;
	tong.mau/=x;
	return tong;
}
int main(){
	PhanSo p(1,1), q(1,1);
	cin >> p >> q;
	cout << p + q;
	return 0;
}