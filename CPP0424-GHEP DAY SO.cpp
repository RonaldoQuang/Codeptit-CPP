//Cho k mảng mỗi mảng gồm n phần tử đã được sắp xếp. 
//Hãy đưa ra kết quả là một dãy đã được sắp xếp. 
//Ví dụ với k = 3, n=4 và mảng
//A[] =   { {1, 3, 5, 7},{2, 4, 6, 8}{0, 9, 10, 11} };
//sẽ cho ta kết quả A[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11}.
//Input
//1
//3 4
//1 3 5 7
//2 4 6 8
//0 9 10 11
//Output
//0 1 2 3 4 5 6 7 8 9 10 11
#include <bits/stdc++.h>
using namespace std;
void TestCase(){
	int n, k;
	cin >> n >> k;
	vector<int> v;
	for(int i=1;i<=k;++i){
		for(int j=1;j<=n;++j){
			int x;
			cin >> x;
			v.push_back(x);
		}
	}
	sort(v.begin(),v.end());
	for(int i=0;i<v.size();++i)
		cout << v[i] << " ";
	cout << endl;
}

int main(){
	int T;
	cin >> T;
	while(T--)
		TestCase();
	return 0;
}