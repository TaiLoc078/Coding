/*Ca sĩ nổi tiếng Lệ Rơi vừa nhận được các lời mời lưu diễn của n đoàn ca nhạc. Đoàn thứ i mời lưu diễn từ ngày a[i] đến ngày b[i] (a[i], b[i] là các số nguyên, a[i] ≤ b[i]). Tuy nhiên tại một thời điểm, Lệ Rơi chỉ có thể tham gia hát cho một đoàn duy nhất mà thôi. Với mong muốn đem lời ca tiếng hát của mình đến nhiều khán giả nhất, Lệ Rơi quyết định sẽ chọn tham gia nhiều đoàn nhất có thể. Bạn hãy tính thử xem Lệ Rơi nên chọn tham gia những đoàn nào để số lượng đoàn là nhiều nhất mà không bị trùng nhau về mặt thời gian.

Đầu vào
• Dòng thứ nhất là số nguyên n là số đoàn ca nhạc.

• Trong n dòng tiếp theo, dòng thứ i gồm hai số a[i], b[i] cách nhau một khoảng trắng là ngày bắt đầu và ngày kết thúc lưu diễn của đoàn thứ i.

Giới hạn
1<=n<=10^5

1<=ai<=bi<=10^6

Đầu ra
Số nguyên xác định số lượng đoàn nhiều nhất mà Lệ Rơi có thể tham gia.*/


#include<bits/stdc++.h>
#include<iostream>
#include<iomanip>
#include<math.h>
#include<algorithm>

using namespace std;

bool cmp(pair<int, int> a, pair<int, int> b){
	return a.second < b.second;
}

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	int n; cin >> n;
	pair<int, int> a[n];
	for(int i = 0; i < n; i++){
		cin >> a[i].first >> a[i].second;
	}
	sort(a, a + n, cmp);
	int dem = 1;
	int luu = a[0].second;
	for(int i = 1; i < n; i++){
		if(a[i].first > luu){
			dem += 1;
			luu = a[i].second;
		}
	}
	cout << dem;
	return 0;
}
