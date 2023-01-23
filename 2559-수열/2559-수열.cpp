// https://www.acmicpc.net/problem/2559
// n은 2이상 100,000이하
// k 는 1~100,000까지  
// t 는 -100 ~ 100 
// 며칠동안의 온도의 합이 가장 큰 값? -> prefix sum 즉 구간합을 사용!!

#include <bits/stdc++.h>
using namespace std; 
typedef long long ll;
// 구간합 psum은 최대값+1로 크기 지정 // 
int n, k, temp, psum[100001], answer=-10000004;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	cin >> n >> k;
	// tip : 구간합의 시작은 int i=1 로 한다.  // psum은 0으로 모두 초기화된 상태이다. 
	// 18 ~20번은 무조건 암기해야한다. psum[i]=psum[i-1]+temp
	for (int i = 1; i < n; i++) {
		cin >> temp; psum[i] = psum[i - 1] + temp;
	}
	// for문돌면서 k 구간에서 최대값을 찾는 것이기 때문에 i는 증가/ k는 고정
	for (int i = k; i <= n; i++) {
		// ans = max(ans , value) 이렇게 하면 값을 계속 갱신한다. 
		answer = max(answer, psum[i] - psum[i - k]);
	}
	cout << answer << '\n';
	return 0;
}