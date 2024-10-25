#include <bits/stdc++.h>

using namespace std;

int main(){
	string s; cin >> s;
	long long lt = 1, so = 0;
	for(int i = s.size() - 1; i >= 0; i--){
		so += (s[i] - '0') * lt;
		so %= 5;
		lt *= 2;
		lt %= 5;
	}
	if(so == 0){
		cout << "YES";
	}
	else{
		cout << "NO";
	}
}
