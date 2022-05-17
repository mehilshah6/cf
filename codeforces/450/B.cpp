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
#define modulo(a, b) (a % b < 0 ? a % b + b : a % b)

void solve() {
	lli x, y;
	cin >> x >> y;
	lli k;
	cin >> k;
	vector<lli> ans (6, 0);
	ans[0] = x;
	ans[1] = y;
	for (int i = 2; i < 6; i++) {
		ans[i] = ans[i - 1] - ans[i - 2];
	}
	for (int i = 0; i < 6; i++) {
		ans[i] = modulo(ans[i], 1000000007);
	}
	cout << ans[(k - 1) % 6];
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	// int t;
	// cin >> t;
	// for (int i = 0; i < t; i++)
	solve();
}
