/*
Dãy số Fibonacci được định nghĩa như sau:

F1 = 0, F2 = 1; Fi = F[i-1] + F[i-2].

Hãy viết chương trình in ra số Fibonacci thứ n.

Đầu vào
Số nguyên dương n

Giới hạn
1≤n≤10^6

Đầu ra
Số fibonacci thứ n lấy dư với 1000000007
*/

#include <bits/stdc++.h>
#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;

#define ifor(i, a, b) for(int i = a; i <= b; i++)
#define dfor(i, a, b) for(int i = a; i >= b; i--)
typedef long long ll;

//const int b = 1e7;
//int n[b + 1];
//void sang(){
//	for(int i = 0; i <= b; i++){
//		n[i] = 1;
//	}
//	n[0] = n[1] = 0;
//	for(int i = 2; i <= sqrt(b); i++){
//		if(n[i] == 1){
//			for(int j = i * i; j <= b; j += i){
//				n[j] = 0;
//			}
//		}
//	}
//}

//int ngto(ll a){
//	for(int i = 2; i <= sqrt(a); i++){
//		if(a % i == 0){
//			return 0;
//		}
//	}
//	return 1;
//}

ll fibo(int n){
	ll fi[n];
	fi[0] = 0, fi[1] = 1;
	for(int i = 2; i < n; i++){
		fi[i] = ((fi[i - 1] % (1000000007)) + (fi[i - 2] % (1000000007))) % (1000000007);
	}
	return fi[n - 1];
}

int main(){
	std::ios::sync_with_stdio(false);
	cout.tie(0);
	cin.tie(0);
	int n;
	cin >> n;
	cout << fibo(n);
	return 0;
}
