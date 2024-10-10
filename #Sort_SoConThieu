/*Cho mảng A[] gồm n số nguyên dương. Gọi L, R là min và max các phần tử của A[].

Nhiệm vụ của bạn là tìm số phần tử cần thiết cần thêm vào mảng để mảng có đầy đủ các số trong khoảng [L, R].

Ví dụ : A[] = {5, 7, 9, 3, 6, 2, 10, 11, 1 } ta nhận được kết quả là 2 tương ứng với các số còn thiếu là 4, 8.

Đầu vào
Dòng đầu tiên đưa vào n, tương ứng với số phần tử của mảng A[]

Dòng tiếp theo là n số A[i] các số được viết cách nhau một vài khoảng trống.

Giới hạn
1=n<=10^6

0<=a[i]<=10^6

Đầu ra
In ra số lượng số còn thiếu*/


#include <bits/stdc++.h>
#include <iostream>
#include <iomanip>
#include <math.h>
#include <algorithm>

using namespace std;

int main(){
	int n;
	cin >> n;
	int a[n];
	for(int &x : a){
		cin >> x;
	}
	sort(a, a + n);
	long long dem = 0;
	for(int i = 1; i < n; i++){
		if(a[i] - a[i - 1] > 1){
			dem += (a[i] - a[i - 1] - 1);
		}
	}
	cout << dem;
	return 0;
}
