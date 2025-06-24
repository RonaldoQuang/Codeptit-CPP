//Phân số là sự biểu diễn số hữu tỷ dưới dạng tỷ lệ của hai số nguyên, trong đó số ở trên được gọi là tử số, còn số ở dưới được gọi là mẫu số. 
//Cho hai phân số A và B có tử số và mẫu số được nhập từ bàn phím.
//Viết chương trình thực hiện hai nhiệm vụ sau:
//Tính C = (A + B)2 và rút gọn kết quả.
//Tính D = A x B x C và rút gọn kết quả.
//Input
//2
//1 2 3 4
//2 3 4 5
//Output
//25/16 75/128
//484/225 3872/3375
//Bài tập này yêu cầu sử dụng hàm main cho sẵn như sau:
//C/C++
//int main() {
//	int t;
//	cin >> t;
//	while (t--) {
//		PhanSo A;
//		PhanSo B;
//		cin >> A.tu >> A.mau >> B.tu >> B.mau;
//		process(A, B);
//	}
//}
#include <bits/stdc++.h>
using namespace std;
struct PhanSo {
    long long tu, mau;
};
void rutGon(PhanSo &A) {
    long long g=__gcd(A.tu, A.mau);
    A.tu/=g;
    A.mau/=g;
}
PhanSo sum(PhanSo A, PhanSo B) {
    PhanSo C;
    long long g=__gcd(A.mau, B.mau);
    long long l=A.mau*B.mau/g;
    C.tu=A.tu*l/A.mau+B.tu*l/B.mau;
    C.mau=l;
    rutGon(C);
    return C;
}
PhanSo mul(PhanSo A, PhanSo B) {
    PhanSo C;
    C.tu=A.tu*B.tu;
    C.mau=A.mau*B.mau;
    rutGon(C);
    return C;
}
void process(PhanSo A, PhanSo B) {
    PhanSo C=mul(sum(A, B), sum(A, B));
    PhanSo D=mul(mul(A, B), C);
    cout << C.tu << "/" << C.mau << " " << D.tu << "/" << D.mau << endl;
}
int main() {
	int t;
	cin >> t;
	while (t--) {
		PhanSo A;
		PhanSo B;
		cin >> A.tu >> A.mau >> B.tu >> B.mau;
		process(A, B);
	}
}

