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
	int n, m;
	cin >> n >> m;
	vector<int> v(n, 0);
	for (auto &it : v) cin >> it;
	int max_iterations = -1;
	for (int i : v) {
		max_iterations = max (max_iterations, i % m == 0 ? (i / m) : (i / m) + 1);
	}
	int index = -1;
	for (int i = 0; i < n; i++) {
		int iteration = v[i] % m == 0 ? (v[i] / m) : (v[i] / m + 1);
		if (iteration == max_iterations) {
			index = i;
		}
	}
	cout << (index + 1);
}
int32_t main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	// int t;
	// cin >> t;
	// for (int i = 0; i < t; i++)
	solve();
}
