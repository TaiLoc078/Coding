#include <bits/stdc++.h>
using namespace std;

int find(vector<int> a, int x){
	int res = -1, l = 0, r = a.size() - 1;
	while(l <= r){
		int mid = (l + r) / 2;
		if(a[mid] == x){
			res = mid;
			return res;
		}
		else if(a[mid] < x){
			res = mid;
			l = mid + 1;
		}
		else{
			r = mid - 1;
		}
	}
	return res;
}

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	int n, m; cin >> n >> m;
	vector<int> a;
	int b[m];
	for(int i = 0; i < n; i++){
		int x; cin >> x;
		a.push_back(x);
	}
	for(int i = 0; i < m; i++){
		cin >> b[i];
	}
	sort(a.begin(), a.end());
	for(int i = 0; i < m; i++){
		int timKiem = find(a, b[i]);
		if(timKiem != -1){
			cout << a[timKiem] << endl;
			a.erase(a.begin() + timKiem);
		}
		else{
			cout << timKiem << endl;
		}
	}
	return 0;
}
