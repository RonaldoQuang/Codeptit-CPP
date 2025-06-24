//Thông tin về mỗi sinh viên gồm:
//Mã sinh viên: dãy ký tự không có khoảng trống (không quá 15). Đảm bảo không trùng nhau.
//Họ và tên: độ dài không quá 100
//Lớp: dãy ký tự không có khoảng trống (không quá 15)
//Email: dãy ký tự không có khoảng trống (không quá 15)
//Hãy nhập danh sách sinh viên và sắp xếp theo mã sinh viên tăng dần (thứ tự từ điển)
//Input
//B16DCCN011
//Nguyen Trong Duc Anh
//D16CNPM1
//sv1@stu.ptit.edu.vn
//B15DCCN215
//To Ngoc Hieu
//D15CNPM3
//sv2@stu.ptit.edu.vn
//B15DCKT150
//Nguyen Ngoc Son
//D15CQKT02-B
//sv3@stu.ptit.edu.vn
//B15DCKT199
//Nguyen Trong Tung
//D15CQKT03-B
//sv4@stu.ptit.edu.vn
//Output
//B15DCCN215 To Ngoc Hieu D15CNPM3 sv2@stu.ptit.edu.vn
//B15DCKT150 Nguyen Ngoc Son D15CQKT02-B sv3@stu.ptit.edu.vn
//B15DCKT199 Nguyen Trong Tung D15CQKT03-B sv4@stu.ptit.edu.vn
//B16DCCN011 Nguyen Trong Duc Anh D16CNPM1 sv1@stu.ptit.edu.vn
#include <bits/stdc++.h>
using namespace std;
class SinhVien {
public:
    string msv, ten, lop, email;
    friend istream &operator >> (istream &is, SinhVien &a) {
        scanf("\n");
        getline(cin, a.msv);
        getline(cin, a.ten);
        getline(cin, a.lop);
        getline(cin, a.email);
        return is;
    }
    friend ostream &operator << (ostream &os, SinhVien a) {
        cout << a.msv << " " << a.ten << " " << a.lop << " " << a.email << "\n";
        return os;
    }
};
bool cmp(SinhVien a, SinhVien b) {
    return a.msv < b.msv;
}
int main() {
    int n=0;
    SinhVien a[1000], x;
    while(cin >> x) {
        a[n++]=x;
    }
    sort(a,a+n,cmp);
    for(int i=0;i<n;++i) {
        cout << a[i];
    }
    return 0;
}
