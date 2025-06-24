//Khai báo lớp Khách hàng với các thuộc tính:
//Mã khách hàng: tự động tăng, tính từ KH001
//Tên khách hàng: xâu ký tự độ dài không quá 50
//Giới tính: Nam hoặc Nu
//Ngày sinh: Theo đúng chuẩn dd/mm/yyyy
//Địa chỉ: xâu ký tự độ dài không quá 100

//Khai báo lớp Mặt hàng với các thuộc tính:
//Mã mặt hàng: tự động tăng, tính từ MH001
//Tên mặt hàng: xâu ký tự độ dài không quá 100
//Đơn vị tính: xâu ký tự độ dài không quá 10
//Giá mua: số nguyên dương không quá 7 chữ số
//Giá bán: số nguyên dương không quá 7 chữ số

//Khai báo lớp Hóa đơn là bạn của lớp Khách hàng và lớp Mặt hàng trong đó có các thông tin:
//Mã hóa đơn
//Mã khách hàng
//Mã mặt hàng
//Số lượng (không quá 1000)
//Lợi nhuận
//Viết chương trình nhập danh sách hóa đơn, sắp xếp theo lợi nhuận giảm dần và in danh sách ra màn hình.
//Input
//Dòng đầu ghi số N là số khách hàng (không quá 20).
//Tiếp theo là thông tin của N khách hàng, mỗi khách hàng ghi trên 4 dòng theo đúng thứ tự đã mô tả (không có mã)
//Dòng tiếp theo ghi số M là số mặt hàng (không quá 40).
//Tiếp theo là thông tin của M mặt hàng, mỗi mặt hàng ghi trên 4 dòng theo đúng thứ tự đã mô tả (không có mã)
//Dòng tiếp theo ghi số K là số hóa đơn (không quá 100)
//Mỗi hóa đơn ghi trên 1 dòng gồm 3 thông tin theo đúng thứ tự đã mô tả (không có mã và lợi nhuận).
//Output
//Ghi ra danh sách hóa đơn đã sắp xếp, trong đó gồm các thông tin sau, mỗi thông tin cách nhau đúng một khoảng trống.
//Mã hóa đơn
//Tên khách hàng
//Địa chỉ
//Tên mặt hàng
//Số lượng
//Thành tiền
//Lợi nhuận
//Input
//2
//Nguyen Van Nam
//Nam
//12/12/1997
//Mo Lao-Ha Dong-Ha Noi
//Tran Van Binh
//Nam
//11/14/1995
//Phung Khoang-Nam Tu Liem-Ha Noi
//2
//Ao phong tre em
//Cai
//25000
//41000
//Ao khoac nam
//Cai
//240000
//515000
//3
//KH001 MH001 2
//KH001 MH002 3
//KH002 MH002 4
//Output
//HD003 Tran Van Binh Phung Khoang-Nam Tu Liem-Ha Noi Ao khoac nam 4 2060000 1100000
//HD002 Nguyen Van Nam Mo Lao-Ha Dong-Ha Noi Ao khoac nam 3 1545000 825000
//HD001 Nguyen Van Nam Mo Lao-Ha Dong-Ha Noi Ao phong tre em 2 82000 32000
#include <bits/stdc++.h>
using namespace std;
int id1=1, id2=1, id3=1;
int x=0, y=0;
class KH{
    public:
	    string id, ten, gt, ns, dc;
};
class MH{
    public:
	    string id, ten, dv;
	    int gm, gb;
};
KH kh[35];
MH mh[55];
class KhachHang{
	private:
	    string id, ten, gt, ns, dc;
	public:
		friend istream& operator >> (istream& in, KhachHang &a){
			if(id1<10) a.id="KH00"+to_string(id1);
			else a.id="KH0"+to_string(id1);
			kh[x].id=a.id;
			if(x==0) in.ignore();
			getline(in,a.ten);
			kh[x].ten=a.ten;
			in >> a.gt >> a.ns;
			kh[x].gt=a.gt, kh[x].ns=a.ns;
			in.ignore();
			getline(in,a.dc);
			kh[x].dc=a.dc;
			id1++;
			x++;
			return in;
		}
};
class MatHang{
	private:
		string id, ten, dv;
		long long int gm, gb;
	public:
		friend istream& operator >> (istream& in, MatHang &a){
			if(id2<10) a.id="MH00"+to_string(id2);
			else a.id="MH0"+to_string(id2);
			mh[y].id=a.id;
			in.ignore();
			getline(in,a.ten);
			mh[y].ten=a.ten;
			in >> a.dv >> a.gm >> a.gb;
			mh[y].dv=a.dv, mh[y].gm=a.gm, mh[y].gb=a.gb;
			y++;
			id2++;
			return in;
		}
};
class HoaDon{
	public:
		string id, mkh, mmh, tkh, dckh, tmh;
		long long int sl, bd, ln;
		friend istream& operator >> (istream& in, HoaDon &a){
			if(id3<10) a.id="HD00"+to_string(id3);
			else a.id="HD0"+to_string(id3);
			in >> a.mkh >> a.mmh >> a.sl;
			for(int i=0;i<x;i++){
				if(a.mkh==kh[i].id){
				    a.tkh=kh[i].ten;
				    a.dckh=kh[i].dc;
				}
			}
			for(int i=0;i<y;i++){
				if(a.mmh==mh[i].id){
					a.tmh=mh[i].ten;
					a.bd=a.sl*mh[i].gb;
					a.ln=a.sl*(mh[i].gb-mh[i].gm);
				}
			}
			id3++;
			return in;
		}
		friend ostream& operator << (ostream& out, HoaDon a){
			out << a.id << " " << a.tkh << " " << a.dckh << " " << a.tmh << " ";
			out << a.sl << " " << a.bd << " " << a.ln << endl;
			return out;
		}
};
void sapxep(HoaDon dshd[105], int n){
	for(int i=0;i<n-1;i++){
		int min=i;
		for(int j=i+1;j<n;j++){
			if(dshd[j].ln>dshd[min].ln) min=j;
			else if(dshd[j].ln==dshd[min].ln){
				if(dshd[j].tmh>dshd[min].tmh) min=j;
			}
		}
		HoaDon temp=dshd[i];
		dshd[i]=dshd[min];
		dshd[min]=temp;
	}
}
int main(){
    KhachHang dskh[25];
    MatHang dsmh[45];
    HoaDon dshd[105];
    int N,M,K,i;
    cin >> N;
    for(i=0;i<N;i++) cin >> dskh[i];
    cin >> M;
    for(i=0;i<M;i++) cin >> dsmh[i];
    cin >> K;
    for(i=0;i<K;i++) cin >> dshd[i];

    sapxep(dshd, K);

    for(i=0;i<K;i++) cout << dshd[i];
    return 0;
}