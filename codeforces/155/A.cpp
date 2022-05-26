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
	int n;
	cin >> n;
	vector<int> v(n);
	for (auto &it : v) cin >> it;
	int min_score = v[0];
	int max_score = v[0];
	int ans = 0;
	for (int i = 1; i < n; i++) {
		if (v[i] > max_score) {
			max_score = v[i];
			ans++;
		}
		if (v[i] < min_score) {
			min_score = v[i];
			ans++;
		}
	}
	cout << ans;
}
int32_t main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	// int t;
	// cin >> t;
	// for (int i = 0; i < t; i++)
	solve();
}
