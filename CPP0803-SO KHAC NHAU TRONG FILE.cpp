//Cho file văn bản DATA.in có không quá 100000 số nguyên dương, giá trị các số nhỏ hơn 1000.
//Hãy liệt kê các số khác nhau xuất hiện trong file và số lần xuất hiện của từng số đó.
//DATA.in
//17 20 25 20 15 10 24 17 25 17 22 11 23 18 14 25 12 10 12 17 21 25
//Output
//10 2
//11 1
//12 2
//14 1
//15 1
//17 4
//18 1
//20 2
//21 1
//22 1
//23 1
//24 1
//25 4
#include<bits/stdc++.h> 
using namespace std; 
int main(){ 
    fstream file; 
	file.open("DATA.in"); 
	int n; 
	map<int,int> mp; 
	while(file >> n){ 
	    mp[n]++; 
	} 
	for(auto x:mp){ 
	    cout << x.first << " " << x.second << endl; 
	}
	file.close(); 
}