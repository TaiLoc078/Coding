//Phụ thuộc vào pivot, thuật toán nhanh nhưng không ổn định

#include <bits/stdc++.h>
#include <iostream>
#include <iomanip>
#include <math.h>
#include <algorithm>

using namespace std;

int quick(int a[], int l, int r){
	int pivot = a[r];
	int i = l - 1;
	for(int j = l; j < r; j++){
		if(a[j] <= pivot){
			i += 1;
			swap(a[j], a[i]);
		}
	}
	swap(a[i + 1], a[r]);
	return i + 1;
}

void quickSort(int a[], int l, int r){
	if(l < r){
		int x = quick(a, l, r);
		quickSort(a, l, x - 1);
		quickSort(a, x + 1, r);
	}
}

int main(){
	int n; cin >> n;
	int a[n];
	for(int &x : a){
		cin >> x;
	}
	quickSort(a, 0, n - 1);
	for(int x : a){
		cout << x << ' ';
	}
	return 0;
}
