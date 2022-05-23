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
	vector<vector<int>> v(3, vector<int>(3));
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			int a;
			cin >> a;
			v[i][j] = a;
		}
	}
	vector<vector<int>> bits {
		{1, 1, 1},
		{1, 1, 1},
		{1, 1 ,1}
	};
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			if (v[i][j] % 2) {
				bits[i][j] ^= 1;
				if (i > 0) {
					bits[i - 1][j] ^= 1;
				}
				if (j > 0) {
					bits[i][j - 1] ^= 1;
				}
				if (i < 2) {
					bits[i + 1][j] ^= 1;
				}
				if (j < 2) {
					bits[i][j + 1] ^= 1;
				}
			}
		}
	}
	for (auto i : bits) {
		for (auto ele : i) {
			cout << ele;
		}
		cout << endl;
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
