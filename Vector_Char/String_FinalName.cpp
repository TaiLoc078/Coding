/*
Cho một xâu là tên người chỉ bao gồm các kí tự là chữ cái và dấu cách, giữa các từ trong câu có thể tồn tại nhiều dấu cách hãy chuẩn hóa tên người bằng cách viết hoa chữ cái đầu tiên của từng từ và viết thường các chữ cái còn lại.

Xâu tiếp theo là ngày sinh của người này, bao gồm ngày tháng năm phân cách nhau bằng dấu '/', hãy chuẩn hóa ngày sinh của người này về đúng dạng dd/mm/yyyy.

Đầu vào
Dòng đầu tiên là tên người

Dòng thứ 2 là ngày sinh

Giới hạn
Xâu kí tự tên người có không quá 2000 kí tự

Xâu ngày sinh có không quá 10 kí tự. Dữ liệu đảm bảo có dấu '/' giữa ngày, tháng, năm.


*/

#include <bits/stdc++.h>
#include <string>
#include <ctype.h>

using namespace std;

int main(){
	string s, t;
	getline(cin, s);
	getline(cin, t);
	stringstream ss(s);
	string word;
	vector<string> ve;
	while(ss >> word){
		for(int i = 0; i < word.size(); i++){
			if(i != 0){
				word[i] = (char)tolower(word[i]);
			}
			else{
				word[i] = (char)toupper(word[i]);
			}
		}
		ve.push_back(word);
	}
	for(int i = 0; i < ve.size(); i++){
		cout << ve[i] << ' ';
	}
	cout << endl;
	for(int i = 0; i < t.size(); i++){
		if(!isdigit(t[i])){
			t[i] = ' ';
		}
	}
	stringstream st(t);
	string word1;
	vector<string> ve1;
	while(st >> word1){
		if(word1.size() == 1){
			word1.insert(word1.begin(), '0');
		}
		ve1.push_back(word1);
	}
	for(int i = 0; i < ve1.size(); i++){
		if(i != ve1.size() - 1){
			cout << ve1[i] << '/';
		}
		else{
			cout << ve1[i];
		}
	}
}
