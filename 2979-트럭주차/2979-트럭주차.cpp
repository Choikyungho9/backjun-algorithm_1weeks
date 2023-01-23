#include <bits/stdc++.h>

using namespace std;

int A, B, C, a, b, cnt[104], answer;

int main() {
	// A, B, C, 입력 한줄 받기 
	cin >> A >> B >> C;

	// for문 돌면서 3줄 a, b 입력받기 
	for (int i = 0; i < 3; i++) {
		cin >> a >> b;
		// 입력 받으면서 입력 한 줄씩 배열에 인덱스 카운트 하기 
		for (int j = a; j < b; j++) cnt[j]++;
	}
	// 총 개수가 100번까지밖에 없으니까 100번까지돌면서 1대인지 2대인지 3대인지 체크한다.
	for (int j = 0; j < 100; j++) {
		if (cnt[j]) {
			if (cnt[j] == 1) answer += A;
			else if (cnt[j] == 2) answer += B * 2;
			else if (cnt[j] == 3) answer += C * 3;

		}
	}
	// for문이 다 끝나면,, 여기서 출력하고 리턴 answer한다. 
	cout << answer << '\n';
	return 0;
}