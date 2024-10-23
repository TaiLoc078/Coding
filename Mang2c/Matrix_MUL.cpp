/*
Cho ma trận A cỡ NxM, ma trận B cỡ MxP. Hãy tính ma trận tích của A và B.

Tham khảo cách nhân 2 ma trận : Nhân 2 ma trận

Đầu vào
Dòng đầu tiên là 3 số N, M, P

N dòng tiếp theo, mỗi dòng M của ma trận A

M dòng tiếp theo, mỗi dòng P số của ma trận B

Giới hạn
1≤N,M,P≤50

Các phần tử trong ma trận là số dương không quá 100000

Đầu ra
In ra ma trận tích của A và B 
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
	int m, n, p;
	cin >> m >> n >> p;
	int a[m][n], b[n][p];
	long long c[m][p];
	for(int i = 0; i < m; i++){
		for(int j = 0; j < n; j++){
			cin >> a[i][j];
		}
	}
	for(int i = 0; i < n; i++){
		for(int j = 0; j < p; j++){
			cin >> b[i][j];
		}
	}
	for(int i = 0; i < m; i++){
		for(int j = 0; j < p; j++){
			long long tong = 0;
			for(int d = 0; d < n; d++){
				tong += (1ll * a[i][d] * b[d][j]);
			}
			c[i][j] = tong;
		}
	}
	for(int i = 0; i < m; i++){
		for(int j = 0; j < p; j++){
			cout << c[i][j] << ' ';
		}
		cout << endl;
	}
}
