//Thấy Tí rất thích thú với những con số, cô giáo đã giao cho Tí một bài tập về rút gọn các con số. 
//Phép rút gọn được thực hiện như sau: từ một số ban đầu, số mới được tạo thành bằng cách cộng các chữ số của số ban đầu với nhau. 
//Sau đó Tí phải thực hiện tiếp tục với con số vừa mới thu được.
//Quá trình rút gọn kết thúc khi số thu được chỉ có duy nhất 1 chữ số.
//Các bạn hãy cùng Tí đi tìm chữ số cuối cùng của phép rút gọn!
//Input
//3
//1009 167 102 
//Output
//1 5 3
#include <iostream>
using namespace std;
int cs(int n){
    int sum=0;
    while(n!=0){
        sum+=n%10;
        n/=10;
    }
    return sum;
}
int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        int sum=cs(n);
        while(sum>=10){
            sum=cs(sum);
        }
        cout << sum << endl;
    }
}