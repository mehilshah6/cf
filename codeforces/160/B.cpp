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
	string a;
	cin >> n;
	cin >> a;
	vector<int> first;
	for (int i = 0; i < n; i++) {
		first.push_back(a[i] - '0');
	}
	vector<int> second;
	for (int i = n; i < 2*n; i++) {
		second.push_back(a[i] - '0');
	}
	sort (first.begin(), first.end());
	sort (second.begin(), second.end());
	bool greater = first[0] > second[0];
	if (first[0] == second[0]) {
		cout << "NO";
		return;
	}
	for (int i = 0; i < n; i++) {
		if (greater) {
			if (first[i] <= second[i]) {
				cout << "NO";
				return;
			}
		} else {
			if (first[i] >= second[i]) {
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