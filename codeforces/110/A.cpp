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
	int count = 0;
	int a;
	while (n != 0) {
		a = n % 10;
		n = n / 10;
		if (a == 4 || a == 7) count++;
	}
	if (count == 4 || count == 7) cout << "YES";
	else cout << "NO";
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	// int t;
	// cin >> t;
	// for (int i = 0; i < t; i++)
	solve();
}
