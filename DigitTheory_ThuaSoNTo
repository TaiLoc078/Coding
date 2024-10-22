/*
Đưa ra số nguyên tố thứ k trong phân tích thừa số nguyên tố của một số nguyên dương n. Ví dụ n = 28, k = 3 ta có kết quả là 7 vì 28 = 2x2x7.

Đầu vào
2 số n,k

Giới hạn
1≤n,k≤10^9

Đầu ra
In ra thừa số nguyên tố thứ k của n, nếu n không có thừa số nguyên tố thứ k thì in ra -1.
*/

#include <bits/stdc++.h>
#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;

int check(int a){
	for(int i = 2; i <= sqrt(a); i++){
		if(a % i == 0){
			return 0;
		}
	}
	return a > 1;
}

int ngto(long long n, long long k){
	long long dem = 0;
	for(int i = 2; i <= sqrt(n); i++){
		if(n % i == 0 && check(i)){
			n /= i;
			dem += 1;
			if(dem == k){
				return i;
			}
			while(n % i == 0){
				n /= i;
				dem += 1;
				if(dem == k){
					return i;
				}	
			}
		}
	}
	if(n > 1){
		dem += 1;
		if(dem == k){
			return n;
		}
	}
	return 0;
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	long long n, k;
	cin >> n >> k;
	if(ngto(n, k)){
		cout << ngto(n, k);
	}
	else{
		cout << "-1";
	}
	return 0;
}
