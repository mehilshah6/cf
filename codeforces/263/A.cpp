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
// #define int long long int
using namespace std;
void solve() {
	int i, j;
	int a;
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			cin >> a;

			if (a == 1) {
				cout << (max(i, 2) - min(i, 2)) + max(j, 2) - min(j, 2);
				return;
			}
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
