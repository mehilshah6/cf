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
	string s;
	cin >> n;
	cin >> s;
	int ans = 0;
	for (int i = 0; i < n; ) {
		int count = 1;
		while (s[i] == s[i + 1]) {
			count++;
			i++;
		}
		if (count == 1) {
			i++;
		} else {
			ans += count - 1;
		}
	}
	cout << ans;
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	// int t;
	// cin >> t;
	// for (int i = 0; i < t; i++)
	solve();
}
