//Trong những năm gần đây, hình thức thi trắc nghiệm được sử dụng phổ biến trong kỳ thi Trung học phổ thông quốc gia. 
//Ưu điểm của hình thức thi trắc nghiệm là có thể chấm tự động hoàn toàn mà không cần sự can thiệp của con người, điều này đảm bảo tính khách quan và chính xác. 
//Giả sử có 2 mã đề thi 101 và 102 có các đáp án được cho trong bảng dưới đây:
//Đề 101: A B B A D C C A B D C C A B D
//Đề 102: A C C A B C D D B B C D D B B
//Nhiệm vụ của bạn là chấm điểm cho bài thi của các thí sinh trong một phòng thi. 
//Điểm thi được chấm trên thang điểm 10, làm tròn đến 2 chữ số phần thập phân.
//Input 
//1
//101 A B B A D C C A B D C C A B D
//Output
//10.00
#include <bits/stdc++.h>
using namespace std;
int main(){
	int t; cin >> t;
	string s1="ABBADCCABDCCABD";
	string s2="ACCABCDDBBCDDBB";
	while(t--){
		int n, cnt=0; cin >> n;
		char a[15];
		for(int i=0;i<15;i++){
			cin >> a[i];
		}  
		if(n==101){
			for(int i=0;i<15;i++){
				if(a[i]==s1[i]){
					++cnt;
				}
			}
		}
		if(n==102){
			for(int i=0;i<15;i++){
				if(a[i]==s2[i]){
					++cnt;
				}
			}
		}
		float diem=1.0*cnt/15*10;
		cout << fixed << setprecision(2) << diem << endl;
	}
}