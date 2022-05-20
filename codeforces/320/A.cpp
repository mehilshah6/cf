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
	lli n = s.length();
	for (lli i = 0; i < n;) {
		if (i < (n - 2) && s[i] == '1' && s[i + 1] == '4' && s[i + 2] == '4') {
			i = i + 3;
		} else if (i < (n - 1) && s[i] == '1' && s[i + 1] == '4') {
			i = i + 2;
		} else if (s[i] == '1') {
			i++;
		} else {
			cout << "NO";
			return;
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
