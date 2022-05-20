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
		lli n, k;
		cin >> n >> k;
		vector<lli> v(n);
		for (auto &it : v) {
			cin >> it;
		}
		lli sum = 0;
		lli ans = -1;
		lli min_sum = INT_MAX;
		for (lli i = 0; i < k; i++) {
			sum += v[i];
		}
		if (sum < min_sum) {
			min_sum = sum;
			ans = 0;
		}
		for (int i = k; i < n; i++) {
			sum -= v[i - k];
			sum += v[i];
			if (sum < min_sum) {
				min_sum = sum;
				ans = (i - k + 1);
			}
		}
		cout << (ans + 1);
	}

	int main() {
		ios::sync_with_stdio(false);
		cin.tie(0);
		// int t;
		// cin >> t;
		// for (int i = 0; i < t; i++)
		solve();
	}
