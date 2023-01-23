// https://www.acmicpc.net/problem/11655
#include <bits/stdc++.h>
using namespace std;

string s;

int main() {
	// 입력을 통째로 받는 경우  
	getline(cin, s);
	for (int i = 0; i < s.size(); i++) {
		//대문자인 경우,, 대문자A : 65 / 대문자 Z : 90 
		if (s[i] >= 65 &&  s[i] <= 90) {

			// 더한 결과가 대문자 -> 소문자로 넘어갈 경우 // -26으로 대문자를 맞춰준다. 
			if (s[i] + 13 > 90) s[i] = s[i] + 13 - 26;
			else s[i] = s[i] + 13;
		}

		// 소문자일때,, 소문자 a : 97 / 소문자 z : 122
		else if (s[i] >= 97 && s[i] <= 122) {
			if (s[i] + 13 > 122) s[i] = s[i] + 13 - 26;
			else s[i] = s[i] + 13;
			}
	// for문이 다 끝나면 print 
	cout << s[i]; 
	}

	return 0;
}