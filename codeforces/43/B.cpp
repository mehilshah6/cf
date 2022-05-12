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
	string s1, s2;
	getline(cin, s1);
	getline(cin, s2);
	vector<int> freq(256, 0);
	for (char c : s1) {
		freq[c]++;
	}
	for (char c : s2) {
		if (c != ' ')
			{ 
				if (freq[c] <= 0) {
				cout << "NO";
				return;
			}
			freq[c]--;
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