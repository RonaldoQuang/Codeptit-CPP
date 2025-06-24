#include <bits/stdc++.h>
using namespace std;
class KH;
class MH;
map<int, KH> khh;
map<int, MH> mhh;
class KH {
public:
    int code;
    string name;
    string gender;
    string birth;
    string address;
};
class MH {
public:
    int code;
    string name;
    string unit;
    long long purchase;
    long long price;
};
string strip(string s) {
    stringstream ss(s);
    string token, result = "";
    while (ss >> token) {
        result += token + " ";
    }
    return result.erase(result.length() - 1);
}
void get_KH() {
    ifstream in("KH.in");
    int n;
    in >> n;
    for (int i = 0; i < n; i++) {
        int code = i + 1;
        string name, gender, birth, address;
        getline(in >> ws, name);
        getline(in >> ws, gender);
        getline(in >> ws, birth);
        getline(in >> ws, address);
        khh[code] = {code, strip(name), strip(gender), strip(birth), strip(address)};
    }
    in.close();
}
void get_MH() {
    ifstream in("MH.in");
    int n;
    in >> n;
    for (int i = 0; i < n; i++) {
        int code = i + 1;
        string name, unit;
        long long purchase, price;
        getline(in >> ws, name);
        getline(in >> ws, unit);
        in >> purchase >> price;
        mhh[code] = {code, strip(name), strip(unit), purchase, price};
    }
    in.close();
}
void Show_HD(){
    ifstream in("HD.in");
    int n;
    in >> n;
    for (int i = 0; i < n; i++) {
        cout << "HD" << setfill('0') << setw(3) << i + 1 << " ";
        string code_kh, code_mh;
        int quantity;
        in >> code_kh >> code_mh >> quantity;
        int ckh = stoi(&code_kh[2]);
        int cmh = stoi(&code_mh[2]);
        cout << khh[ckh].name << " ";
        cout << khh[ckh].address << " ";
        cout << mhh[cmh].name << " ";
        cout << mhh[cmh].unit << " ";
        cout << mhh[cmh].purchase << " ";
        cout << mhh[cmh].price << " ";
        cout << quantity << " ";
        cout << mhh[cmh].price * quantity << endl;
    }
    in.close();
}
int main(){
    get_KH();
    get_MH();
    Show_HD();
    return 0;
}