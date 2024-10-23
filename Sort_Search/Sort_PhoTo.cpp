#include <bits/stdc++.h>

using namespace std;

bool check(int mid, int t, int x, int y){
	long long cnt = 0;
	cnt += mid / x;
	cnt += mid / y;
	if(cnt >= t){
		return true;
	}
	else{
		return false;
	}
}

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	long long n; cin >> n;
	long long x, y; cin >> x >> y;
	long long l = 0, r = min(x, y) * n;
	long long res = 0;
	while(l <= r){
		long long mid = (l + r) / 2;
		if(check(mid, n - 1, x, y)){
			res = mid;
			r = mid - 1;
		}
		else{
			l = mid + 1;
		}
	}
	cout << res + min(x, y);
	return 0;
}
