//Tìm số lớn hơn tại chữ số a[i] và thay vào vị trí i đó nhưng số lớn nhất thì ký hiệu là "_" do không còn số nào lớn hơn để thay thế

#include<bits/stdc++.h>
#include<iostream>
#include<iomanip>
#include<math.h>
#include<algorithm>

using namespace std;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	int n; cin >> n;
	pair<int, int> a[n];
	int b[n];
	for(int i = 0; i < n; i++){
		cin >> a[i].first;
		a[i].second = i;
	}
	sort(a, a + n);
	int j = 0;
	for(int i = 0; i < n ; i++){
		while(j < n && a[j].first == a[i].first){
			j++;
		}
		if(j < n){
			b[a[i].second] = a[j].first;
		}
		else{
			b[a[i].second] = -1;
		}
	}
	for(int i = 0; i < n; i++){
		if(b[i] != -1){
			cout << b[i] << ' ';
		}
		else{
			cout << "_ ";
		}
	}
	return 0;
}