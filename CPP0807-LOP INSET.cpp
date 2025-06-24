//Trong lý thuyết tập hợp, một tập hợp chỉ được phép chứa các giá trị phân biệt và luôn luôn lưu các giá trị theo thứ tự tăng dần.
//Khai báo lớp IntSet và viết các phương thức để thực hiện các thao tác trên tập hợp số nguyên. 
//Sử dụng lớp IntSet để in ra tập hợp các số nguyên là giao của hai tập số trong 2 dãy ban đầu.
//DATA.in
//5 6
//1 2 3 4 5
//3 4 5 6 7 8
//Output
//3 4 5
#include <bits/stdc++.h>
#include <fstream> 
using namespace std; 
int main(){
	fstream file;
	set<int> se;
	map<int,int> mp;
	int cnt=0;
	file.open("DATA.in");
	int n,m,x;
	file >> n >> m;
	while(file >> x){
		++cnt;
		if(cnt<=n) mp[x]=1;
		else{
			if(mp[x]==1) mp[x]=2;
		}
	}
	file.close();
	for(auto z:mp){
		if(z.second==2) se.insert(z.first);
	}
	for(auto it:se){
		cout << it << " ";
	}
}