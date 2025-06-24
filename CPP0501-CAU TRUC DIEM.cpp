//Viết chương trình khai báo cấu trúc điểm trong không gian hai chiều với hai tọa độ x và y (kiểu số thực double).
//struct Point{
//    double x, y;
//}
//Nhập hai điểm A và B.
//Tính khoảng cách giữa hai điểm A, B với độ chính xác 4 chữ số sau dấu phẩy.
//2
//0 0 0 5
//0 199 5 6
//Output
//5.0000
//193.0648
//Bài tập này yêu cầu sử dụng hàm main cho sẵn như sau:
//C/C++
//int main(){
//    struct Point A, B;
//    int t;
//    cin>>t;
//    while(t--){
//        input(A); input(B);
//        cout << fixed << setprecision(4) << distance(A,B) << endl;
//    }
//    return 0;
//}
#include <bits/stdc++.h>
using namespace std;
struct Point{
	double x,y;
};
void input(Point &a){
	cin >> a.x >> a.y;
}
double distance(Point a, Point b){
	return sqrt((a.x-b.x)*(a.x-b.x)+(a.y-b.y)*(a.y-b.y));
}
int main(){
    struct Point A, B;
    int t;
    cin>>t;
    while(t--){
        input(A); input(B);
        cout << fixed << setprecision(4) << distance(A,B) << endl;
    }
    return 0;
}