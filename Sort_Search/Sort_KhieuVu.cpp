/*Trong lớp học có n bạn nam và m bạn nữ. Các bạn nam có chiều cao là a1, a2, ..., an. Các bạn nữ có chiều cao là b1, b2, ..., bm.

Nhân dịp lễ tổng kết cuối năm, cả lớp dự định tổ chức buổi khiêu vũ nhưng có điều kiện là trong một đôi khiêu vũ bất kỳ, bạn nam phải cao hơn bạn nữ. Và mỗi bạn không tham gia quá 1 đôi khiêu vũ. Hãy tính số lượng cặp đôi nhiều nhất thỏa mãn yêu cầu trên.

Đầu vào
Dòng thứ nhất là hai số n, m mỗi số cách nhau một khoảng trắng.

Dòng thứ hai gồm n số nguyên a1, a2, ..., an là chiều cao các bạn nam.

Dòng thứ ba gồm m số nguyên b1, b2, ..., bm là chiều cao các bạn nữ.

Giới hạn
1<=n,m<=10^5

1<=a[i],b[i]<=10^6

Đầu ra
In ra số lượng cặp khiêu vũ nhiều nhất ghép được.*/


#include <bits/stdc++.h>
#include <iostream>
#include <iomanip>
#include <math.h>
#include <algorithm>

using namespace std;

int main(){
	int n, m;
	cin >> n >> m;
	int a[n], b[m];
	for(int &x : a){
		cin >> x;
	}
	for(int &x : b){
		cin >> x;
	}
	sort(a, a + n, greater<int>());
	sort(b, b + m, greater<int>());
	int dem = 0;
	int i = 0, j = 0;
	while(i < n && j < m){
		if(a[i] > b[j]){
			dem += 1;
			i++, j++;
		}
		else{
			j++;
		}
	}
	cout << dem;
	return 0;
}