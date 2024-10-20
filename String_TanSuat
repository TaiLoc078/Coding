/*
Cho một xâu kí tự S bao gồm các chữ cái và dấu cách, một từ được định nghĩa là các kí tự liên tiếp không chứa dấu cách, hãy đếm xem mỗi từ trong xâu xuất hiện bao nhiêu lần, đầu tiên hãy liệt kê các từ trong xâu kèm theo tần suất của mỗi từ theo thứ tự từ điển, sau đó liệt kê các từ trong xâu theo thứ tự xuất hiện.

Đầu vào
Dòng duy nhất chứa xâu S.

Giới hạn
1≤len(S)≤100000

Đầu ra
Đầu tiên in ra các từ trong xâu và tần suất của nó theo thứ tự từ điển.

Sau đó bỏ trống 1 dòng và in ra các từ trong xâu và tần suất của nó theo thứ tự xuất hiện trong xâu.
*/

#include <bits/stdc++.h>
#include <string>
#include <ctype.h>

using namespace std;

int main(){
	string s;
	getline(cin, s);
	stringstream ss(s);
	string word;
	map<string, int> mp;
	map<string, int> mp1;
	set< pair<string, int> > se;
	vector< pair<string, int> > ve;
	while(ss >> word){
		mp[word]++;
		if(mp1[word] == 0){
			ve.push_back({word, 1});
			mp1[word]++;
		}
	}
	for(auto x : mp){
		se.insert(x);
		for(int i = 0; i < ve.size(); i++){
			if(ve[i].first == x.first){
				ve[i].second = x.second;
			}
		}
	}
	for(auto it = se.begin(); it != se.end(); it++){
		cout << (*it).first << ' ' << (*it).second << endl;
	}
	cout << endl;
	for(auto x : ve){
		cout << x.first << ' ' << x.second << endl;
	}
}
