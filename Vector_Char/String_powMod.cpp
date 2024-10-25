#include <bits/stdc++.h>

using namespace std;

long long powMod(long long a, long long b, long long c){
	long long res = 1;
	while(b){
		if(b % 2){
			res *= a; res %= c;
		}
		a *= a;
		a %= c;
		b /= 2;
	}
	return res;
}
int mod = 1e9 + 7;
int main(){
	string s; cin >> s;
	long long k; cin >> k;
	long long du = 0;
	string thuong;
	for(int i = 0; i < s.size(); i++){
		thuong = to_string(du) + s[i]; 
		du = stoll(thuong) % mod;
	}
	cout << powMod(du, k, (int)1e9 + 7);
}
