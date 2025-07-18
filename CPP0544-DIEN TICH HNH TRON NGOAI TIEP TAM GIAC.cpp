//Cho ba điểm A, B, C trong không gian hai chiều 0xy.
//Hãy tính diện tích hình tròn ngoại tiếp tam giác tạo bởi 3 điểm trên.
//Input
//3
//0 0 0 5 0 199
//1 1 1 1 1 1
//0 0 0 5 5 0
//Output
//INVALID
//INVALID
//39.270
#include <bits/stdc++.h>
#define PI 3.141592653589793238
using namespace std;
struct Data{
    double x, y;
    void input(){
        cin >> x >> y;
    }
};
bool isOK(Data A, Data B, Data C){
    if((A.x-B.x)*(A.y-C.y)==(A.x-C.x)*(A.y-B.y)) return 0;
    return 1;
}
double distance(Data A, Data B){
    double d=sqrt((A.x-B.x)*(A.x-B.x)+(A.y-B.y)*(A.y-B.y));
    return d;
}
void TestCase(){
    Data A, B, C;
    A.input();
    B.input();
    C.input();
    if(!isOK(A, B, C)){
        cout << "INVALID\n";
        return;
    }
    double a=distance(B, C);
    double b=distance(A, C);
    double c=distance(A, B);
    double p=(a+b+c)/2;
    double S=sqrt(p*(p-a)*(p-b)*(p-c));
    double R=a*b*c/(4*S);
    double res=PI*R*R;
    cout << fixed << setprecision(3) << res << endl;
}
int main(){
    int T;
    cin >> T;
    while(T--){
        TestCase();
    }
    return 0;
}

