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
	lli n, k;
	cin >> n >> k;
	if (n % 2 == 0) {
		if (k == n) {
			cout << n;
		} else if (k <= (n/2)) {
			cout << (2 * k - 1);
		} else {
			cout << (2 * (k % (n / 2)));
		}
	} else {
		if (k <= (n/2) + 1) {
			cout << (2 * k - 1);
		} else {
			cout << (2 * (k % ((n / 2) + 1)));
		}
	}
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	// int t;
	// cin >> t;
	// for (int i = 0; i < t; i++)
	solve();
}