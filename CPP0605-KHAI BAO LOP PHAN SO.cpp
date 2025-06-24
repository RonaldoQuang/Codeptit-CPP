//Viết chương trình xây dựng class Phân số.
//Sau đó thực hiện nhập vào một phân số và in ra phân số đó ở dạng tối giản.
//Input
//123 456
//Output
//41/152
//Bài tập này yêu cầu sử dụng hàm main cho sẵn như sau:
//C/C++
//int main() {
//	  PhanSo p(1,1);
//	  cin >> p;
//	  p.rutgon();
//	  cout << p;
//	  return 0;
//}
#include <bits/stdc++.h>
using namespace std;
class PhanSo{
private:
    long long tu, mau;
public:
    PhanSo(long long t, long long m) {
        tu=t;
        mau=m;
    }
    void rutgon(){
        long long uc=__gcd(tu, mau);
        tu/=uc;
        mau/=uc;
    }
    friend istream &operator >> (istream &in, PhanSo &A) {
        in >> A.tu >> A.mau;
        return in;
    }
    friend ostream &operator << (ostream &out, PhanSo A) {
        out << A.tu << "/" << A.mau;
        return out;
    }
};
int main() {
	PhanSo p(1,1);
	cin >> p;
	p.rutgon();
	cout << p;
	return 0;
}