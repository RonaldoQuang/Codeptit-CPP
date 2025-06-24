//Cho một đa giác lồi có N đỉnh trên mặt phẳng Oxy.
//Nhiệm vụ của bạn là hãy tính diện tích đa giác này.
//Input
//2
//3
//0 0
//1 0
//0 1
//4
//0 0
//2 0
//2 2
//0 2
//Output
//0.500
//4.000
#include <bits/stdc++.h>
using namespace std;
struct Diem{
	int x,y;
};
typedef struct Diem point;
void nhap(point a[1001], int n){
	for(int i=0;i<n;i++){
		cin >> a[i].x >> a[i].y;
    }
}
double dt(int x1, int y1, int x2, int y2, int x3, int y3){
	double a=sqrt(pow(x1-x2,2)+pow(y1-y2,2));
	double b=sqrt(pow(x2-x3,2)+pow(y2-y3,2));
	double c=sqrt(pow(x3-x1,2)+pow(y3-y1,2));
	double S=sqrt((a+b+c)*(a+b-c)*(b+c-a)*(c+a-b))*1.0/4;
	return S;
}
int main(){
    int t; cin >> t;
    while(t--){
    	int n; cin >> n;
    	point a[1001];
    	nhap(a,n);
    	double S=0;
    	for(int i=1;i<n-1;i++){
    		S+=dt(a[0].x,a[0].y,a[i].x,a[i].y,a[i+1].x,a[i+1].y);
		}
		cout << fixed << setprecision(3) << S << endl;
	}
}