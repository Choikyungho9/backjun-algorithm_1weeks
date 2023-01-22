#include <bits/stdc++.h>

//https://www.acmicpc.net/problem/10808
// 카운트를 할 때 MAP 또는 배열(array) 
// 문제에서 각각의 문자를 카운팅 -> ASCII 코드!

using namespace std;

string str;
// 전역변수로 하면 0으로 초기화된다.
int cnt[26];

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	// 입력 받기
	cin >> str;
	for (char a : str) {
		cnt[a - 'a']++;
	}
	for (int i = 0; i < 26; i++) cout << cnt[i] << " ";
}