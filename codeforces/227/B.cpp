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
	unordered_map<int, int> v;
	for (int i = 0; i < n; i++) {
		int a; 
		cin >> a;
		v[a] = (i + 1);
	}
	std::map<int, int> ordered(v.begin(), v.end());
	int k;
	cin >> k;
	lli ansV = 0;
	lli ansP = 0;
	for (int i = 0; i < k; i++) {
		int a;
		cin >> a;
		ansV += ordered[a];
		ansP += n + 1 - ordered[a];
	}
	cout << ansV << " " << ansP;
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	// int t;
	// cin >> t;
	// for (int i = 0; i < t; i++)
	solve();
}
