//Cho hai file DATA1.in và DATA2.in.
//Một từ được định nghĩa là một dãy ký tự liên tiếp không có khoảng trống, dấu tab hay dấu xuống dòng. 
//Tạm thời chưa xét đến các dấu câu trong bải toán này.
//Hãy viết chương trình liệt kê hợp và giao của hai tập từ khác nhau trong hai file.
//Các từ được liệt kê theo thứ tự từ điển.
//DATA1.in
//lap trinh huong doi tuong ngon ngu lap trinh C++
//DATA2.in
//lap trinh co ban lap trinh huong thanh phan
//Output
//ban c++ co doi huong lap ngon ngu phan thanh trinh tuong
//huong lap trinh
#include<bits/stdc++.h> 
using namespace std; 
int main(){ 
    fstream file1,file2;
	set<string> se;
	vector<string> v1;
	vector<string> v2;
	map<string,int> mp; 
	file1.open("DATA1.in"); 
	string s; 
	while(file1 >> s){ 
	    for(int j=0;j<s.length();j++){
			s[j]=tolower(s[j]);
        }
        se.insert(s);
		v1.push_back(s); 
	}
	file1.close(); 
	file2.open("DATA2.in");
	string w;
	while(file2 >> w){ 
	    for(int j=0;j<w.length();j++){
			w[j]=tolower(w[j]);
        }
        se.insert(w);
		v2.push_back(w); 
	}
	file2.close();
	for(auto x:se){
		cout << x << " ";
	} 
	cout << endl;
	set<string> so;
	for(int i=0;i<v1.size();i++){
		mp[v1[i]]=1;
	}
	for(int i=0;i<v2.size();i++){
		if(mp[v2[i]]==1) mp[v2[i]]=2;
	}
	for(auto z:mp){
		if(z.second==2) so.insert(z.first);
	}
	for(auto it:so){
		cout << it << " ";
	} 
}