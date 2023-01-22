//백준 일곱난쟁이 문제 - https://www.acmicpc.net/problem/2309

#include<bits/stdc++.h>

using namespace std;

int a[9];

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	// 입력을 받는 부분
	for (int i = 0; i < 9; i++) {
		cin >> a[i];
	}

	// 순열/조합을 하기전 반드시 배열 sort할 것.
	sort(a, a + 9);

	// do-while문으로 실행 / 조건 구현
	do {
		//for (int i : a) cout << i << " ";
		//cout << '\n';
		int sum = 0;
		for (int i = 0; i < 7; i++) sum += a[i];
		if (sum == 100) break;

	} while (next_permutation(a, a + 9));
	for (int i = 0; i < 7; i++) cout << a[i] << '\n';
	return 0;
}