/*
Xây dựng cấu trúc phân số với 2 thành phần là tử và mẫu. Tiến hành nhập 2 phân số từ bàn phím và in ra phân số ở dạng tối giản.

Tính tổng, hiệu của 2 phân số và in ra ở dạng tối giản. Chú ý trong trường hợp mẫu số âm thì đưa dấu âm lên trên tử

Đầu vào
Dòng đầu tiên là tử và mẫu của phân số thứ 1.

Dòng thứ 2 là tử và mẫu của phân số thứ 2.

Giới hạn
Tử và mẫu là các số nguyên nằm nằm trong đoạn [1, 1000]

Đầu ra
Dòng 1 in ra phân số thứ nhất ở dạng tối giản.

Dòng 2 in ra phân số thứ 2 ở dạng tối giản.

Dòng 3 in ra tổng của 2 phân số ở dạng tối giản.

Dòng 4 in ra hiệu của 2 phân số ở dạng tối giản.
*/

#include <bits/stdc++.h>

using namespace std;

struct phanSo{
	int tso;
	int mso;
};

int ucln(int a, int b){
	a = abs(a); b = abs(b);
	while(b != 0){
		int du = a % b;
		a = b;
		b = du;
	}
	return a;
}

void nhap(phanSo &p1){
	cin >> p1.tso >> p1.mso;
}

void toiGian(phanSo &p1){
	int common = ucln(p1.tso, p1.mso);
	p1.tso = p1.tso / common;
	p1.mso = p1.mso / common;
}

void in(phanSo p1){
	cout << p1.tso << '/' << p1.mso;
}

phanSo tong(phanSo p1, phanSo p2){
	phanSo ac;
	ac.mso = p1.mso * p2.mso;
	ac.tso = (p2.mso * p1.tso) + (p2.tso * p1.mso);
	return ac;
}

phanSo hieu(phanSo p1, phanSo p2){
	phanSo ac;
	ac.mso = p1.mso * p2.mso;
	ac.tso = (p2.mso * p1.tso) - (p2.tso * p1.mso);
	return ac;
}

int main(){
	phanSo p1;
	phanSo p2;
	nhap(p1);
	nhap(p2);
	toiGian(p1);
	toiGian(p2);
	phanSo sum = tong(p1, p2);
	phanSo sub = hieu(p1, p2);
	toiGian(sum);
	toiGian(sub);
	in(p1); cout << endl;
	in(p2); cout << endl;
	in(sum); cout << endl;
	in(sub); cout << endl;
}
