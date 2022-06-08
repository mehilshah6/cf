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
	string s;
	cin >> s;
	vector<int> freq(26, 0);
	for (char c : s) {
		freq[c-'a']++;
	}
	int violations = 0;
	for (int i = 0; i < 26; i++) {
		if (freq[i] % 2 != 0) violations++;
	}
	if (violations == 0 || violations == 1) {
		cout << "First";
	}
	else if (violations % 2 == 0) {
		cout << "Second";
	} else {
		cout << "First";
	}
}
int32_t main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	// int t;
	// cin >> t;
	// for (int i = 0; i < t; i++)
	solve();
}
