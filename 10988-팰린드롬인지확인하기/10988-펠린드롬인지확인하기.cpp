#include <bits/stdc++.h>

using namespace std; 

// 원래 문자 s // 뒤집은 문자 temp -> string 타입으로 선언 
string s, temp;

int main() {
	cin >> s;
	temp = s;
	// begin부터 end까지 뒤집음
	reverse(temp.begin(), temp.end());
	if (temp == s) cout << 1 << "\n";
	else cout << 0 << '\n';

	return 0;
}