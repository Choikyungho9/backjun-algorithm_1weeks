// https://www.acmicpc.net/problem/1629
// 굉장히 유명한 문제이다. 
// 시간복잡도를 줄이는 알고리즘을 공부한다.
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
ll a, b, c;
int cnt;

ll go(ll a, ll b) {
	// 재귀함수의 종료 조건
	if (b == 1) return a % c;

	//반씩 나눈다 -> 2의 64승 -> 2의32승 * 2의 32승 
	ll answer = go(a, b/2);

	// 곱해서 c로 나눈 나머지 -> 미리 조금씩 계산해놓는다.

	answer = (answer * answer) % c; 

	// 만약에 홀수라면~~ 2의 5승의 경우 
	// b%2 = 1은 True 이므로,, if 문이 조건이 맞아서 실행된다. if문은 False일때 종료
	if (b % 2) answer = (answer * a) % c;
	return answer;

}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	cin >> a >> b >> c;
	cout << go(a, b) << '\n';
	return 0;
}