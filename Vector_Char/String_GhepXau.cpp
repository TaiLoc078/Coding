/*
Cho một xâu kí tự S chỉ bao gồm các chữ cái và chữ số, hãy thực hiện tách các số xuất hiện trong xâu ra và ghép lại với nhau để tạo thành một số tự nhiên lớn nhất.

Ví dụ : với xâu S = "123abcda234kkf11tech28" thì ta sẽ tách được các số 123, 234, 11 và 28, trong trường hợp các số bắt đầu bằng chữ số 0 thì ta loại bỏ các số 0 vô nghĩa này. Sau đó ghép lại với nhau thành số 2823412311 là số lớn nhất có thể đạt được.

Đầu vào
Một dòng duy nhất chứa xâu S.

Giới hạn
1≤len(S)≤100000

Đầu ra
In ra số lớn nhất ghép được.
*/

#include <bits/stdc++.h>

using namespace std;

bool cmp(string a, string b){
	return a + b > b + a;
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
		string num;
		sort(ve.begin(), ve.end(), cmp);
		for(int i = 0; i < ve.size(); i++){
			num += ve[i];
		}
		cout << num;
	}
}
