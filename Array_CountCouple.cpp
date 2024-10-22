/*
Cho dãy số A[] gồm có N phần tử, nhiệm vụ của bạn là đếm số lượng cặp số bằng nhau trong mảng.

Gợi ý : Đếm tần suất của từng số trong mảng, với mỗi số tính tổ hợp chập 2 của số lần suất hiện thì ra số cặp

Đầu vào
Dòng đầu tiên là số nguyên N.

Dòng tiếp theo gồm N số nguyên A[i]

Giới hạn
1≤ N ≤ 10^6

1 ≤ A[i] ≤ 10^6

Đầu ra
In ra số lượng cặp số bằng nhau trong mảng, không xét đến thứ tự.
*/

#include <bits/stdc++.h>
#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;

int dem[1000001] = {0};

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int n;
	cin >> n;
	vector<int> a(n);
	int max_val = INT_MIN, min_val = INT_MAX;
	long long tong = 0;
	for(int &x : a){
		cin >> x;
		dem[x]++;
		max_val = max(max_val, x);
		min_val = min(min_val, x);
	}
	for(int i = min_val; i <= max_val; i++){
		if(dem[i] != 0){
			tong += (1ll * dem[i] * (dem[i] - 1)) / 2;
		}
	}
	cout << tong;
	return 0;
}
