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
	if (n == m) {
		for (int i = 0; i < n; i++) {
			cout << "GB";
		}
		return;
	}
	if (n < m) {
		for (int i = 0; i < n; i++) {
			cout << "GB";
		}
		for (int i = 0; i < m - n; i++) {
			cout << "G";
		}
	} else {
		for (int i = 0; i < m; i++) {
			cout << "BG";
		}
		for (int i = 0; i < n - m; i++) {
			cout << "B";
		}
	}
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	// int t;
	// cin >> t;
	// for (int i = 0; i < t; i++)
	solve();
}
