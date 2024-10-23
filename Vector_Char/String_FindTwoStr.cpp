/*
Cho 2 xâu kí tự S1 và S2, hãy in ra các kí tự xuất hiện ở cả 2 xâu theo thứ tự từ điển, chú ý mỗi kí tự chỉ liệt kê một lần. Sau đó tiếp tục liệt kê các kí tự xuất hiện ở 1 trong 2 xâu theo thứ tự từ điển.

Đầu vào
Dòng đầu tiên là xâu S1. Dòng thứ 2 là xâu S2.

Các ký tự trong 2 xâu chỉ bao gồm chữ cái in hoa hoặc in thường.

Giới hạn
1≤len(S1)≤100000

1≤len(S2)≤100000.

Đầu ra
Dòng 1 in ra các ký tự xuất hiện ở cả 2 xâu theo thứ tự từ điển tăng dần.

Dòng 2 in ra các ký tự xuất hiện ở 1 trong 2 xâu theo thứ tự từ điển tăng dần.
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
	set<char> se;
	vector< pair<char, int> > ve;
	for(int i = 0; i < s1.size(); i++){
		if(mp[s1[i]] == 0){
			mp[s1[i]]++;
		}
		se.insert(s1[i]);
	}
	for(int i = 0; i < s2.size(); i++){
		if(mp[s2[i]] == 1){
			mp[s2[i]]++;
		}
		se.insert(s2[i]);

	}
	for(auto x : mp){
		if(x.second == 2){
			ve.push_back(x);
		}
	}
	sort(ve.begin(), ve.end());
	for(int i = 0; i < ve.size(); i++){
		cout << ve[i].first;
	}
	cout << endl;
	for(auto it = se.begin(); it != se.end(); it++){
		cout << *it;
	}
}
