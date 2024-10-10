/*Vanya đi bộ vào ban đêm dọc theo một con đường thẳng dài có độ dài l, được thắp sáng bởi n chiếc đèn lồng. Xét hệ trục tọa độ với điểm đầu của đường phố tương ứng với điểm 0 và điểm cuối của nó tương ứng với điểm l. Khi đó đèn lồng thứ i ở điểm a[i]. Đèn lồng chiếu sáng tất cả các điểm trên đường phố cách nó nhiều nhất là d, trong đó d là một số dương, chung cho tất cả các đèn lồng. Vanya tự hỏi: bán kính ánh sáng tối thiểu d mà những chiếc đèn lồng phải có để thắp sáng cả con phố?

Gợi ý : Sort => Xét 2 đèn lồng đứng cạnh nhau => khoảng cách giữa 2 đèn này sẽ là 2 lần bán kính. Xét cả khoảng cách giữa đèn lồng đầu tiên tới đầu đường (1d) và từ đèn lồng cuối tới cuối đường (d). Chọn ra bán kinh lớn nhất.

Đầu vào
Dòng đầu tiên chứa hai số nguyên n, l (1 ≤ n ≤ 10^5, 1 ≤ l ≤ 10^9) - số lượng đèn lồng và chiều dài đường phố tương ứng. Dòng tiếp theo chứa n số nguyên a[i] (0 ≤ ai ≤ l).

Nhiều đèn lồng có thể được đặt tại cùng một điểm. Đèn lồng có thể nằm ở cuối phố.

Giới hạn
1 ≤ n ≤ 10^5, 1 ≤ l ≤ 10^9

0 ≤ ai ≤ l

Đầu ra
In bán kính ánh sáng tối thiểu d, cần thiết để chiếu sáng cả đường phố.

In ra kết quả với độ chính xác là 10 số sau dấu phây*/

#include<bits/stdc++.h>
#include<iostream>
#include<iomanip>
#include<math.h>
#include<algorithm>

using namespace std;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	int n, l; cin >> n >> l;
	int a[n];
	for(int &x : a){
		cin >> x;
	}
	sort(a, a + n);
	double ban_kinh = 0;
	for(int i = 1; i < n; i++){
		ban_kinh = max(ban_kinh, (1.0 * a[i] - a[i - 1]) / 2);
	}
	ban_kinh = max(ban_kinh, 1.0 * a[0]);
	ban_kinh = max(ban_kinh, 1.0 * l - a[n - 1]);
	cout << fixed << setprecision(10) << ban_kinh;
	return 0;
}
