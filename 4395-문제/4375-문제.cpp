// https://www.acmicpc.net/problem/4375
/*
2와 5로 나누어 떨어지지 않는 정수 n(1 ≤ n ≤ 10000)가 주어졌을 때, 
1로만 이루어진 n의 배수를 찾는 프로그램을 작성하시오.
*/

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int n;
int main() {
	// 입력이 계속해서 주어질때 이렇게 받는다. 
	while (scanf("%d", &n) != EOF) {
		int cnt = 1, ret = 1;
		// 무한 반복
		while (true) {
			// 1, 11, 111, 1111 -> cnt는 1로만 이루어진 수
			// 예제 입력 n 
			if (cnt % n == 0) {
				printf("%d\n", ret);
				break;
			}
			else {
				cnt = (cnt * 10) + 1; // 1 -> 11 -> 111 -> 1111 이렇게 흘러간다.
				cnt %= n; // n으로 나눈다. 
				ret++;		// answer를 증가시킨다.(자리수임.)
			}
		}
	}
	return 0;
}