/*
Một số được coi là đẹp nếu chữ số đầu gấp đôi chữ số cuối hoặc ngược lại, đồng thời các chữ số từ vị trí thứ 2 đến gần cuối thỏa mãn là một số thuận nghịch.

Ví dụ : các số 36788766; 12345654322 là các số đẹp. Viết chương trình kiểm tra số đẹp theo tiêu chí trên.

Đầu vào
Số nguyên dương n

Giới hạn
99≤n≤10^18

Đầu ra
Ghi ra YES tương ứng với số đẹp, NO trong trường hợp ngược lại
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

int ktra(ll n){
	int du = n % 10;
	ll c = n;
	int b;
	int dem = 0;
	while(n != 0){
		dem += 1;
		int a = n % 10;
		n /= 10;
		if(n == 0){
			b = a;	
		}
	}
	dem -= 1;
	ll tich = 1;
	while(dem--){
		tich *= 10;
	}
	c = (c - (b * tich)) / 10;
	ll d = c;
	ll lat = 0;
	while(c != 0){
		int du1 = c % 10;
		lat = lat * 10 + du1;
		c /= 10;
	}
	if(du == 2 * b || 2 * du == b){
		if(lat == d){
			return 1;
		}
	}
	return 0;
}


int main(){
	std::ios::sync_with_stdio(false);
	cout.tie(0);
	cin.tie(0);
	ll n;
	cin >> n;
	if(ktra(n)){
		cout << "YES";
	}
	else{
		cout << "NO";
	}
	return 0;
}
