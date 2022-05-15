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
	string b;
	cin >> a >> b;
	if (a.length() != b.length()) {
		cout << "NO";
		return;
	}
	if (a != b && a.length() < 2) {
		cout << "NO";
		return;
	}
	int count = 0;
	for (int i = 0; i < a.length(); i++) {
		if (a[i] != b[i] && (i + 1) != a.length()) {
			for (int j = i + 1; j < a.length(); j++) {
				if (a[j] != b[j]) {
					swap (a[i], a[j]);
					for (int k = 0; k < a.length(); k++) {
						if (a[k] != b[k]) {
							cout << "NO";
							return;
						}
					}
				}
			}
		}
	}
	if (a[a.length() - 1] != b[a.length() - 1]) cout << "NO";
	else cout << "YES";
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	// int t;
	// cin >> t;
	// for (int i = 0; i < t; i++)
	solve();
}
