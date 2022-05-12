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

bool sortCustom(pair<int, int>& a, pair<int, int>& b) {
	if (a.first == b.first) return a.second > b.second;
	return a.first < b.first;
}
void solve() {
	int s, n;
	cin >> s >> n;
	vector<pair<int, int>> v;
	for (int i = 0; i < n; i++) {
		int a, b;
		cin >> a >> b;
		v.push_back(make_pair(a, b));
	}
	sort (v.begin(), v.end(), sortCustom);
	for (int i = 0; i < n; i++) {
		if (s <= v[i].first) {
			cout << "NO";
			return;
		}
		if (s > v[i].first) {
			s += v[i].second;
		}
	}
	cout << "YES";
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	// int t;
	// cin >> t;
	// for (int i = 0; i < t; i++)
	solve();
}