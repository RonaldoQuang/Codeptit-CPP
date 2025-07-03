//Cho hai xâu ký tự S1 và S2. 
//Nhiệm vụ của bạn là hãy tìm xâu con nhỏ nhất của S1 chứa đầy đủ các ký tự của S2. 
//Nếu không tồn tại xâu con thỏa mãn yêu cầu bài toán, hãy đưa ra -1.
//Input
//2
//timetopractice
//toc
//zoomlazapzo
//oza
//Output
//toprac
//apzo
#include <bits/stdc++.h>
using namespace std;
int main(){
    int t; cin >> t;
    while(t--){
	string a,b; cin >> a >> b;
	map<char,int> mp;
	for(char x:b){
		mp[x]++;
	}
	int x, y, min1=1e9;
	for(int i=0;i<a.size();i++){
	    int sum=0;
	    map<char,int> mb;
	    for(auto z:mp){
		mb[z.first]=z.second;
	    }
	    for(int j=i;j<a.size();j++){
		if(mb[a[j]]>0){
		    sum+=1;
		    mb[a[j]]--;
		    if(sum==b.size()){
			if(j-i<min1){
			    min1=j-i;
			    x=i;
			    y=j;
			}
			break;
		    }
		}
	    }
	}
	if(min1<1e9){
	    for(int i=x;i<=y;i++){
		cout << a[i];
	    }
	}
	else cout << "-1";
	cout << endl;
    }
}
