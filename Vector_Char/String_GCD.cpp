#include <bits/stdc++.h>

using namespace std;

long long gcd(long long a, long long b){
	while(b != 0){
		long long du = a % b;
		a = b;
		b = du;
	}
	return a;
}

int main(){
	string s; cin >> s;
	long long k; cin >> k;
	long long du = 0;
	string thuong;
	for(int i = 0; i < s.size(); i++){
		thuong = to_string(du) + s[i]; 
		du = stoll(thuong) % k;
	}
	cout << gcd(k, du);
}
