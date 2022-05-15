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
	vector<int> v(n + 1);
	for (int i = 1; i <= n; i++) {
		cin >> v[i];
	}
	vector<int> prefix(n + 1, 0);
	set<int> s;
	for (int i = n; i > 0; i--) {
		s.insert(v[i]);
		prefix[i] = s.size();
	}
	for (int i = 0; i < m; i++) {
		int l;
		cin >> l;
		cout << prefix[l] << endl;
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
