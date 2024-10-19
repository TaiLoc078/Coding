/*
Cho một xâu kí tự S bao gồm các chữ cái và dấu cách, một từ được định nghĩa là các kí tự liên tiếp không chứa dấu cách, hãy sắp xếp các từ thuận nghịch khác nhau trong xâu theo thứ tự từ chiều dài tăng dần, nếu 2 từ thuận nghịch có cùng chiều dài thì từ nào xuất hiện trước sẽ được in ra trước.

Đầu vào
Dòng duy nhất chứa xâu S.

Giới hạn
1≤len(S)≤100000

Đầu ra
In ra các từ theo thứ tự sắp xếp yêu cầu, các từ được in cách nhau một dấu cách.
*/

#include <bits/stdc++.h>
#include <string>
#include <ctype.h>

using namespace std;

int check(string word){
	int l = 0, r = word.size() - 1;
	while(l <= r){
		if(word[l] != word[r]){
			return 0;
		}
		else{
			l++; r--;
		}
	}
	return 1;
}

int cmp(pair<string, int> a, pair<string, int> b){
	if((a.first).size() != (b.first).size()){
		return (a.first).size() < (b.first).size();
	}
	else{
		return a.second < b.second;
	}
}

int main(){
	string s;
	getline(cin, s);
	stringstream ss(s);
	string word;
	vector< pair<string, int> > ve;
	map<string, int> mp;
	int i = 0;
	while(ss >> word){
		if(check(word) && mp[word] == 0){
			ve.push_back({word, i++});
			mp[word]++;
		}
	}
	sort(ve.begin(), ve.end(), cmp);
	for(int i = 0; i < ve.size(); i++){
		cout << ve[i].first << ' ';
	}
}
