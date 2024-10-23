/*
Xâu pangram là xâu có chứa đầy đủ các kí tự từ A tới Z không phân biệt chữ hoa hay thường.

Nhập vào xâu S và kiểm tra xem xâu S có phải là xâu pangram hay không?

Đầu vào
Xâu kí tự S chỉ bao gồm các kí tự in hoa hoặc in thường.

Giới hạn
1≤len(S)≤100000

Đầu ra
In ra YES nếu S là xâu pangram, ngược lại in NO.
*/

#include <bits/stdc++.h>
#include <string>
#include <ctype.h>

using namespace std;

int main(){
	string s;
	cin >> s;
	set<char> se;
	for(int i = 0; i < s.size(); i++){
		s[i] = (char)toupper(s[i]);
		if(isupper(s[i])){
			se.insert(s[i]);
		}
	}
	if(se.size() == 26){
		cout << "YES";
	}
	else{
		cout << "NO";
	}
}
