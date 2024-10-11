/*
Cho mảng a gồm n phần tử và số nguyên dương k. Đếm số lượng cặp số ai, aj (i != j) có tổng lớn hơn k.

Gợi ý : Sử dụng binary_search, đối với mỗi phần tử a[i] đếm số lượng phần tử trong mảng (đã sắp xếp) > k - a[i] bằng cách tìm vị trí đầu tiên của phần tử > k - a[i], từ vị trí này tới cuối dãy sẽ đều là các phần tử > k - a[i]

Đầu vào
Dòng thứ 1 là số lượng phần tử trong mảng và số nguyên dương k

Dòng thứ 2 là n phần tử trong mảng

Giới hạn
2<=n<=10^6

1<=k<=10^6

0<=a[i]<=10^6

Đầu ra
In ra số lượng cặp số có tổng lớn hơn k
*/

#include <bits/stdc++.h>

using namespace std;

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
		int p1 = upper_bound(a + i + 1, a  + n - 1, x - a[i]) - a;
		if(p1 != n){
			ans += (n - p1);
		}
	}
	cout << ans;
}
