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
	lli n;
	cin >> n;
	lli sx, sy, ex, ey;
	cin >> sx >> sy >> ex >> ey;
	string s;
	cin >> s;
	int count = 0;
	for (char c : s) {
		if (c == 'E') {
			if (ex > sx) {
				sx = sx + 1;
			}
		} else if (c == 'S') {
			if (sy > ey) {
				sy = sy - 1;
			}
		} else if (c == 'W') {
			if (sx > ex) {
				sx = sx - 1;
			}
		} else if (c == 'N') {
			if (ey > sy) {
				sy = sy + 1;
			}
		}
		count++;
		if (sx == ex && sy == ey) {
			cout << count;
			return;
		}
	}
	cout << -1;
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	// int t;
	// cin >> t;
	// for (int i = 0; i < t; i++)
	solve();
}
