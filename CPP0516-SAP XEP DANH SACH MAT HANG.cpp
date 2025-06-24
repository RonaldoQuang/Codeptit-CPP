//Xây dựng cấp trúc mặt hàng gồm các thông tin: 
//Mã mặt hàng (là một số nguyên, tự động tăng, tính từ 1); 
//Tên mặt hàng, nhóm hàng: là các xâu ký tự; 
//Giá mua, giá bán: là các số thực (không quá 9 chữ số)
//Hãy sắp xếp danh sách các mặt hàng theo lợi nhuận giảm dần.
//Input
//3
//May tinh SONY VAIO
//Dien tu
//16400
//17699
//Tu lanh Side by Side
//Dien lanh
//18300
//25999
//Banh Chocopie
//Tieu dung
//27.5
//37
//Output
//2 Tu lanh Side by Side Dien lanh 7699.00
//1 May tinh SONY VAIO Dien tu 1299.00
//3 Banh Chocopie Tieu dung 9.50
#include <bits/stdc++.h>
using namespace std;
struct Product{
    int id;
    string name, type;
    float buy, sell, profit;
    void input(){
        scanf("\n");
        getline(cin,name);
        getline(cin,type);
        cin >> buy >> sell;
        profit=sell-buy;
    }
    void output() {
        cout << id << " " << name << " " << type << " ";
        cout << fixed << setprecision(2) << profit << endl;
    }
};
bool cmp(Product a, Product b){
    return a.profit > b.profit;
}
int main(){
    int n;
    cin >> n;
    Product a[n];
    for(int i=0;i<n;++i) {
        a[i].id=i+1;
        a[i].input();
    }
    sort(a,a+n,cmp);
    for(int i=0;i<n;++i) {
        a[i].output();
    }
    return 0;
}

