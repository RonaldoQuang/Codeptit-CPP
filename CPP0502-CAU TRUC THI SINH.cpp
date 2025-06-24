//Viết chương trình khai báo cấu trúc Thí Sinh gồm các thông tin: Họ tên, Điểm môn 1, Điểm môn 2, Điểm môn 3 và Tổng điểm.
//Đọc thông tin 1 thí sinh từ bàn phím và in ra màn hình 3 thông tin: Họ tên, Ngày sinh, Tổng điểm.
//Nguyen Hoang Ha
//11/10/2001
//4.5
//10.0
//5.5
//Output
//Nguyen Hoang Ha 11/10/2001 20.0
//Bài tập này yêu cầu sử dụng hàm main cho sẵn như sau:
//C/C++
//int main(){
//    struct ThiSinh A;
//    nhap(A);
//    in(A);
//    return 0;
//}
#include <bits/stdc++.h>
using namespace std;
struct ThiSinh{
    string name, date;
    float d1, d2, d3, sum;
};
void nhap(ThiSinh &A){
    getline(cin, A.name);
    cin >> A.date >> A.d1 >> A.d2 >> A.d3;
    A.sum=A.d1+A.d2+A.d3;
}
void in(ThiSinh A){
    cout << A.name << " " << A.date << " ";
    cout << fixed << setprecision(1) << A.sum;
}
int main(){
    struct ThiSinh A;
    nhap(A);
    in(A);
    return 0;
}