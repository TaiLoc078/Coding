/*
Cho ma trận vuông cỡ NxN gồm N hàng, mỗi hàng N cột. Hãy sắp xếp các phần tử trong ma trận theo cột theo thứ tự tăng dần.

Gợi ý : Tạo 1 ma trận chuyển vị => sort ma trận chuyển vị theo hàng => In ra theo cột của ma trận chuyển vị

Đầu vào
Dòng đầu tiên là số N. N dòng tiếp theo mỗi dòng có N số.

Giới hạn
1≤N≤200

Các phần tử trong ma trận là số dương không quá 10^9

Đầu ra
In ra ma trận sau khi đã sắp xếp theo cột tăng dần.
*/

#include<bits/stdc++.h>

using namespace std;

int main(){
	int n; cin >> n;
	int a[n][n];
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			cin >> a[i][j];
		}
	}
	multiset<int> mset;
	int b[n][n];
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			mset.insert(a[j][i]);
		}
		int j = 0;
		for(int x : mset){
			b[j++][i] = x;
		}
		mset.clear();
	}
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			cout << b[i][j] << ' ';
		}
		cout << endl;
	}
}
