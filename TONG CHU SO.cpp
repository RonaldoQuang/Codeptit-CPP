//Lux là một pháp sư tài năng, cô học rất giỏi phép thuật, hôm nay cô quyết định thực hành phép thuật mới học của mình, đó là phép "Ignite". 
//Khi Lux niệm phép này, một số sẽ biến thành tổng các chữ số của nó. 
//Vậy Lux cần bao nhiêu lần niệm phép để biến một số thành số có một chữ số?
//Input
//0
//10
//991
//Output
//0
//1
//3
#include <iostream>
using namespace std;
int cs(int n){
    int sum=0;
    while(n!=0){
        sum+=n%10;
        n/=10;
    }
    return sum;
}
int main(){
	string s; cin >> s;
	int cnt=1, sum=0;
	for(int i=0;i<s.size();i++){
		sum+=s[i]-'0';
	}
    while(sum>=10){
    	++cnt;
        sum=cs(sum);
    }
    if(s.size()==1) cout << "0";
    else cout << cnt;
}
