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
	int k;
	cin >> k;
	string s;
	cin >> s;
	vector<int> freq(26, 0);
	for (char c : s) {
		freq[c - 'a']++;
	}
	for (int i = 0; i < 26; i++) {
		if (freq[i] % k != 0) {
			cout << "-1";
			return;
		}
	}
	string unit = "";
	for (int i = 0; i < 26; i++) {
		for (int j = 0; j < (freq[i] / k); j++) {
			unit += 'a' + i;
		}
	}
	for (int i = 0; i < k; i++) {
		cout << unit;
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
