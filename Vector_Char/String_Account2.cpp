/*
Trong giờ học ngôn ngữ lập trình Python, thầy giáo có đưa ra một bài toán cho Tèo, bài toán như sau "Cho một xâu kí tự S, Tèo hãy xác định xem liệu rằng có thể xóa đi bất kì một kí tự nào trong xâu S ở một vị trí bất kì và xâu S trở thành từ "python" được hay không? Biết rằng Tèo có thể xóa bất kì một kí tự nào nhưng không thể hoán đổi vị trí các kí tự trong xâu S ban đầu". Hiện nay vì Tèo đang bận gói bánh chưng phụ thầy mẹ nên nhờ bạn giải giúp. Hy vọng bạn có thể giúp được Tèo !!!

Đầu vào
Một xâu kí tự S chỉ bao gồm các kí tự in hoa hoặc in thường.

Giới hạn
Xâu S có độ dài không quá 1000 kí tự.

Đầu ra
In ra YES nếu có thể tạo ra xâu "python" bằng cách xóa đi các kí tự trong xâu, ngược lại in NO
*/

#include <bits/stdc++.h>

using namespace std;

void Ten(string &a){
	for(int i = 0; i < a.length(); i++){
		a[i] = (char)tolower(a[i]);
	}
}

int main(){
	int n; cin >> n;
	cin.ignore();
	string s;
	string word;
	map<string, int> mp;
	while(n--){
		vector<string> ve;
		string email = "";
		getline(cin, s);
		stringstream ss(s);
		while(ss >> word){
			ve.push_back(word);
		}
		for(int i = 0; i < ve.size() - 1; i++){
			Ten(ve[i]);
			if(i != ve.size() - 2){
				email += ve[i][0];
			}
			else{
				email = ve[i] + email;
			}
		}
		mp[email]++;
		if(mp[email] != 1){
			email += to_string(mp[email]);
		}
		email += "@xyz.edu.vn";
		cout << email << endl;
		stringstream st(ve[ve.size() - 1]);
		string mk = "";
		while(getline(st, word, '/')){
			mk += to_string(stoi(word));
		}
		cout << mk << endl;
	}
}
