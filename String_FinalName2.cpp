/*
Cho một xâu là tên người chỉ bao gồm các kí tự là chữ cái và dấu cách, giữa các từ trong câu có thể tồn tại nhiều dấu cách hãy chuẩn hóa tên người theo 2 mẫu được yêu cầu trước. Xem output để rõ hơn về cách chuẩn hóa.

Đầu vào
Dòng duy nhất là tên người.

Giới hạn
Xâu kí tự tên người có không quá 1000 kí tự;

Đầu ra
Dòng đầu tiên in ra theo mẫu chuẩn hóa 1. Dòng thứ 2 in ra theo mẫu chuẩn hóa 2.


*/

#include <bits/stdc++.h>
#include <string>
#include <ctype.h>

using namespace std;

int main(){
	string s; getline(cin, s);
	stringstream ss(s);
	string word;
	vector<string> ve;
	while(ss >> word){
		ve.push_back(word);
	}
	for(int i = 0; i < ve.size(); i++){
		if(i == ve.size() - 1){
			for(int j = 0; j < ve[i].size(); j++){
				ve[i][j] = (char)toupper(ve[i][j]);
			}
		}
		else{
			for(int j = 0; j < ve[i].size(); j++){
				if(j == 0){
					ve[i][j] = (char)toupper(ve[i][j]);
				}
				else{
					ve[i][j] = (char)tolower(ve[i][j]);
				}
			}
		}
	}
	for(int i = 0; i < ve.size(); i++){
		if(i != ve.size() - 2){
			cout << ve[i] << ' ';
		}
		else{
			cout << ve[i] << ", ";
		}
	}
	cout << endl << ve[ve.size() - 1] << ", ";
	for(int i = 0; i < ve.size() - 1; i++){
		cout << ve[i] << ' ';
	}
}
