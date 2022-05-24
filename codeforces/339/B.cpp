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
	lli n, m;
	cin >> n >> m;
	lli count = 0;
	lli curr_position = 1;
	vector<lli> v(m, 0);
	for (lli i = 0; i < m; i++) {
		lli a;
		cin >> a;
		v[i] = a;
	}
	for (lli i = 0; i < m; i++) {
		if (v[i] >= curr_position) {
			count += (v[i] - curr_position);
		} else {
			count += (n - curr_position) + v[i];
		}
		curr_position = v[i];
	}
	cout << count;
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	// int t;
	// cin >> t;
	// for (int i = 0; i < t; i++)
	solve();
}
