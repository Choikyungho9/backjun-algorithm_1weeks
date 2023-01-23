// https://www.acmicpc.net/problem/9375
#include <bits/stdc++.h>
using namespace std;

int t, n;
string a, b;

int main() {
	cin >> t;
	// while (t--)는 while한번 돌때마다 t가 하나씩 빠지게 해서 0이 되면 종료되게끔 한다. 
	while (t--) {
		// 맵 자료구조 생성
		map<string, int> mp;
		//의상수 입력받음.
		cin >> n;
		for (int i = 0; i < n; i++) {
			// a : 의상이름 , b : 의상종류
			cin >> a >> b;
			// 해쉬맵에 의상 종류에 따라 값을 1증가 
			mp[b]++;
		}
		// answer 크기를 모를때는 그냥 크게 long long 타입으로 생성 
		long long answer = 1;
		// 해쉬 전체를 돌면서
		for (auto c : mp) {
			// c.second에 아무것도 안입었을때의 경우의 수 1가지를 더해서 곱해간다. 
			// c.second 를 long long 타입으로 강제 캐스팅
			answer *= ((long long)c.second + 1);
		}
		// 최종 답은 아무것도 안입었을때 1가지를 빼준다. 
		answer = answer - 1;
		cout << answer << '\n';
	}
	return 0;
}