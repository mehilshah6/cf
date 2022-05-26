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
	if (n == 0) {
		cout << "0 0 0";
		return;
	} else if (n == 1) {
		cout << "0 0 1";
		return;
	} else if (n == 2) {
		cout << "0 1 1";
		return;
	} else if (n == 3) {
		cout << "1 1 1";
		return;
	}
	vector<int> v;
	v.push_back(0);
	v.push_back(1);
	int curr = 1;
	while (curr != n) {
		curr = v[v.size() - 1] + v[v.size() - 2];
		v.push_back(curr);
	}
	cout << v[v.size() - 5] << " " << v[v.size() - 4] << " " << v[v.size() - 2];
}
int32_t main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	// int t;
	// cin >> t;
	// for (int i = 0; i < t; i++)
	solve();
}
