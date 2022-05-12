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
	string s1, s2, s3;
	cin >> s1 >> s2 >> s3;
	vector<int> freq1(26, 0);
	vector<int> freq2(26, 0);
	for (char c : s1) {
		freq1[c - 'A']++;
	}
	for (char c : s2) {
		freq1[c - 'A']++;
	}
	for (char c : s3) {
		freq2[c - 'A']++;
	}
	for (int i = 0; i < 26; i++) {
		if (freq1[i] != freq2[i]) {
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