/*
Cho ma trận A các số nguyên có N hàng và M cột. Điểm được coi là cực đại trong ma trận nếu nó lớn hơn tất các số ở các số ở ô xung quanh mà chung đỉnh với nó(có 8 ô chung đỉnh). Hãy đếm xem trong ma trận có bao nhiêu điểm cực đại. Những ô ở biên của ma trận không có thể có khong đủ 8 ô chung đỉnh

Đầu vào
Dòng đầu tiên N và M. N dòng tiếp theo mỗi dòng gồm M phần tử.

Giới hạn
1≤N,M≤100

1≤A[i][j]≤10^9

Đầu ra
In ra số lượng các điểm cực đại của ma trận.
*/

#include <bits/stdc++.h>

using namespace std;

int dx[8] = {-1, -1, 0, 1, 1, 1, 0, -1};
int dy[8] = {0, -1, -1, -1, 0, 1, 1, 1};

int n, m;
int a[100][100];

bool check(int q, int i, int j){
	for(int x = 0; x < 8; x++){
		int dong = i + dx[x];
		int cot = j + dy[x];
		if((dong >= 0 && dong < n) && (cot >= 0 && cot < m)){
			if(a[dong][cot] >= q){
				return false;
			}
		}
	}
	return true;
}

int main(){
	cin >> n >> m;
	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			cin >> a[i][j];
		}
	}
	int cnt = 0;
	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			if(check(a[i][j], i, j)){
				cnt++;
			}
		}
	}
	cout << cnt;
}
