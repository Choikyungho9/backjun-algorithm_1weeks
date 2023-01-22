#include <bits/stdc++.h>

using namespace std;

// A원 B원 C원 / 도착a 출발 b 
int A, B, C, a, b, cnt[104], answer;

int main() {
	cin >> A >> B >> C;
	for (int i = 0; i < 3; i++) {
		cin >> a >> b;
		// 카운팅 배열 -> 입력받은 시간에 트럭이 몇대가 와있는지 알아야되기때문에
		// 트럭 3대에 대해서 배열에 카운팅을 해줘야한다. 
		for (int j = a; j < b; j++) cnt[j]++;
	}
	for (int j = 1; j < 100; j++) {
			// cnt[j]가 0이 아닌 값이면~~
			if (cnt[j]) {
				if (cnt[j] == 1) answer += A; // 1대면 요금 A를 더한다. 
				else if (cnt[j] == 2) answer += B * 2; // 2대 x B요금을 추가한다. 
				else if (cnt[j] == 3) answer += C * 3;
		}
	}
	cout << answer << '\n';
	return answer;
}