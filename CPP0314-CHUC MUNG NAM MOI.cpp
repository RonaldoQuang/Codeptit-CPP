//Tí năm nay đã lên lớp 1 rồi, Tết đến Tí rất vui vì nhận được rất nhiều lời chúc.
//Vì mới tập viết nên Tí đã ghi lại tất cả các lời chúc đó. 
//Cũng vì rất trân trọng các lời chúc nên Tí đã ghi tất cả các lời chúc bằng chữ IN HOA, tuy nhiên do mới tập viết nên Tí ghi không có dấu. 
//Giờ ngồi lật lại cuốn nhật ký ghi các lời chúc, Tí thấy mình đã ghi được n lời chúc.
//Tí muốn biết có bao nhiêu lời chúc khác nhau 
//(Hai lời chúc được gọi là khác nhau nếu chúng có độ dài khác nhau hoặc tồn tại ít nhất một vị trí mà ký tự ở vị trí đó của hai lời chúc là khác nhau, hay nói cách khác, đó là hai xâu ký tự khác nhau). 
//Bạn hãy lập chương trình giúp Tí đếm xem có bao nhiêu lời chúc khác nhau nhé.
//Input
//4
//CHUC MUNG NAM MOI
//HAPPY NEW YEAR
//CHUC MUNG TUOI MOI
//CHUC MUNG NAM MOI
//Output
//3
#include <bits/stdc++.h>
using namespace std;
int main(){
	int n; cin >> n;
	cin.ignore();
	string a[n];
	set<string> se;
	for(int i=0;i<n;i++){
		getline(cin,a[i]); 
		se.insert(a[i]);
	}
	cout << se.size();
}