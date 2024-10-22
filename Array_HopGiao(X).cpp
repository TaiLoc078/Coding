/*
Cho 2 mảng số nguyên a và b gồm n và m phần tử. Gọi mảng c và d lần lượt là mảng chỉ bao gồm các phần tử khác nhau của a và b. Hãy tìm mảng giao và hợp của mảng c và d và liệt kê theo thứ tự tăng dần.

Đầu vào
Dòng đầu tiên là số lượng phần tử của 2 dãy n và m.

Dòng thứ 2 là n phần tử trong dãy số 1.

Dòng thứ 3 là m phần tử trong dãy thứ 2.

Giới hạn
1≤n,m≤10^6

0≤ai≤10^7

Đầu ra
Dòng đầu tiên in ra giao của 2 mảng c và d. Dòng thứ 2 in ra hợp của 2 mảng c và d
*/

#include <bits/stdc++.h>
#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;

int hop[10000001], giao[10000001] = {0};

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int n, m;
	cin >> n >> m;
	int max_val = INT_MIN, min_val = INT_MAX;
	for(int i = 0; i < n; i++){
		int x; cin >> x;
		max_val = max(max_val, x);
		min_val = min(min_val, x);
		hop[x] = 1;
		giao[x] = 1;
	}
	for(int i = 0; i < m; i++){
		int x; cin >> x;
		max_val = max(max_val, x);
		min_val = min(min_val, x);
		hop[x] = 1;
		if(giao[x] >= 1){
			giao[x]++;
		}
	}
	for(int i = min_val; i <= max_val; i++){
		if(giao[i] >= 2){
			cout << i << ' ';
		}
	}
	cout << endl;
	for(int i = min_val; i <= max_val; i++){
		if(hop[i] == 1){
			cout << i << ' ';
		}
	}
	return 0;
}
