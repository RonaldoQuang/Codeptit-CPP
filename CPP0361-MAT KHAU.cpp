//Hệ thống quản lý đào tạo của PTIT đang gặp một vấn đề về bảo mật. Do sự cố này, các account bị đổi thành tên viết liền của các sinh viên. 
//Và chỉ cần đánh một chuỗi kí tự có chứa mật khẩu là có thể đăng nhập vào hệ thống. 
//Chẳng hạn sinh viên A có mật khẩu là “abcd”, nếu ai đó đăng nhập với tài khoản là tên của A, mật khẩu “abcdef” hay “aaaabcd” đều được chấp nhận.
//Nhân cơ hội này, rất nhiều bạn sinh viên đã cố gắng hack vào tài khoản của những người khác. 
//Cho biết danh sách mật khẩu của tất cả các user, bài toán đặt ra là hãy xác định xem có nhiều nhất bao nhiêu trường hợp user này có thể login vào user khác?
//Input:
//3
//aaa
//aa
//abb
//Output:
//1
#include <bits/stdc++.h> 
using namespace std; 
int main(){ 
    int n; cin >> n; 
    string a[n]; 
    for(int i=0;i<n;i++){ 
        cin >> a[i]; 
    } 
    int cnt=0; 
    for(int i=0;i<n;i++){ 
        for(int j=0;j<n;j++){ 
            if(i!=j&&a[i].find(a[j])!=string::npos){ 
                cnt++;
            }   
        }
    } 
    cout << cnt << endl; 
}