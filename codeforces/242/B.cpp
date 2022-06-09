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
	vector<vector<int>> v(n, vector<int>(2, 0));
	for (int i = 0; i < n; i++) {
		int a, b;
		cin >> a >> b;
		v[i][0] = a;
		v[i][1] = b;
	}
	int min_left = INT_MAX;
	int max_right = INT_MIN;
	for (auto i : v) {
		min_left = min (min_left, i[0]);
		max_right = max (max_right, i[1]);
	}
	for (int i = 0; i < v.size(); i++)
		if (v[i][0] <= min_left && v[i][1] >= max_right) {
			cout << (i + 1);
			return;
		}
	cout << "-1";
}
int32_t main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	// int t;
	// cin >> t;
	// for (int i = 0; i < t; i++)
	solve();
}
