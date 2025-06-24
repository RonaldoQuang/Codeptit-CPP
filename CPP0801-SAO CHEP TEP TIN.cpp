//Cho tệp dữ liệu đầu vào có tên: PTIT.in đặt cùng thư mục với tệp mã nguồn.
//Nhiệm vụ của bạn là sao chép nội trong tệp PTIT.in tới tệp PTIT.out
//PTIT.in
//Ngon ngu lap trinh C++
//PTIT.out
//Ngon ngu lap trinh C++
#include <bits/stdc++.h>
using namespace std;
int main(){
    ifstream inFile("PTIT.in");
    ofstream outFile("PTIT.out");
    outFile << inFile.rdbuf();
}