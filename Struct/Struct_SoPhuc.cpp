/*
Xây dựng cấu trúc số phức gồm phần thực, phần ảo. Tiến hành nhập 2 số phức và tính tổng, hiệu, tích của 2 số phức này và in ra màn hình.

Đầu vào
Dòng 1 là phần thực và ảo của số phức thứ 1.

Dòng 2 là phần thực và ảo của số phức thứ 2.

Giới hạn
Phần thực, ảo của số phức là các số nguyên nằm trong đoạn từ [-1000, 1000]

Đầu ra
Lần lượt in ra tổng, hiệu, tích của 2 số phức trên từng dòng.
*/

#include <bits/stdc++.h>

using namespace std;

struct soPhuc{
	int thuc, ao;
	soPhuc(){
		thuc = 0;
		ao = 0;
	}
};

void nhap(soPhuc &p1){
	cin >> p1.thuc >> p1.ao;
}

void in(soPhuc p1){
	cout << p1.thuc << ' ' << p1.ao;
}

soPhuc tong(soPhuc p1, soPhuc p2){
	soPhuc sum;
	sum.thuc = p1.thuc + p2.thuc;
	sum.ao = p1.ao + p2.ao;
	return sum;
}

soPhuc hieu(soPhuc p1, soPhuc p2){
	soPhuc sub;
	sub.thuc = p1.thuc - p2.thuc;
	sub.ao = p1.ao - p2.ao;
	return sub;
}

soPhuc tich(soPhuc p1, soPhuc p2){
	soPhuc mul;
	mul.thuc = (p1.thuc * p2.thuc) - (p1.ao * p2.ao);
	mul.ao = (p1.thuc * p2.ao) + (p1.ao * p2.thuc);
	return mul;
}

int main(){
	soPhuc p1;
	soPhuc p2;
	soPhuc p3;
	nhap(p1);
	nhap(p2);
	p3 = tong(p1, p2);
	in(p3); cout << endl;
	p3 = hieu(p1, p2);
	in(p3); cout << endl;
	p3 = tich(p1, p2);
	in(p3);
}
