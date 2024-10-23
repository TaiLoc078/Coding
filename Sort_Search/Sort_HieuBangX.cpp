/*
Cho mảng A[] gồm N phần tử và số X. Nhiệm vụ của bạn là tìm cặp phần tử A[i] - A[j] = X. Nếu tồn tại A[i] - A[j] = X đưa ra 1, ngược lại đưa ra -1.

Đầu vào
Dòng thứ nhất là cặp số N, X

Dòng tiếp theo là N số A[i] là các phần tử của mảng A[].

Giới hạn
1≤ N ≤10^5

1≤ X, A[i] ≤10^5.

Đầu ra
In ra 1 nếu tìm thấy một cặp số có hiệu bằng X, ngược lại in ra -1.
*/

#include<bits/stdc++.h>
#include<iostream>
#include<iomanip>
#include<math.h>
#include<algorithm>

using namespace std;

int find(int a[], int n, int x){
	int l = 0, r = n - 1;
	while(l <= r){
		int mid = (l + r) / 2;
		if(a[mid] == x){
			return 1;
		}
		else if(a[mid] > x){
			r = mid - 1;
		}
		else{
			l = mid + 1;
		}
	}
	return -1;
}

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	int n, x; cin >> n >> x;
	int a[n];
	for(int &x : a){
		cin >> x;
	}
	sort(a, a + n);
	for(int i = 0; i < n; i++){
		int timKiem = find(a, n, a[i] + x);
		if(timKiem == 1){
			cout << 1;
			return 0;
		}
	}
	cout << -1;
	return 0;
}
