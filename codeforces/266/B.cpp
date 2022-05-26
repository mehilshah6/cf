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
#define int long long int
using namespace std;
void solve() {
	int n, t;
	cin >> n >> t;
	string s;
	cin >> s;
	for (int i = 0; i < t; i++) {
		for (int j = 0; j < s.length(); j++) {
			if (s[j] == 'B' && s[j + 1] == 'G') {
				swap (s[j], s[j + 1]);
				j++;
			}
		}
	}
	cout << s;
}
int32_t main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	// int t;
	// cin >> t;
	// for (int i = 0; i < t; i++)
	solve();
}
