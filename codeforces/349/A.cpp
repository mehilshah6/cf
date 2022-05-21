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
	vector<int> v(n);
	for (auto &it : v) cin >> it;
	if (v[0] > 25) {
		cout << "NO";
		return;
	}
	vector<int> freq(3, 0);
	for (int i = 0; i < n; i++) {
		if (v[i] == 25) {
			freq[0]++;
		} else if (v[i] == 50) {
			if (freq[0] > 0) {
				freq[0]--;
				freq[1]++;
			} else {
				cout << "NO";
				return;
			}
		} else if (v[i] == 100) {
			if (freq[1] > 0 && freq[0] > 0) {
				freq[1]--;
				freq[0]--;
			} else if (freq[0] > 2) {
				freq[0] -= 3;
			} else {
				cout << "NO";
				return;
			}
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
