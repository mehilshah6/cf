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
	int min_ele = INT_MAX;
	int max_ele = INT_MIN;
	int min_index = -1;
	int max_index = -1;
	for (int i = 0; i < n; i++) {
		if (min_ele >= v[i]) {
			min_ele = v[i];
			min_index = i;
		}
		if (max_ele < v[i]) {
			max_ele = v[i];
			max_index = i;
		}
	}	
	if (max_index > min_index) {
		cout << (max_index) + ((n - 1) - min_index) - 1;
	} else {
		cout << (max_index) + ((n - 1) - min_index);
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
