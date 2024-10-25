/*
Cho 2 xâu S và T chỉ bao gồm các chữ cái in hoa, in thường và dấu cách. Hãy kiểm tra xem xâu T có phải là xâu con của xâu S hay không?

Đầu vào
Dòng đầu tiên là xâu S.

Dòng thứ 2 là xâu T.

Giới hạn
1≤len(S)≤100000

1≤len(T)≤100000

Đầu ra
In ra YES nếu xâu T xuất hiện trong xâu S, ngược lại in ra NO.
*/

#include <bits/stdc++.h>

using namespace std;

int main(){
	string s, t;
	getline(cin, s);
	getline(cin, t);
	if(s.find(t) != string::npos){
		cout << "YES";
	}
	else{
		cout << "NO";
	}
}
