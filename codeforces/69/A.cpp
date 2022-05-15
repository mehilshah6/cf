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
	int n;
	cin >> n;
	int x = 0;
	int y = 0;
	int z = 0;
	for (int i = 0; i < n; i++) {
		int a, b, c;
		cin >> a >> b >> c;
		x += a;
		y += b;
		c += z;
	}
	if (x == 0 && y == 0 && z == 0) {
		cout << "YES";
	} else {
		cout << "NO";
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
