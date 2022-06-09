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
	vector<vector<int>> v(n, vector<int>(2, 0));
	for (int i = 0; i < n; i++) {
		int a, b;
		cin >> a >> b;
		v[i][0] = a;
		v[i][1] = b;
	}
	int sum_left = 0;
	int sum_right = 0;
	for (int i = 0; i < n; i++) {
		sum_left += v[i][0];
		sum_right += v[i][1];
	}
	if (sum_left % 2 == 0 && sum_right % 2 == 0) {
		cout << "0";
	} else if (sum_left % 2 != 0 && sum_right % 2 != 0) {
		for (int i = 0; i < n; i++) {
			if (v[i][0] % 2 != v[i][1] % 2) {
				cout << "1";
				return;
			}
		}
		cout << "-1";
	} else {
		cout << "-1";
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
