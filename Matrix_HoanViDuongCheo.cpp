/*
Cho ma trận vuông cỡ NxN gồm N hàng, mỗi hàng N cột. Hãy hoán vị các phần tử trên 2 đường chéo chính và phụ của ma trận.

Đầu vào
Dòng đầu tiên là số N. N dòng tiếp theo mỗi dòng có N số.

Giới hạn
1≤n≤205

Các phần tử trong ma trận là số dương không quá 10^9.

Đầu ra
In ra ma trận sau khi hoán vị 2 đường chéo
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
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			if((i == 0 || i == n - 1) && j == i){
				int hieu = abs(i - (n - 1));
				swap(a[i][j], a[i][hieu]);
			}
			else{
				if(n % 2 != 0 && i == (n - 1) / 2){
					break;
				}
				else{
					if(j == i){
						int hieu = abs(i - (n - 1));
						swap(a[i][j], a[i][hieu]);
					}
				}
			}
		}
	}
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			cout << a[i][j] << ' ';
		}
		cout << endl;
	}
}
