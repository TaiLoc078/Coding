/*
Xây dựng ma trận xoắn ốc cấp N

Đầu vào
Số nguyên dương N là cấp của ma trận xoáy ốc cần xây dựng.

Giới hạn
1≤N≤100

Đầu ra
In ra ma trận xoáy ốc.
*/

#include <bits/stdc++.h>

using namespace std;

int main(){
	int n; cin >> n;
	int a[n][n];
	int cnt  = 1;
	for(int i = 0; i < (n + 1) / 2; i++){
		if(n % 2 == 0){
			for(int j = i; j < n - i; j++){
				a[i][j] = cnt++;
			}
			for(int j = i + 1; j <= n - (i + 1); j++){
				a[j][n - 1 - i] = cnt++;
			}
			for(int j = n - 2 - i; j >= i; j--){
				a[n - 1 - i][j] = cnt++;
			}
			for(int j = n - 2 - i; j >= i + 1; j--){
				a[j][i] = cnt++;
			}
		}
		else{
			if(i != n / 2){
				for(int j = i; j < n - i; j++){
					a[i][j] = cnt++;
				}
				for(int j = i + 1; j <= n - (i + 1); j++){
					a[j][n - 1 - i] = cnt++;
				}
				for(int j = n - 2 - i; j >= i; j--){
					a[n - 1 - i][j] = cnt++;
				}
				for(int j = n - 2 - i; j >= i + 1; j--){
					a[j][i] = cnt++;
				}
			}
			else{
				a[i][i] = cnt;
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
