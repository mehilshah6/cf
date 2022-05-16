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
	int req = (n/3);
	vector<int> arr(n);
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	if (count(arr.begin(), arr.end(), 1) < (n/3)) {
		cout << "-1";
		return;
	}
	vector<vector<int>> v (n/3, vector<int>(3, {-1}));
	for (int i = 0; i < n/3; i++) {
		v[i][0] = 1;
	}
	vector<int> freq(8, 0);
	for (int i = 0; i < n; i++) {
		freq[arr[i]]++;
	}
	int i = 0;
	while (freq[2] > 0 && freq[4] > 0 && i < n/3) {
		v[i][1] = 2;
		v[i][2] = 4;
		freq[2]--;
		freq[4]--;
		i++;
	}
	while (freq[2] > 0 && freq[6] > 0 && i < n/3) {
		v[i][1] = 2;
		v[i][2] = 6;
		freq[2]--;
		freq[6]--;
		i++;
	}
	while (freq[3] > 0 && freq[6] > 0 && i < n/3) {
		v[i][1] = 3;
		v[i][2] = 6;
		freq[3]--;
		freq[6]--;
		i++;
	}
	if (i < (n/3)) cout << "-1";
	else {
		for (auto i : v) {
			for (auto j : i) {
				cout << j << " ";
			}
			cout << endl;
		}
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
