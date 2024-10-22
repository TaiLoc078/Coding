/*
Cho 2 mảng số nguyên a và b gồm n và m phần tử, các phần tử trong mảng là đôi một khác nhau, các phần tử trong 2 mảng đã được sắp xếp theo thứ tự tăng dần. Hãy tìm mảng giao và mảng hợp của 2 mảng. Độ phức tạp mong muốn O(n+m)

Đầu vào
Dòng đầu tiên là số lượng phần tử của 2 dãy n và m.

Dòng thứ 2 là n phần tử trong dãy số 1.

Dòng thứ 3 là m phần tử trong dãy thứ 2.

Giới hạn
1≤n,m≤10^7

-10^7≤ai≤10^7

Đầu ra
Dòng đầu tiên in ra mảng hợp của 2 mảng

Dòng thứ 2 in ra mảng giao của 2 mảng
*/

#include <bits/stdc++.h>
#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int n, m;
	cin >> n >> m;
	int a[n], b[m];
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	for(int j = 0; j < m; j++){
		cin >> b[j];
	}
	int i = 0, j = 0;
	vector<int> hop;
	vector<int> giao;
	while(i < n && j < m){
		if(a[i] == b[j]){
			giao.push_back(a[i]);
			hop.push_back(a[i]);
			i++; j++;
		}
		else if(a[i] < b[j]){
			hop.push_back(a[i]);
			i++;
		}
		else{
			hop.push_back(b[j]);
			j++;
		}
	}
	while(i < n){
		hop.push_back(a[i]);
		i++;
	}
	while(j < m){
		hop.push_back(b[j]);
		j++;
	}
	for(int x : hop){
		cout << x << ' ';
	}
	cout << endl;
	for(int y : giao){
		cout << y << ' ';
	}
	return 0;
}
