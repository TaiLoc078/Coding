/*
Cho một ma trận nhị phân có N hàng và M cột, một con chuột bắt đầu từ ô có tọa độ [s, t] và tìm đường đi tới ô [u, v], biết rằng ở mỗi bước con chuột có thể di chuyển từ ô hiện tại sang các ô chung cạnh với ô hiện tại và số ở ô chung cạnh là số 1.

Bạn chỉ được đi qua 1 ô đúng 1 lần hãy kiểm tra xem con chuột có thể tìm được đường đi tới ô [u, v] hay không ? Dữ liệu đảm bảo 2 ô [s, t] và ô [u, v] đều bằng 1.

Gợi ý : Loang từ ô (u, v) xem ô (s, t) có bị đi qua không, nếu có là sẽ tìm được đường đi

Đầu vào
Dòng đầu tiên N và M.

Dòng thứ 2 là 4 số s, t, u , v

N dòng tiếp theo mỗi dòng gồm M phần tử.

Giới hạn
1≤N,M≤100

1≤s,u≤N

1≤t,v≤M

Đầu ra
In YES nếu con chuột có thể tìm được đường đi, ngược lại in NO.
*/

#include <bits/stdc++.h>

using namespace std;

int dx[4] = {-1, 0, 1, 0};
int dy[4] = {0, -1, 0, 1};

int n, m, s, t, u, v;
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
	for(int b = 0; b < 4; b++){
		int dong = i + dx[b];
		int cot = j + dy[b];
		if((dong >= 0 && dong < n) && (cot >= 0 && cot < m) && a[dong][cot] == 1){
			check(a[dong][cot], dong, cot);
		}
	}
}

int main(){
	cin >> n >> m >> s >> t >> u >> v;
	s--; t--; u--; v--;
	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
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
