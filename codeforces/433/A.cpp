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
	if (n == 1) {
		cout << "NO";
		return;
	}
	int sum = 0;
	int count_200 = 0;
	for (int i = 0; i < n; i++) {
		int a;
		cin >> a;
		sum += a;
		if (a == 200) count_200++;
	}
	int count_100 = n - count_200;
	if ((sum / 100) % 2 == 0) {
		if (count_200 % 2 != 0 && count_100 == 0) {
			cout << "NO";
		} else {
			cout << "YES";
		}
	} else {
		cout << "NO";
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
