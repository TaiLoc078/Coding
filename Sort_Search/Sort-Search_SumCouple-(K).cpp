/*
Cho mảng a gồm n phần tử và số nguyên dương k. Đếm số lượng cặp số ai, aj (i != j) có tổng bằng k.

Gợi ý : Sắp xếp mảng tăng dần sau đó với mỗi phần tử a[i] trong mảng tìm xem trong đoạn [i + 1, n - 1] có bao nhiêu phần tử có giá trị là k - a[i], bằng cách tìm vị trí đầu tiên và vị trí cuối cùng của phần tử có giá trị là k - a[i] => Số lượng

Đầu vào
Dòng thứ 1 là số lượng phần tử trong mảng và số nguyên dương k

Dòng thứ 2 là n phần tử trong mảng

Giới hạn
2<=n<=10^6

1<=k<=10^6

0<=a[i]<=10^6

Đầu ra
In ra số lượng cặp số có tổng bằng k
*/

#include <bits/stdc++.h>

using namespace std;

int first_pos(int a[], int l, int r, int x){
	int res = -1;
	while(l <= r){
		int mid = (l + r) / 2;
		if(a[mid] == x){
			res = mid;
			r = mid - 1;
		}
		else if(a[mid] > x){
			r = mid - 1;
		}
		else{
			l = mid + 1;
		}
	}
	return res;
}

int last_pos(int a[], int l, int r, int x){
	int res = -1;
	while(l <= r){
		int mid = (l + r) / 2;
		if(a[mid] == x){
			res = mid;
			l = mid + 1;
		}
		else if(a[mid] > x){
			r = mid - 1;
		}
		else{
			l = mid + 1;
		}
	}
	return res;
}

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	int n, x; cin >> n >> x;
	int a[n];
	for(int &x : a){
		cin >> x;
	}
	sort(&a[0], &a[n]);
	long long ans = 0;
	for(int i = 0; i < n - 1; i++){
		if((x - a[i]) < a[i]){
			break;
		}
		int p1 = first_pos(a, i + 1, n - 1, x - a[i]);
		int p2 = last_pos(a, i + 1, n - 1, x - a[i]);
		if(p1 != -1){
			ans += (p2 - p1 + 1);
		}
	}
	cout << ans;
}
