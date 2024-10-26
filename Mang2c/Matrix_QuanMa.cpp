/*
Cho bàn cờ vua cỡ N * N, các ô trên bàn cờ có giá trị là 0 hoặc 1. Một con mã xuất phát từ ô (s, t) và muốn di chuyển tới ô (u, v), con mã chỉ có thể di chuyển ở các ô mà tại ô đó có giá trị là 1 và nó có thể di chuyển qua lại 1 ô nhiều lần. Hãy xác định xem con mã có thể tìm được đường đi hay không, dữ liệu đảm bảo ô (s, t) và ô (u, v) đều có giá trị là 1.

Đầu vào
Dòng đầu tiên N.

Dòng thứ 2 là 4 số s, t, u , v.

N dòng tiếp theo mỗi dòng gồm N phần tử.

Giới hạn
1≤N,M≤100

1≤s,t,u,v≤N

0≤A[i][j]≤1

Đầu ra
In YES nếu con mã có thể tìm được đường đi, ngược lại in NO.


*/

#include <bits/stdc++.h>

using namespace std;

int dx[8] = {-2, -1, 1, 2, 2, 1, -1, -2};
int dy[8] = {-1, -2, -2, -1, 1, 2, 2, 1};

int n, s, t, u, v;
long long a[100][100];
int res = 0;

void check(long long &x, int i, int j){
	if(i == u && j == v){
		if(x == 1){
			res = 1;
		}
		return;
	}
	x = 0;
	for(int b = 0; b < 8; b++){
		int dong = i + dx[b];
		int cot = j + dy[b];
		if((dong >= 0 && dong < n) && (cot >= 0 && cot < n) && a[dong][cot] == 1){
			check(a[dong][cot], dong, cot);
		}
	}
}

int main(){
	cin >> n >> s >> t >> u >> v;
	s--; t--; u--; v--;
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			cin >> a[i][j];
		}
	}
	check(a[s][t], s, t);
	if(res == 1){
		cout << "YES";
	}
	else{
		cout << "NO";
	}
}
