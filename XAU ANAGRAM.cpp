//Một xâu A được gọi là xâu Anagram của xâu B nếu như ta có thể thu được xâu A bằng một số phép đổi chỗ các kí tự trên xâu B.
//Ví dụ: “listen” là một anagram của “silent”.
//Cho N xâu phân biệt S[1], S[2], …, S[N]. 
//Nhiệm vụ của bạn là hãy đếm số lượng cặp chỉ số (i, j) thỏa mãn S[i] là xâu Anagram của S[j].
//Input:
//Dòng đầu tiên là số lượng xâu N (1 ≤ N ≤ 100000).
//N dòng tiếp theo, mỗi dòng gồm một xâu có đúng 10 kí tự, tất cả các kí tự đều là chữ cái thường.
//Output:
//In ra một số nguyên duy nhất là đáp số của bài toán.
//Input
//3
//listenaaaa
//aaaasilent
//bbbbbbbbbb

//2
//aaaaaaaaaa
//bbbbbbbbbb

//5
//abaaaaaaaa
//ccccccxccc
//aaaaaaaaba
//cccccccccx
//aaaabaaaaa
//Output
//1
//0
//4
#include <bits/stdc++.h>
using namespace std;
string xau(string s){
	char a[10];
    int cnt=0;
    for(char x:s){
    	a[cnt]=x;
    	++cnt;
	}
    sort(a,a+10);
    string b="";
    for(int i=0;i<10;i++){
    	b+=a[i];
	}
	return b;
}
int main(){
    int n; cin >> n;
    string s[n];
    map<string,long long> mp;
    for(int i=0;i<n;i++){
    	cin >> s[i];
    	s[i]=xau(s[i]);
	}
	long long sum=0;
	for(int i=0;i<n;i++){
		mp[s[i]]++;
	}
	for(auto x:mp){
		if(x.second>=2) sum+=x.second*(x.second-1)/2;
	}
	cout << sum;
}