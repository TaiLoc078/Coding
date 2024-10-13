/*
Cho ma trận vuông cỡ NxN gồm N hàng, mỗi hàng N cột. Hãy đếm các số thuận nghịch thuộc tam giác dưới của ma trận trên.

Tam giác dưới là những phần tử thuộc đường chéo chính trở xuống.

Đầu vào
Dòng đầu tiên là số N. N dòng tiếp theo mỗi dòng có N số.

Giới hạn
1≤N≤200

Các phần tử trong ma trận là số dương không quá 10^9.

Đầu ra
In ra số lượng số thuận nghịch trong ma trận.
*/

#include<bits/stdc++.h>

using namespace std;

bool check(int x){
	int a = x;
	int rev = 0;
	while(x != 0){
		int du = x % 10;
		rev = rev * 10 + du;
		x /= 10;
	}
	if(a == rev){
		return true;
	}
	return false;
}

int main(){
	int n; cin >> n;
	int a[n][n];
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			cin >> a[i][j];
		}
	}
	int cnt = 0;
	for(int i = 0; i < n; i++){
		for(int j = 0; j <= i; j++){
			if(check(a[i][j])){
				cnt += 1;
			}
		}
	}
	cout << cnt;
}
