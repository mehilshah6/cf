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
	lli n;
	cin >> n;
	vector<lli> arr(n);
	for (auto &it : arr) cin >> it;
	sort (all(arr));
	lli max_difference = abs(arr[n - 1] - arr[0]);
	lli min_count = 0;
	lli max_count = 0;
	for (int i = 0; i < n; i++) {
		if (arr[i] == arr[0]) min_count++;
		if (arr[i] == arr[n - 1]) max_count++;
	}
	if (arr[n - 1] == arr[0]) {
		cout << max_difference << " " << min_count * (max_count - 1) / 2;
	} else {
		cout << max_difference << " " << min_count * max_count;
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
