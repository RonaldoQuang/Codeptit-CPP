//Viet chuong trinh tinh tong binh phuong (A+B)^2 cua 2 so phuc A,B.
//Intput
//1
//2 3 4 5
//Output
//-28 + 96i
//Bai nay yeu cau su dung ham main co san nhu sau:
//int main(){
//	  int t;
//	  cin >> t;
//	  while(t--){
//		  SoPhuc A;
//		  SoPhuc B;
//		  cin >> A.thuc >> A.ao >> B.thuc >> B.ao;
//		  SoPhuc C = binh_phuong_tong(A, B);
//		  hien_thi(C);
//		  cout << endl;
//	  }
//}
#include<bits/stdc++.h>
using namespace std;
struct SoPhuc{
	float thuc, ao;
};
typedef struct SoPhuc sp;
SoPhuc binh_phuong_tong(SoPhuc A, SoPhuc B){
	SoPhuc C;
	C.thuc=pow(A.thuc+B.thuc,2)-pow(A.ao+B.ao,2);
	C.ao=2*(A.thuc+B.thuc)*(A.ao+B.ao);
	return C;
}
void hien_thi(SoPhuc A){
	cout << A.thuc << " + " << A.ao << "i";
}
int main(){
	int t;
	cin >> t;
	while(t--){
		SoPhuc A;
		SoPhuc B;
		cin >> A.thuc >> A.ao >> B.thuc >> B.ao;
		SoPhuc C = binh_phuong_tong(A, B);
		hien_thi(C);
		cout << endl;
	}
}