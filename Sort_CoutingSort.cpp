//Bài toán đếm cộng dồn nhưng giới hạn về mặt số lượng phần tử bên trong mảng

#include <bits/stdc++.h>
#include <iostream>
#include <iomanip>
#include <math.h>
#include <algorithm>

using namespace std;

int dem[10000001] = {0};

int main(){
	int n; cin >> n;
	int min = INT_MAX, max = INT_MIN;
	for(int i = 0; i < n; i++){
		int x = 10;
		if(x > max){
			max = x;
		}
		if(x < min){
			min = x;
		}
		dem[x]++;
	}
	for(int i = min; i <= max; i++){
		if(dem[i]){
			while(dem[i]--){
				cout << i << ' ';
			}
		}
	}
	return 0;
}