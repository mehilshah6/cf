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
	int n, m;
	cin >> n >> m;
	vector<int> v(n);
	for (auto &it : v) {
		cin >> it;
	}
	int ans = 0;
	sort (v.begin(), v.end());
	for (int i = 0; i < m; i++) {
		if (v[i] < 0) {
			ans += abs(v[i]);
		}
	}
	cout << ans;
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	// int t;
	// cin >> t;
	// for (int i = 0; i < t; i++)
	solve();
}