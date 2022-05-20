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
		vector<pair<int, int>> v;
		for (int i = 0; i < n; i++) {
			int a, b;
			cin >> a >> b;
			v.push_back(make_pair(a, b));
		}
		lli count = 0;
		lli max_count = -1;
		for (lli i = 0; i < n; ) {
			count = 0;
			int a = v[i].first;
			int b = v[i].second;
			lli j = i;
			while (j < n && v[j].first == a && v[j].second == b) {
				i++;
				j++;
				count++;
			}
			max_count = max(count, max_count);
		}
		cout << max_count;
	}

	int main() {
		ios::sync_with_stdio(false);
		cin.tie(0);
		// int t;
		// cin >> t;
		// for (int i = 0; i < t; i++)
		solve();
	}
