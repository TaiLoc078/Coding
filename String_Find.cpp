/*
Cho 2 xâu kí tự S1 và S2 chỉ bao gồm chữ cái in hoa và in thường, hãy tìm các kí tự xuất hiện trong xâu S1 mà không xuất hiện trong xâu S2, và các kí tự chỉ xuất hiện trong xâu S2 mà không xuất hiện trong xâu S1.

Các ký tự được in ra theo thứ tự từ điển và chỉ liệt kê mỗi ký tự một lần.

Đầu vào
Dòng đầu tiên là xâu S1.

Dòng thứ 2 là xâu S2.

Giới hạn
1≤len(S1)≤100000

1≤len(S2)≤100000.

Đầu ra
Dòng đầu tiên in ra các ký tự chỉ xuất hiện trong S1 mà không xuất hiện trong S2.

Dòng thứ 2 in ra các ký tự chỉ xuất hiện trong S2 mà không xuất hiện trong S1.
*/

#include <bits/stdc++.h>
#include <string>
#include <ctype.h>

using namespace std;

bool cmp(pair <char, int> a, pair <char, int> b){
	if(a.second != b.second){
		return a.second < b.second;
	}
	else{
		return a.first < b.first;
	}
}

int main(){
	string s1, s2;
	cin >> s1 >> s2;
	map<char,int> mp;
	map<char, int> mp1;
	vector< pair<char, int> > ve;
	for(int i = 0; i < s1.size(); i++){
		if(mp[s1[i]] == 0){
			mp[s1[i]]++;
		}
	}
	for(int i = 0; i < s2.size(); i++){
		if(mp[s2[i]] == 1){
			mp[s2[i]] = 2;
		}
		else if(mp[s2[i]] == 0){
			mp1[s2[i]]++;
		}
	}
	for(auto x : mp){
		ve.push_back(x);
	}
	sort(ve.begin(), ve.end());
	for(int i = 0; i < ve.size(); i++){
		if(ve[i].second == 1){
			cout << ve[i].first;
		}
	}
	cout << endl;
	ve.clear();
	for(auto x : mp1){
		ve.push_back(x);
	}
	sort(ve.begin(), ve.end());
	for(int i = 0; i < ve.size(); i++){
		cout << ve[i].first;
	}
}
