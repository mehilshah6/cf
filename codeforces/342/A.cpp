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
	vector<int> v(n);
	for (int i = 0; i < n; i++) {
		cin >> v[i];
	}
	vector<int> freq(8, 0);
	for (int i = 0; i < n; i++) {
		freq[v[i]]++;
	}
	if (freq[1] >= req) {
		if (freq[2] + freq[3] >= req) {
			if (freq[4] + freq[6] >= req) {
				int a = min(freq[2], freq[4]);
				int count = 0;
				int count124 = 0;
				int count126 = 0;
				int count136 = 0;
				for (int j = 0; j < min(req, a); j++) {
					count++;
					count124++;
				}
				req -= a;
				freq[2] -= a;
				int b = min (freq[2], freq[6]);
				for (int j = 0; j < min(req, b); j++) {
					count++;
					count126++;
				}
				req -= b;
				freq[6] -= b;
				int c = min (freq[3], freq[6]);
				for (int j = 0; j < min(req, c); j++) {
					count++;
					count136++;
				}
				if (count < (n/3)) {
					cout << "-1";
				} else {
					for (int i = 0; i < count124; i++) {
						cout << "1 2 4" << endl;
					}
					for (int i = 0; i < count126; i++) {
						cout << "1 2 6" << endl;
					}
					for (int i = 0; i < count136; i++) {
						cout << "1 3 6" << endl;
					}
				}
			} else {
				cout << "-1";
			}
		} else {
			cout << "-1";
		}
	} else {
		cout << "-1";
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
