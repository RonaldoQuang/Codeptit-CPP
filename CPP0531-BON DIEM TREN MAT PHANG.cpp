//Cho 4 điểm trong không gian 3 chiều. 
//Nhiệm vụ của bạn là kiểm tra xem chúng có cùng nằm trên một mặt phẳng hay không? 
//Nếu có in ra “YES”, in ra “NO” trong trường hợp ngược lại.
//Input
//3
//1 2 0
//2 3 0
//4 0 0
//0 0 0
//1 1 1
//2 2 2
//3 3 3
//4 4 4
//5 6 7
//-8 -9 -10
//12 19 0
//3 1 5
//Output
//YES
//YES
//NO
#include<bits/stdc++.h> 
using namespace std; 
struct Point{
	int x,y,z;
};
typedef struct Point diem;
int main(){
	int t; cin >> t;
	while(t--){
	    diem A,B,C,D;
	    cin >> A.x >> A.y >> A.z;
	    cin >> B.x >> B.y >> B.z;
	    cin >> C.x >> C.y >> C.z;
	    cin >> D.x >> D.y >> D.z;
	    int a=A.x-B.x,b=A.y-B.y,c=A.z-B.z;
	    int m=A.x-C.x,n=A.y-C.y,p=A.z-C.z;
	    diem AB={a,b,c};
	    diem AC={m,n,p};
	    diem AH={b*p-c*n,c*m-a*p,a*n-b*m};
	    int bt=(b*p-c*n)*(A.x-D.x)+(c*m-a*p)*(A.y-D.y)+(a*n-b*m)*(A.z-D.z);
	    if(bt==0) cout << "YES\n";
	    else cout << "NO\n";
	}
}