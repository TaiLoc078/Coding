/*
Cho mảng a gồm n phần tử và số nguyên dương k. Đếm số lượng cặp số ai, aj (i != j) có tổng nhỏ hơn k.

Gợi ý : Sort mảng tăng dần, duyệt từng a[i] trong mảng dùng tìm kiếm nhị phân đếm nhanh trong đoạn [i + 1, n - 1] có bao nhiêu số < k - a[i] bằng cách tìm vị trí cuối cùng của phần tử có giá trị < k - a[i]. Tránh tìm lại từ đầu mảng vì sẽ đếm 1 cặp nhiều lần và cặp xét 2 số a[i] với nhau.

Đầu vào
Dòng thứ 1 là số lượng phần tử trong mảng và số nguyên dương k

Dòng thứ 2 là n phần tử trong mảng

Giới hạn
2<=n<=10^6

1<=k<=10^6

0<=a[i]<=10^6;

Đầu ra
In ra số lượng cặp số có tổng nhỏ hơn k
*/

#include <bits/stdc++.h>

using namespace std;

int last_pos(int a[], int l, int r, int x){
	int res = -1;
	while(l <= r){
		int mid = (l + r) / 2;
		if(a[mid] < x){
			res = mid;
			l = mid + 1;
		}
		else{
			r = mid - 1;
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
		if((x - a[i]) <= a[i]){
			break;
		}
		int p2 = last_pos(a, i + 1, n - 1, x - a[i]);
		if(p2 != -1){
			ans += (p2 - i);
		}
	}
	cout << ans;
}
