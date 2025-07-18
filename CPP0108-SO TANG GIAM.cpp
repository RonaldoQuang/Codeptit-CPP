//Một số được gọi là số tăng giảm nếu số đó có các chữ số thỏa mãn hoặc tăng dần, hoặc giảm dần từ trái qua phải. 
//Hãy đếm các số nguyên tố là số tăng giảm với số chữ số cho trước.
//Dữ liệu vào: Dòng đầu tiên ghi số bộ test. 
//Mỗi bộ test viết trên một dòng số chữ số tương ứng cần kiểm tra (lớn hơn 1 và nhỏ hơn 10)
//Kết quả: Ghi ra số lượng các số thỏa mãn điều kiện.
//Input
//2
//2
//4
//Output
//20
//50
#include <bits/stdc++.h>
#define endl '\n'
using namespace std;
bool isPrime(int n) {
    if (n < 2)
        return 0;
    for (int i = 2; i <= sqrt(n); ++i) {
        if (n % i == 0)
            return 0;
    }
    return 1;
}
bool ascending(int n) {
    int d = 10;
    while (n > 0) {
        if (d <= n % 10)
            return 0;
        d = n % 10;
        n /= 10;
    }
    return 1;
}
bool descending(int n) {
    int d = -1;
    while (n > 0) {
        if (d >= n % 10)
            return 0;
        d = n % 10;
        n /= 10;
    }
    return 1;
}
void TestCase() {
    int n;
    cin >> n;
    int l = pow(10, n - 1);
    int r = pow(10, n) - 1;
    int d = 0;
    for (int i = l; i <= r; ++i) {
        if (ascending(i) || descending(i)) {
            if (isPrime(i))
                d++;
        }
    }
    cout << d << endl;
}
int main() {
    int T;
    cin >> T;
    while (T--)
        TestCase();
    return 0;
}