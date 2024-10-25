/*
Cho một xâu kí tự S chỉ bao gồm các chữ cái và chữ số, hãy tìm số lớn nhất xuất hiện trong xâu.

Ví dụ : S = "abc123bba567ajsj50kkf099" thì số lớn nhất xuất hiện trong xâu là số 567, chú ý trong trường hợp một số có các số 0 đứng trước thì ta loại bỏ các số 0 ở đầu, trong ví dụ số 099 ta tính là số 99, 000 ta tính là số 0.

Chú ý : Số xuất hiện trong xâu có thể có 1000 chữ số

Đầu vào
Một dòng duy nhất chứa xâu S.

Giới hạn
1≤len(S)≤100000

Đầu ra
In ra số lớn nhất xuất hiện trong xâu, dữ liệu đảm bảo có ít nhất 1 số xuất hiện trong xâu.
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
	for(int i = 0; i < s.size(); i++){
		if(isdigit(s[i])){
			word += s[i];
		}
		else{
			while(word[0] == '0' && word.size() > 1){
				word.erase(word.begin(), word.begin() + 1);
			}
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
}
