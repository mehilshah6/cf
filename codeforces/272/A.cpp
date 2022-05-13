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
	int sum = 0;
	for (int i = 0; i < n; i++)	{
		sum += v[i];
	}
	n++;
	int count = 0;
	for (int i = 1; i <= 5; i++) {
		if ((sum + i - 1) % n) {
			count++;
		}
	}
	cout << count;
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	// int t;
	// cin >> t;
	// for (int i = 0; i < t; i++)
	solve();
}