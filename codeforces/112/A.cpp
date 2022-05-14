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
	string a;
	string b;	
	cin >> a >> b;
	for (int i = 0; i < a.length(); i++) {
		if (tolower(a[i]) > tolower(b[i])) {
			cout << 1;
			return;
		} else if (tolower(a[i]) < tolower(b[i])) {
			cout << -1;
			return;
		}
	}
	cout << 0;
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	// int t;
	// cin >> t;
	// for (int i = 0; i < t; i++)
	solve();
}