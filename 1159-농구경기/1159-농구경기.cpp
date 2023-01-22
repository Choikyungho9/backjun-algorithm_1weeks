//https://www.acmicpc.net/problem/1159

#include <bits/stdc++.h>

using namespace std; 

int n, cnt[26];
string s, answer ;

int main() {
	// cin으로 n을 입력받는다. 
	cin >> n;
	// i를 n까지 증가시키면서 
	for (int i = 0; i < n; i++) {
		// 입력 s를 받고 
		cin >> s;
		// s의 첫번째 문자열을 1개 카운트 증가시킨다. 
		cnt[s[0]-'a']++;
	}
	// 카운트 배열이 종료되면, for문을 돌면서 cnt 개수가 5개 이상이면, answer에 알파벳을 추가한다. 
	for (int i = 0; i < 26; i++) if (cnt[i] >= 5) answer += (i + 'a');
	// 만약 answer의 크기가 0이 아니라면, answer를 출력한다. 
	if (answer.size()) cout << answer << '\n';
	// 그렇지 않으면 "PREDAJA" 를 출력한다. 
	else cout << "PREDAJA" << '\n';

}