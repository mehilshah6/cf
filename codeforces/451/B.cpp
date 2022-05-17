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
	vector<lli> v(n);
	for (auto &it : v) {
		cin >> it;
	}
	vector<lli> copy(all(v));
	sort(all(copy));
	lli first_index = -1;
	lli last_index = -1;
	for (lli i = 0; i < n; i++) {
		if (first_index == -1  && v[i] != copy[i]) {
			first_index = i;
		} else if (v[i] != copy[i]) {
			last_index = i;
		}
	}
	if (first_index == -1 && last_index == -1) {
		cout << "yes" << endl;
		cout << 1 << " " << 1;
		return;
	} else {
		reverse(v.begin() + first_index, v.begin() + last_index + 1);
		for (int i = first_index; i <= last_index; i++) {
			if (v[i] != copy[i]) {
				cout << "no";
				return;
			}
		}
	}
	cout << "yes" << endl;
	cout << (first_index + 1) << " " << (last_index + 1);
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	// int t;
	// cin >> t;
	// for (int i = 0; i < t; i++)
	solve();
}
