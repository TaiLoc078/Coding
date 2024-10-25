/*
Cho xâu S chỉ bao gồm các kí tự in thường, hãy đếm số lượng xâu con (xâu ký tự chứa các chữ cái liên tiếp) mà có kí tự đầu và kí tự cuối giống nhau.

Gợi ý : Muốn có 1 xâu con có đầu cuối giống nhau thì cần 2 ký tự giống nhau => Đếm tần suất mỗi ký tự trong xâu => Tính tổ hợp chập 2 của tần suất sẽ tìm được số xâu con có đầu cuối giống nhau. VD xâu có 5 chữ a thì sẽ có tổ hợp chập 2 của 5 cách chọn 2 kí tự a giống nhau trong 5 kí tự không xét tới thứ tự, mỗi cách chọn chính là 1 xâu con có đầu cuối giống nhau

Đầu vào
Một dòng duy nhất chứa xâu S chỉ bao gồm chữ cái in thường.

Giới hạn
1≤len(S)≤100000

Đầu ra
In ra đáp án của bài toán.
*/

#include <bits/stdc++.h>

using namespace std;

int main(){
	string s;
	cin >> s;
	map<char, int> mp;
	vector<char> ve1;
	for(int i = 0; i < s.size(); i++){
		mp[s[i]]++;
		ve1.push_back(s[i]);
	}
	vector<char> ve;
	for(auto x : mp){
		ve.push_back(x.first);
	}
	long long cnt = ve1.size();
	for(auto x : ve){
		cnt += 1ll  * mp[x] * (mp[x] - 1) / 2;
	}
	cout << cnt;
}
