/*
Cho ma trận A các số nguyên có N hàng và M cột. Tìm đường đi từ ở [1, 1] tới ô [N, M] sao cho tổng các số trên đường đi là lớn nhất có thể, biết rằng ở mỗi bước chỉ có thể đi từ ô hiện tại xuống ô phía dưới hoặc đi sang phải.

Đầu vào
Dòng đầu tiên N và M. N dòng tiếp theo mỗi dòng gồm M phần tử.

Giới hạn
1≤N,M≤100

1≤A[i][j]≤10^9

Đầu ra
In ra đường đi có tổng lớn nhất.
*/

#include <bits/stdc++.h>

using namespace std;

int dx[2] = {0, 1};
int dy[2] = {1, 0};

int n, m;
long long a[100][100];
long long res = 0;

void maximum(long long x, int i, int j){
	if(i == n - 1 && j == m - 1){
		if(x > res){
			res = x;
		}
		return;
	}
	int dong = i + dx[0];
	int cot = j + dy[0];
	if((dong >= 0 && dong < n) && (cot >= 0 && cot < m)){
		maximum(1ll * x + a[dong][cot], dong, cot);
	}
	dong = i + dx[1];
	cot = j + dy[1];
	if((dong >= 0 && dong < n) && (cot >= 0 && cot < m)){
		maximum(1ll * x + a[dong][cot], dong, cot);
	}
	
}

int main(){
	cin >> n >> m;
	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			cin >> a[i][j];
		}
	}
	maximum(a[0][0], 0, 0);
	cout << res;
}
