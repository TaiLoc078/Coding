#include <bits/stdc++.h>

using namespace std;

long long sum(long long a){
	long long cnt = 0;
	while(a != 0){
		cnt += a % 10;
		a /= 10;
	}
	return cnt;
}

int main(){
	string s; cin >> s;
	long long cnt = 0;
	for(int i = 0; i < s.size(); i++){
		cnt += (s[i] - '0');
	}
	while(cnt >= 10){
		cnt = sum(cnt);
	}
	if(cnt == 9){
		cout << "YES";
	}
	else{
		cout << "NO";
	}
}
