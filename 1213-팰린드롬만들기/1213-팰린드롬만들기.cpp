//https://www.acmicpc.net/problem/1213
#include <bits/stdc++.h>
using namespace std;

string s;
int cnt[200], flag;
char mid;
string answer;

int main() {
	cin.tie(NULL);
	cin >> s;
	for (char a : s) cnt[a] ++;
	// Z 부터 시작해야지 앞 / 뒤로 글자를 붙이면서 팰린드롬을 만들때 오름차순인 펠린드롬이 된다. 
	for (int i = 'Z'; i >= 'A'; i--) {
		// 0 이상인 cnt 배열을 만났을 때, (값이 있다면~~) 
		if (cnt[i]) {
			// cnt[i] & 1 은 홀수인지 판단한다. & 0 은 짝수이다. 
			if (cnt[i] & 1) {
				// 홀수개인 i 인덱스를 문자로 바꾼다. 
				mid = char(i); 
				flag++;
				cnt[i]--;
			}
			// 홀수개인 문자가 2개이상인 경우는 펠린드롬이 불가능하므로 break;
			if (flag == 2) break;
			// 문자 개수인 cnt를 좌, 우로 해서 총 2개씩 소모하므로 2개씩 증가한다.
			for (int j = 0; j < cnt[i]; j += 2) {
				answer = char(i) + answer;
				answer = answer + char(i);
			}
		}
	}
	// mid가 아직 남아있다면~~ 즉 1개 남아있다면
	// answer 중앙 인덱스에 추가해라.
	if (mid) answer.insert(answer.begin() + answer.size() / 2, mid);
	if (flag == 2) cout << "I'm Sorry Hansoo\n";
	else cout << answer << '\n';

}