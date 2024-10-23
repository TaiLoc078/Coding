/*
Cho một xâu kí tự S bao gồm các chữ cái và dấu cách, một từ được định nghĩa là các kí tự liên tiếp không chứa dấu cách. Hãy tìm từ có số lần xuất hiện nhiều nhất và ít nhất trong xâu, nếu có nhiều từ có cùng số lần xuất hiện nhiều nhất hoặc ít nhất thì chọn từ có thứ tự từ điển lớn nhất làm kết quả.

Đầu vào
Dòng duy nhất chứa xâu S.

Giới hạn
1≤len(S)≤100000

Đầu ra
Dòng đầu tiên in ra từ có số lần xuất hiện nhiều nhất.

Dòng thứ 2 in ra từ có số lần xuất hiện ít nhất.
*/

#include <bits/stdc++.h>
#include <string>
#include <ctype.h>

using namespace std;

int cmp(pair <string, int> a, pair <string, int> b){
	if(a.second != b.second){
		return a.second < b.second;
	}
	else{
		return a.first < b.first;
	}
}

int cmp1(pair <string, int> a, pair <string, int> b){
	if(a.second != b.second){
		return a.second < b.second;
	}
	else{
		return a.first > b.first;
	}
}

int main(){
	string s;
	getline(cin, s);
	stringstream ss(s);
	string word;
	map<string, int> mp;
	vector< pair<string, int> >ve;
	while(ss >> word){
		mp[word]++;
	}
	for(auto x : mp){
		ve.push_back(x);
	}
	sort(ve.begin(), ve.end(), cmp);
	cout << ve[ve.size() - 1].first << ' ' << ve[ve.size() - 1].second << endl;
	sort(ve.begin(), ve.end(), cmp1);
	cout << ve[0].first << ' ' << ve[0].second << endl;
}
