/*
Kiểm tra một số nguyên N có phải là số chia hết cho 6 hay không? Số chia hết cho 6 nếu nó chia hết cho cả 2 và 3.

Đầu vào
Số nguyên dương N.

Giới hạn
N có không quá 1000 chữ số.

Đầu ra
In YES nếu N là số chia hết cho 6, ngược lại in NO.
*/

#include <bits/stdc++.h>

using namespace std;

int main(){
	string s; cin >> s;
	string word;
	int du = 0;
	string thuong;
	for(int i = 0; i < s.size(); i++){
		thuong = to_string(du) + s[i]; 
		du = stoi(thuong) % 6;
	}
	if(du == 0){
		cout << "YES";
	}
	else{
		cout << "NO";
	}
}
