/*
Cho một xâu kí tự S chỉ bao gồm các chữ cái in thường, hãy tìm xâu con liên tiếp chứa các kí tự giống nhau dài nhất, nếu có nhiều xâu con thỏa mãn thì chọn xâu con có thứ tự từ điển lớn nhất.

Đầu vào
Một dòng duy nhất chứa xâu S.

Giới hạn
1≤len(S)≤100000

Đầu ra
In ra xâu con tìm được.
*/

#include <bits/stdc++.h>

using namespace std;

int main(){
	string s; cin >> s;
	s += "@";
	char word = s[0];
	int so_luong = 1;
	int res = 1;
	for(int i = 1; i < s.size(); i++){
		if(s[i] == s[i - 1]){
			so_luong++;
		}
		else{
			if(so_luong > res || (so_luong == res) && s[i - 1] >= word){
				res = so_luong;
				word = s[i - 1];
			}
			so_luong = 1;
		}
	}
	for(int i = 0; i < res; i++){
		cout << word;
	}
}
