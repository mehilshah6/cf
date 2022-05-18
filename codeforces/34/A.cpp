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
	vector<int> v(n);
	for (auto &it : v) {
		cin >> it;
	}
	int min_diff = 10000;
	int first = -1;
	int second = -1;
	for (int i = 0; i < (n - 1); i++) {
		if (min_diff > abs(v[i] - v[i + 1])) {
			first = i + 1;
			second = i + 2;
			min_diff = abs(v[i] - v[i + 1]);
		}
	}
	if (min_diff > abs(v[n - 1] - v[0])) {
		cout << 1 << " " << n;
	} else {
		cout << first << " " << second;
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
