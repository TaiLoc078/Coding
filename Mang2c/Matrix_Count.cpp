/*
Cho ma trận nhị phân gồm N hàng và M cột chỉ bao gồm các số 0 và 1. Hãy đếm số lượng miền các số 1 trong ma trận, các ô số 1 được coi là cùng miền nếu chúng có chung đỉnh.

Đầu vào
Dòng đầu tiên N và M. N dòng tiếp theo mỗi dòng gồm M phần tử.

Giới hạn
1≤N,M≤50.

Đầu ra
In ra số lượng miền số 1 trong ma trận.
*/

#include<bits/stdc++.h>

using namespace std;

void check(int a[][100], int i, int j, int n, int m){
	if((i >= 0 && i < n) && (j >= 0 && j < m) && a[i][j] == 1){
		a[i][j] = 0;
	}
	else{
		return;
	}
	check(a, i - 1, j, n, m);
	check(a, i + 1, j, n, m);
	check(a, i, j - 1, n, m);
	check(a, i, j + 1, n, m);
	check(a, i - 1, j - 1, n, m);
	check(a, i - 1, j + 1, n, m);
	check(a, i + 1, j - 1, n, m);
	check(a, i + 1, j + 1, n, m);
}

int main(){
	int n, m; cin >> n >> m;
	int a[100][100];
	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			cin >> a[i][j];
		}
	}
	int cnt = 0;
	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			if(a[i][j] == 1){
				cnt++;
				check(a, i, j, n, m);
			}
		}
	}
	cout << cnt;
}
