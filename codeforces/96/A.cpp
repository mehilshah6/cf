#include <bits/stdc++.h>
#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#define len(v) ((int)((v).size()))
#define all(v) (v).begin(), (v).end()
#define rall(v) (v).rbegin(), (v).rend()
#define chmax(x, v) x = max((x), (v))
#define chmin(x, v) x = min((x), (v))
using namespace std;
using lli = long long int;

void solve() {
	string s;
	cin >> s;
	int count = 0;
	for (int i = 0; i < s.length() - 1; i++) {
		count = 1;
		while (s[i] == s[i + 1]) {
			i++;
			count++;
		}
		if (count >= 7) {
			cout << "YES";
			return;
		}
	}
	cout << "NO";
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	// int t;
	// cin >> t;
	// for (int i = 0; i < t; i++)
	solve();
}
