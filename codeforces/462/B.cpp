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
#define int long long int
using namespace std;
void solve() {
	int n, k;
	cin >> n >> k;
	string s;
	cin >> s;
	vector<int> freq(26, 0);
	for (char c : s) {
		freq[c - 'A']++;
	}
	int count = 0;
	int ans = 0;
	while (count < k) {
		int max = 0;
		int index = -1;
		for (int i = 0; i < 26; i++) {
			if (freq[i] > max) {
				max = freq[i];
				index = i;
			}
		}
		freq[index] = -1;
		if (count + max <= k) {
			ans += max * max;
			count += max;
		} else {
			ans += (k - count) * (k - count);
			count += max;
		}
	}
	cout << ans;
}
int32_t main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	// int t;
	// cin >> t;
	// for (int i = 0; i < t; i++)
	solve();
}
