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
	string a;
	cin >> a;
	int zero_index = -1;
	for (int i = 0; i < a.length(); i++) {
		if (a[i] == '0') {
			zero_index = i;
			break;
		}
	}
	if (zero_index == -1) {
		for (int i = 0; i < a.length() - 1; i++) {
			cout << a[i];
		}
	} else {
		for (int i = 0; i < a.length(); i++) {
			if (i != zero_index) {
				cout << a[i];
			}
		}
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
