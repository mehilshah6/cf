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
	int n, m;
	cin >> n >> m;
	int arr[16] = {1, 2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47};
	for (int i = 0; i < 16; i++) {
		if (arr[i] == n) {
			if (arr[i + 1] == m) {
				cout << "YES";
				return;
			} else {
				cout << "NO";
				return;
			}
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
