/*
Đại học 28Univerisy quản lý 1 danh sách sinh viên gồm thông tin về tên, ngày sinh, địa chỉ và GPA. Thực hiện sắp xếp sinh viên theo gpa giảm dần, nếu 2 sinh viên có cùng điểm thì sinh viên nào xếp trước trong danh sách sẽ được in ra trước.

Đầu vào
Dòng đầu là N : số lượng sinh viên.

Các dòng tiếp theo mổ tả thông tin sinh viên trên 4 dòng : Tên, ngày sinh, địa chỉ, gpa.

Giới hạn
1<=N<=1000

Tên sinh viên có không quá 50 kí tự

Địa chỉ không quá 20 kí tự

Gpa là số thực trong khoảng từ 0 tới 4

Đầu ra
In ra danh sách sinh viên sau khi sắp xếp.

Mỗi sinh viên được in thông tin trên 1 dòng gồm tên, ngày sinh, địa chỉ, gpa lấy 2 số sau dấu phẩy. Các thông tin được in cách nhau một dấu cách.
*/

#include <bits/stdc++.h>

using namespace std;

struct sv{
	string ten;
	string ns;
	string qq;
	string diem;
};

void nhap(sv &a){
	getline(cin, a.ten);
	getline(cin, a.ns);
	getline(cin, a.qq);
	getline(cin, a.diem);
}

void in(sv a){
	cout << a.ten << ' ' << a.ns << ' ' << a.qq << ' ' << a.diem;
}

bool cmp(sv a, sv b){
	return a.diem > b.diem;
}

int main(){
	int n;
	cin >> n;
	cin.ignore();
	sv a[n];
	for(int i = 0 ; i < n; i++){
		nhap(a[i]);
	}
	stable_sort(a, a + n, cmp);
	for(sv x : a){
		in(x);
		cout << endl;
	}
}
