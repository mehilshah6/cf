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
	int m;
	cin >> m;
	vector<int> v(m);
	for (int i = 0; i < m; i++) {
		cin >> v[i];
	}
	int n;
	cin >> n;
	vector<int> w(n);
	for (int i = 0; i < n; i++) {
		cin >> w[i];
	}
	int max_integer = -1;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (w[i] % v[j] == 0) {
				max_integer = max (max_integer, w[i] / v[j]);
			}
		}
	}
	int count = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (w[i] % v[j] == 0) {
				if (w[i] / v[j] == max_integer) {
					count++;
				}
			}
		}
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
