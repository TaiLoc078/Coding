/*Có n đứa trẻ muốn đi đu quay, và nhiệm vụ của bạn là tìm một chiếc thuyền gondola cho mỗi đứa trẻ. Mỗi chiếc gondola có thể có một hoặc hai người trong đó và ngoài ra, tổng trọng lượng của một chiếc gondola không được vượt quá x. Bạn biết cân nặng của mọi đứa trẻ. Số lượng thuyền gondola tối thiểu cần thiết cho trẻ em là bao nhiêu?

Đầu vào
Dòng nhập đầu tiên chứa hai số nguyên n và x: số đứa trẻ và trọng lượng tối đa cho phép.

Dòng tiếp theo chứa n số nguyên p1, p2,…, pn: trọng lượng của mỗi đứa trẻ

Giới hạn
1≤ n ≤2.10^5

1≤ x ≤10^9

1≤ pi ≤ x

Đầu ra
In một số nguyên: số lượng thuyền gondola tối thiểu.*/


#include<bits/stdc++.h>
#include<iostream>
#include<iomanip>
#include<math.h>
#include<algorithm>

using namespace std;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	int n, x; cin >> n >> x;
	int a[n];
	for(int &x : a){
		cin >> x;
	}
	sort(a, a + n);
	int l = 0, r = n - 1;
	int dem = 0;
	while(l <= r){
		if(a[l] + a[r] <= x){
			dem += 1;
			++l; --r;
		}
		else{
			dem += 1;
			--r;
		}
	}
	cout << dem;
	return 0;
}