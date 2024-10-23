/*Để sắp xếp tăng dần một mảng A gồm n phần tử a1, a2,..., an, thuật toán sắp xếp trộn (MergeSort) áp dụng chia đôi mảng A thành hai mảng B và C, sắp xếp B, C và sau đó trộn B và C cho ra mảng A tăng dần.

Ví dụ minh họa phương pháp trộn : - Mảng B gồm 4 phần tử b1, b2, b3, b4 đã sắp tăng dần: 1 2 4 6 - Mảng C gồm 4 phần tử c1, c2, c3, c4 đã sắp tăng dần: 3 5 8 9 Nếu trộn hai mảng trên theo dãy thứ tự trộn b1, b2, c1, b3, c2, b4, c3, c4 thì có được mảng sắp là 1 2 3 4 5 6 8 9. Cho một mảng B gồm n phần tử và mảng C gồm m phần tử. Hãy in ra dãy thứ tự trộn sao cho nếu áp dụng dãy thứ tự trộn trên thì mảng kết quả được sắp xếp tăng dần.

Đầu vào
• Dòng đầu tiên là hai số nguyên n, m cách nhau một khoảng trắng là số phần tử của mảng B và mảng C.

• Dòng thứ 2 gồm n số nguyên b1, b2,..., bn, mỗi số cách nhau một khoảng trắng.

• Dòng thứ 3 gồm m số nguyên c1, c2,..., cm, mỗi số cách nhau một khoảng trắng.

Giới hạn
1<=n,m<=10^6

0<=b[i],c[i]<=10^6

Đầu ra
In ra dãy là thứ tự trộn, trong trường hợp trong 2 mảng b và c có phần tử có cùng giá trị thì in ra phần tử ở mảng b trước.*/


#include <bits/stdc++.h>
#include <iostream>
#include <iomanip>
#include <math.h>
#include <algorithm>

using namespace std;

void merge(int b[], int l, int r){
	int mid = (l + r) / 2;
	int n1 = mid - l + 1, n2 = r - mid;
	int x[n1], y[n2];
	for(int i = l; i <= mid; i++){
		x[i - l] = b[i];
	}
	for(int j = mid + 1; j <= r; j++){
		y[j - mid - 1] = b[j];
	}
	int i = 0, j = 0, tmp = l;
	while(i < n1 && j < n2){
		if(x[i] <= y[j]){
			b[tmp] = x[i];
			i++, tmp++;
		}
		else{
			b[tmp] = y[j];
			j++, tmp++;
		}
	}
	while(i < n1){
		b[tmp++] = x[i++];
	}
	while(j < n2){
		b[tmp++] = y[j++];
	}
}

void mergeSort(int b[], int l, int r){
	if(l < r){
		int mid = (l + r) / 2;
		mergeSort(b, l, mid);
		mergeSort(b, mid + 1, r);
		merge(b, l, r);
	}
}

int main(){
	int n, m;
	cin >> n >> m;
	int b[n], c[m];
	for(int i = 0; i < n; i++){
		cin >> *(b + i);
	}
	for(int i = 0; i < m; i++){
		cin >> *(c + i);
	}
	mergeSort(b, 0, n - 1);
	mergeSort(c, 0, m - 1);
	int i = 0, j = 0;
	while(i < n && j < m){
		if(b[i] <= c[j]){
			cout << 'b' << i + 1 << ' ';
			i++;
		}
		else{
			cout << 'c' << j + 1 << ' ';
			j++;
		}
	}
	while(i < n){
		cout << 'b' << i + 1 << ' ';
		i++;
	}
	while(j < m){
		cout << 'c' << j + 1 << ' ';
		j++;
	}
	return 0;
}
