//https://www.acmicpc.net/problem/1940
#include <bits/stdc++.h>

using namespace std;

int n, m, arr[15001], cnt ;

int main() {
	// 입력 n, m 받기 
	cin >> n >> m;
	// for문으로 i 증가시키면서 arr 배열에 값 채워넣기 
	for (int i = 0; i < n; i++) cin >> arr[i];

	// 문제에서 100,000 이하의 수 2개를 더한다고 했으니까, 그 이상값이면 0뜨게 한다. 
	if (m > 200000) cout << 0 << '\n';
	// 중첩 for문으로 조합 구하기로 문제 풀기 
	else{
		for (int i = 0; i < n; i++) {
			for (int j = i + 1; j < n; j++) {
				if (arr[i] + arr[j] == m) cnt++;
			}
		}
		cout << cnt << '\n';
	}
}
