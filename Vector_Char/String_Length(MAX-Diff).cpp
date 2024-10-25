/*
Cho một xâu kí tự S chỉ bao gồm các chữ cái in thường, hãy tìm xâu con liên tiếp sao cho không có 2 kí tự nào liền kề giống nhau có độ dài lớn nhất, nếu có nhiều xâu con thỏa mãn thì chọn xâu con có thứ tự từ điển lớn nhất.

Đầu vào
Một dòng duy nhất chứa xâu S.

Giới hạn
1≤len(S)≤100000

Đầu ra
In ra xâu con là kết quả của bài toán


*/

#include <bits/stdc++.h>

using namespace std;

bool cmp(string a, string b){
	if(a.size() != b.size()){
		return a.size() > b.size();
	}
	else{
		return a > b;
	}
}

int main(){
	string s; cin >> s;
	s += "@";
	string word = "";
	vector<string> ve;
	for(int i = 1; i < s.size(); i++){
		if(s[i] == '@'){
			if(word != ""){
				ve.push_back(word);
			}
			break;
		}
		if(s[i] != s[i - 1]){
			if(word == ""){
				word += s[i - 1];
			}
			word += s[i];
		}
		else{
			if(word != ""){
				ve.push_back(word);
				word = "";
			}
		}
	}
	if(ve.size() >= 1){
		sort(ve.begin(), ve.end(), cmp);
		cout << ve[0];
	}
	else{
		cout << s[0];
	}
	return 0;
}
