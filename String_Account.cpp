/*
Hiện tại trường đại học XYZ tổ chức cấp email cho sinh viên mới nhập học. Email và mật khẩu sẽ được cấp dựa trên tên của sinh viên và ngày sinh của sinh viên đó. Bạn hãy viết chương trình để cấp tài khoản theo yêu cầu như sau, tên email được tạo bằng cách lấy tên của sinh viên và ghép với các chữ cái đầu tiên của họ và tên đệm, tất các ký tự trong email đều ở dạng in thường

Ví dụ : sinh viên có tên "Nguyen Van Long" sẽ được cấp email "longnv@xyz.edu.vn".

Mật khẩu sẽ dựa trên ngày sinh của sinh viên đó, bằng cách ghép ngày tháng năm lại với nhau

Ví dụ : sinh viên sinh ngày 27/04/2002 sẽ có mật khẩu là 2742002.

Đầu vào
Dòng đầu tiên là số lượng sinh viên cần cấp email N.

N dòng tiếp theo, mỗi dòng gồm 2 phần là họ tên và ngày sinh, ngày sinh của sinh viên đã ở dạng chuẩn dd/mm/yyyy.

Giữa các từ có thể có nhiều dấu cách, từ cuối cùng trong dòng là thông tin ngày sinh của sinh viên(xâu kí tự không có dấu cách chuẩn dd/mm/yyyy).
*/

#include <bits/stdc++.h>
#include <string>
#include <ctype.h>

using namespace std;

int main(){
	int n; cin >> n;
	cin.ignore(1);
	vector<string> ve;
	string s;
	string word;
	string email;
	string pass;
	string tmp;
	while(n--){
		getline(cin, s);
		for(int i = 0; i < s.size(); i++){
			if(!isdigit(s[i]) && !isalpha(s[i])){
				s[i] = ' ';
			}
			else if(isalpha(s[i])){
				s[i] = (char)tolower(s[i]);
			}
		}
		stringstream ss(s);
		while(ss >> word){
			ve.push_back(word);
		}
		for(int i = 0; i < ve.size(); i++){
			for(int j = 0; j < ve[i].size(); j++){
				if(isalpha(ve[i][j])){
					email += ve[i][j];
					break;
				}
				else{
					if(j == 0 && isalpha(ve[i - 1][j])){
						email.pop_back();
						for(int b = 0; b < ve[i - 1].size(); b++){
							tmp.push_back(ve[i - 1][b]);
						}
						email = tmp + email;
					}
					if(j == 0 && ve[i][j] == '0'){
						continue;
					}
					else{
						pass += ve[i][j];
					}
				}
			}
		}
		email += "@xyz.edu.vn";
		cout << email << endl << pass << endl;
		email.clear();
		pass.clear();
		ve.clear();
		tmp.clear();
	}
}
