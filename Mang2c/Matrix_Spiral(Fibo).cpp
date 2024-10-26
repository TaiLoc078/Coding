/*
In ra ma trận xoắn ốc cấp N, với các số trong ma trận đều là các số trong dãy Fibonacci.

Đầu vào
Số nguyên dương N

Giới hạn
1≤N≤9

Đầu ra
Ma trận xoắn ốc cấp N
*/

#include <bits/stdc++.h>

using namespace std;

vector<long long> fi;

void fibo(){
	long long x1 = 0;
	long long x2 = 1;
	fi.push_back(x1);
	fi.push_back(x2);
	for(int i = 0; i < 92; i++){
		long long x = x1 + x2;
		fi.push_back(x);
		x1 = x2;
		x2 = x;
	}
}

int main(){
	int n; cin >> n;
	fibo();
	long long a[n][n];
	int cnt  = 0;
	for(int i = 0; i < (n + 1) / 2; i++){
		if(n % 2 == 0){
			for(int j = i; j < n - i; j++){
				a[i][j] = fi[cnt++];
			}
			for(int j = i + 1; j <= n - (i + 1); j++){
				a[j][n - 1 - i] = fi[cnt++];
			}
			for(int j = n - 2 - i; j >= i; j--){
				a[n - 1 - i][j] = fi[cnt++];
			}
			for(int j = n - 2 - i; j >= i + 1; j--){
				a[j][i] = fi[cnt++];
			}
		}
		else{
			if(i != n / 2){
				for(int j = i; j < n - i; j++){
					a[i][j] = fi[cnt++];
				}
				for(int j = i + 1; j <= n - (i + 1); j++){
					a[j][n - 1 - i] = fi[cnt++];
				}
				for(int j = n - 2 - i; j >= i; j--){
					a[n - 1 - i][j] = fi[cnt++];
				}
				for(int j = n - 2 - i; j >= i + 1; j--){
					a[j][i] = fi[cnt++];
				}
			}
			else{
				a[i][i] = fi[cnt];
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
