/*
Cho ma trận vuông cỡ NxN gồm N hàng, mỗi hàng N cột. Hãy đếm các số nguyên tố trên đường chéo chính và đường chéo phụ, mỗi phần tử là số nguyên tố thỏa mãn chỉ đếm 1 lần. Tức là khi N lẻ, thì chéo chính và phụ sẽ giao nhau ở giữa, và nếu số ở vị trí giao nhau đó là số nguyên tố thì bạn chỉ đếm 1 lần thôi

Đầu vào
Dòng đầu tiên là số N. N dòng tiếp theo mỗi dòng có N số.

Giới hạn
1≤N≤200

Các phần tử trong ma trận là số dương không quá 10^9

Đầu ra
In ra số lượng số nguyên tố trên đường chéo chính và phụ
*/

#include<bits/stdc++.h>

using namespace std;

int check(int x){
	for(int i = 2; i <= sqrt(x); i++){
		if(x % i == 0){
			return 0;
		}
	}
	return x > 1;
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
		for(int j = 0; j < n; j++){
			if((i == 0 || i == n - 1) && (j == i || j == (n - 1) - i)){
				if(check(a[i][j])){
					cnt += 1;
				}
			}
			else{
				if(n % 2 != 0 && i == (n - 1) / 2 && j == i){
					if(check(a[i][j])){
						cnt += 1;
					}
				}
				else{
					if(j == i || j == (n - 1) - i){
						if(check(a[i][j])){
							cnt += 1;
						}
					}
				}
			}
		}
	}
	cout << cnt;
}
