//https://www.acmicpc.net/problem/3986
#include <bits/stdc++.h>
using namespace std;

int n, answer;
string s;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	cin >> n; 
	for (int i = 0; i < n; i++) {
		cin >> s;
		// char 타입의 스택 선언
		stack<char> stk;
		for (char a : s) {
			// 매우 중요 ! -> stack.top() 또는 queue.front()를 체크할때는 무조건 size가 있는지
			// 반드시 체크하고 들어가야한다. 
			if (stk.size() && stk.top() == a) stk.pop(); // push하지는 않음. 스택에서 제거만 함
			else stk.push(a);	// 아니면 넣는다.
		}
		if (stk.size() == 0) answer++; // 다 제거되었으면, answer를 1개 증가시킨다.
	}
	cout << answer << '\n';
}