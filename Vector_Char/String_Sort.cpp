/*
Cho các từ chỉ bao gồm chữ cái in hoa và in thường, bạn được yêu cầu ghép các từ này lại với nhau sao cho từ được ghép lại sau cùng có thứ tự từ điển lớn nhất.

Gợi ý : Không phải sắp xếp giảm dần xong in ra đâu nhé, cần nối 2 xâu vào với nhau và chọn thứ tự từ điển lớn hơn

Đầu vào
Dòng đầu tiên là số nguyên dương N - số lượng từ

Dòng thứ 2 gồm N từ, mỗi từ cách nhau một dấu cách.

Giới hạn
1≤N≤1000

Đầu ra
In ra xâu sau khi ghép.
*/

#include <bits/stdc++.h>

using namespace std;

bool cmp(string a, string b){
	string ab = a + b;
	string ba= b + a;
	return ab > ba;
}

int main(){
	int n; cin >> n;
	vector<string> ve;
	string s;
	while(n--){
		cin >> s;
		ve.push_back(s);
	}
	string t;
	sort(ve.begin(), ve.end(), cmp);
	for(int i = 0; i < ve.size(); i++){
		t += ve[i];
	}
	cout << t;
}
