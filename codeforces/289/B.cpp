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
	int n, m, d;
	cin >> n >> m >> d;
	vector<int> arr(n * m);
	lli sum = 0;
	int length = n * m;
	for (int i = 0; i < length; i++) {
		cin >> arr[i];
	}
	sort(all(arr));
	for (int i = 0; i < length - 1; i++) {
		if (abs(arr[i] - arr[i + 1]) % d) {
			cout << "-1";
			return;
		}
	}
	int mid = arr[(n * m)/2];
	int mid1 = arr[(n * m)/2];
	int res = 0;
	int res1 = 0;
	for (int i = 0; i < length; i++) {
		if (abs(arr[i] - mid) % d) {
			mid = -1;
		}
		if (mid != -1 && abs(arr[i] - mid) % d == 0) {
			res += abs (arr[i] - mid) / d;
		}
		if (abs(arr[i] - mid1) % d) {
			mid1 = -1;
		}
		if (mid1 != -1 && abs(arr[i] - mid1) % d == 0) {
			res1 += abs(arr[i] - mid1) / d;
		}
	}
	cout << min(res, res1);
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	// int t;
	// cin >> t;
	// for (int i = 0; i < t; i++)
	solve();
}
