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
	int capacity = 0;
	int current_capacity = 0;
	for (int i = 0; i < n; i++) {
		int a, b;
		cin >> a >> b;
		current_capacity -= a;
		current_capacity += b;
		capacity = max (capacity, current_capacity);
	}
	cout << capacity;
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	// int t;
	// cin >> t;
	// for (int i = 0; i < t; i++)
	solve();
}
