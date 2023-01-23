#include <bits/stdc++.h>

using namespace std; 

// 
int n;
string s, ori_s, pre, suf;
int main() {
// input 입력받기
	cin >> n;
	cin >> ori_s;
	int pos = ori_s.find('*');
	// 0부터 pos(*) 직전까지 자른게 pre 
	pre = ori_s.substr(0, pos);
	// * 한칸뒤 위치부터 끝까지를 자른것이 suf 
	suf = ori_s.substr(pos + 1);

	for (int i = 0; i < n; i++) {
		cin >> s; 
		// 반례를 생각할때, ab*ab 이고,, 입력이 ab일때 NE가 떠야하므로 아래와같이 작성
		if (pre.size() + suf.size() > s.size()) {
			cout << "NE\n";
		}
		else
		{
			// pre랑 입력s를 pre.size만큼 자른게 같다면~ 
			// 입력s에서 suf.size만큼 뺀 길이부터, 끝까지 substr한게 suf랑 같다면~
			if (pre == s.substr(0, pre.size()) && suf == s.substr(s.size() - suf.size())) cout << "DA\n";
			else cout << "NE\n";		
		}
	}
	return 0;
}