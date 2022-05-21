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

}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	int n;
	cin >> n;
	vector<pair<int, int>> v;
	for (int i = 0; i < 2 * n; i++) {
		int a;
		cin >> a;
		v.push_back({a, i + 1});
	}
	sort (v.begin(), v.end());
	for (int i = 0; i < n; i++) {
		if (v[2 * i].first != v[2 * i + 1].first) {
			cout << -1;
			return 0;
		}
	}
	for (int i = 0; i < n; i++) {
		cout << v[2 * i].second << " " << v[2 * i + 1].second << endl;
	}
}
