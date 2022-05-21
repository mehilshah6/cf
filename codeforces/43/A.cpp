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
	cin >> n;
	string s;
	unordered_map<string, int> hm;
	for (int i = 0; i < n; i++) {
		cin >> s;
		hm[s] += 1;
	}
	string winner = "";
	int winner_count = -1;
	for (auto h : hm) {
		if (h.second > winner_count) {
			winner_count = h.second;
			winner = h.first;
		}
	}
	cout << winner;
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	// int t;
	// cin >> t;
	// for (int i = 0; i < t; i++)
	solve();
}
