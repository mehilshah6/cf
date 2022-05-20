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
	string s;
	cin >> s;
	int c1 = 0;
	int c2 = 0;
	int c3 = 0;
	for (char c : s) {
		if (c == '1') c1++;
		if (c == '2') c2++;
		if (c == '3') c3++;
	}
	for (int i = 0; i < c1 - 1; i++) {
		cout << "1+";
	}
	if (c1 > 0 && (c2 != 0 || c3 != 0)) {
		cout << "1+";
	} else if (c1 > 0) {
		cout << "1";
	}
	for (int i = 0; i < c2 - 1; i++) {
		cout << "2+";
	}
	if (c2 > 0 && c3 != 0) {
		cout << "2+";
	} else if (c2 > 0) {
		cout << "2";
	}
	for (int i = 0; i < c3 - 1; i++) {
		cout << "3+";
	}

	if (c3 > 0) {
		cout << "3";
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
