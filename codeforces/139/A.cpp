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
	vector<int> v(7);
	for (int i = 0; i < 7; i++) {
		cin >> v[i];
	}
	int sum = 0;
	for (int i = 0; ; i++) {
		sum += v[(i % 7)];
		if (sum >= n) {
			cout << (i % 7) + 1;
			return;
		}
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
