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
	string s = "";
	for (int i = 0; i < 4; i++) {
		string a;
		cin >> a;
		s += a;
	}
	for (int i = 0; i <= 10; i++) {
		if (i == 3 || i == 7) continue;
		int b = 0;
		int w = 0;
		if (s[i] == '#') {
			b++;
		} else {
			w++;
		}
		if (s[i + 1] == '#') {
			b++;
		} else {
			w++;
		}
		if (s[i + 4] == '#') {
			b++;
		} else {
			w++;
		}
		if (s[i + 5] == '#') {
			b++;
		} else {
			w++;
		}
		if (b == 4 || w == 4 || b == 3 || w == 3) {
			cout << "YES";
			return;
		}
	}
	cout << "NO";
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	// int t;
	// cin >> t;
	// for (int i = 0; i < t; i++)
	solve();
}
