#include <bits/stdc++.h>

using namespace std;

int check(long long a[], long long n, long long mid, long long t){
	long long cnt = 0;
	for(int i = 0; i < n; i++){
		cnt += mid / a[i];
	}
	if(cnt == t) return 1;
	else if(cnt < t) return 0;
	else return -1;
}

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	long long n, t; cin >> n >> t;
	long long a[n];
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	long long l = 0, r = *min_element(a, a + n) * t;
	long long res = 0;
	while(l <= r){
		long long mid = (l + r) / 2;
		int timKiem = check(a, n, mid, t);
		if(timKiem == 1){
			res = mid;
			r = mid - 1;
		}
		else if(timKiem == -1){
			res = mid;
			r = mid - 1;
		}
		else{
			l = mid + 1;
		}
	}
	cout << res;
	return 0;
}
