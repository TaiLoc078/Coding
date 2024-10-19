/*
Cho một xâu kí tự, hãy đếm tần suất xuất hiện của các kí tự trong xâu và in ra theo yêu cầu.

Đầu vào
Xâu kí tự S chỉ bao gồm chữ cái in hoa và in thường.

Giới hạn
1≤len(S)≤100000.

Đầu ra
Đầu tiên in ra các ký tự và tần suất xuất hiện của các ký tự ở trong xâu theo thứ tự từ điển tăng dần, sau đó cách ra một dòng và in ra tần suất xuất hiện của các ký tự theo thứ tự xuất hiện trong xâu(chú ý mỗi kí tự chỉ in 1 lần)
*/

#include <bits/stdc++.h>
#include <string>
#include <ctype.h>

using namespace std;

bool cmp(pair <char, int> a, pair <char, int> b){
	return a.first < b.first;
}

int main(){
	string s;
	cin >> s;
	map<char, int> mp;
	vector< pair<char, int> > ve;
	for(int i = 0; i < s.size(); i++){
		mp[s[i]]++;
	}
	for(auto x : mp){
		ve.push_back(x);
	}
	sort(ve.begin(), ve.end(), cmp);
	for(int i = 0; i < ve.size(); i++){
		cout << ve[i].first << ' ' << ve[i].second << endl;
	}
	cout << endl;
	for(int i = 0; i < s.size(); i++){
		if(mp[s[i]] != 0){
			cout << s[i] << ' ' << mp[s[i]] << endl;
			mp[s[i]] = 0;
		}
	}
}
