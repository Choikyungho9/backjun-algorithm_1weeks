// https://www.acmicpc.net/problem/1620
#include <bits/stdc++.h>
using namespace std;

int n, m; 
string s;
// map 자료구조 -> key:value로 이루어진 정렬된 자료구조 
map<string, int> mp;
map<int, string> mp2;
// n,m은 1보다 크고 100,000보다 작다고 했으므로 

int main() {
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		// 공백이 없는 문자이므로 cin >> s 로 받으면 된다.
		cin >> s; 
		// string : int를 map 자료구조로 짝지어주기 
		mp[s] = i + 1;
		// int : string을 map 자료구조로 짝지어주기
		mp2[i + 1] = s;
	}
	for (int i = 0; i < m; i++) {
		cin >> s; 
		// atoi(s.c_str()) 은 s가 문자라면 0을 반환하고// 숫자라면 숫자 그대로 리턴
		if (atoi(s.c_str())==0) {
			cout << mp[s] << '\n';
		}
		else {
			cout << mp2[atoi(s.c_str())] << '\n';
		}
	}
}
