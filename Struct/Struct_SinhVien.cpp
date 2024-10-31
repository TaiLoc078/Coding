/*
Đại học 28Univerisy nhận được 1 danh sách học sinh gồm thông tin về tên, ngày sinh, địa chỉ, điểm thi đại học của 3 môn Toán, Lý, Hóa. Nhiệm vụ của bạn dựa trên điểm trúng tuyển của ngành CNTT là 24 để xác định bạn nào trượt, bạn nào đỗ. Ngoài ra bạn còn phải tìm ra thủ khoa ngành CNTT năm nay.

Đầu vào
Dòng đầu tiên là N : Số lượng học sinh đăng ký xét tuyển.

4N dòng tiếp theo mỗi mô tả thông tin sinh viên :

Dòng 1 : Họ tên, dòng 2 : Ngày sinh, dòng 3 : Địa chỉ, Dòng 4 : Điểm toán lý hóa.

Giới hạn
• 1<=N<=1000

• Họ tên học sinh không quá 100 ký tự

• Ngày sinh là xâu ký tự gồm 3 phần ngày, tháng, năm

• Địa chỉ không quá 50 kí tự

• Điểm toán lý hóa là số nguyên trong khoảng từ 0 tới 10

Đầu ra
• Đầu tiên in ra thông tin của thủ khoa trên 1 dòng gồm tên, ngày sinh, địa chỉ, tổng điểm 3 môn, nếu có nhiều thủ khoa có cùng điểm thì liệt kê hết theo thứ tự trong danh sách. Mỗi thủ khoa được in thông tin trên 1 dòng.

• Các dòng tiếp theo in ra thông tin của các học sinh xét tuyển gồm tên, ngày sinh, địa chỉ, tổng điểm 3 môn kèm theo ghi chú TRUOT hoặc DO ở cuối. Xem test case để hiểu rõ hơn.
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
	stringstream ss(a.diem);
	string word;
	int diem = 0;
	while(ss >> word){
		diem += stoi(word); 
	}
	a.diem = to_string(diem);
}

void in(sv a){
	cout << a.ten << ' ' << a.ns << ' ' << a.qq << ' ' << a.diem;
}

bool cmp(sv a, sv b){
	if(stoi(a.diem) > stoi(b.diem)){
		return 1;
	}
	return 0;
}

int main(){
	int n;
	cin >> n;
	cin.ignore();
	sv a[n];
	sv b[n];
	for(int i = 0 ; i < n; i++){
		nhap(a[i]);
		b[i] = a[i];
	}
	stable_sort(a, a + n, cmp);
	string thuKhoa = a[0].diem;
	cout << "DANH SACH THU KHOA :" << endl;
	for(sv x : a){
		if(x.diem == thuKhoa){
			in(x);
			cout << endl;
		}
		else{
			break;
		}
	}
	cout << "KET QUA XET TUYEN:" << endl;
	for(sv x : b){
		if(stoi(x.diem) < 24){
			in(x);
			cout << " TRUOT" << endl;
		}
		else{
			in(x);
			cout << " DO" << endl;
		}
	}
}
