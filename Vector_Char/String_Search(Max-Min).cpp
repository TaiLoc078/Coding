/*
Cho số tự nhiên m và số nguyên s không âm. Nhiệm vụ của bạn là tìm số bé nhất và lớn nhất có m chữ số và tổng chữ số bằng s.

Gợi ý : Số lớn nhất thì các bạn điền tối đa từ đầu tới cuối, còn số nhỏ nhất thì điền tối đa chữ số từ cuối về. Tuy nhiên chữ số nhỏ nhất nếu điền thoải mái thì tới chữ số đầu tiên sẽ không còn 1 đơn vị nào để đảm bảo có m chữ số. Ví dụ s = 19, m = 4, nếu điền tối đa từ cuối sẽ thu được số nhỏ nhất là 0199. Cách xử lý là giảm s đi 1 đơn vị để dành cho vị trí chữ số đầu tiên rồi mới điền tối đa từ cuối về.

Đầu vào
Một dòng gồm 2 số m và s

Giới hạn
1 ≤ m ≤ 100

0 ≤ s ≤ 900

Đầu ra
In ra số bé nhất, lớn nhất có thể đạt được, mỗi số in ra trên 1 dòng. Nếu không có đáp án thì in ra 1 dòng "NOT FOUND"
*/

#include <bits/stdc++.h>

using namespace std;

int main(){
	int m, s; cin >> m >> s;
	string so_lon;
	string so_be;
	int tmp = s - 1;
	if(m * 9 < s || s == 0 && m > 0){
		if(m == 1 && s == 0){
			cout << 0 << endl << 0;
		}
		else{
			cout << "NOT FOUND";
		}
	}
	else{
		while(m--){
			if(s >= 9){
				so_lon += "9";
				s -= 9;
			}
			else{
				so_lon += to_string(s);
				s = 0;
			}
			if(tmp >= 9){
				so_be = "9" + so_be;
				tmp -= 9;
			}
			else{
				so_be = to_string(tmp) + so_be;
				tmp = 0;
			}
			if(m == 0){
				so_be[0] = (char)(so_be[0] + 1);
			}
		}
	}
	cout << so_be << endl << so_lon;
}
