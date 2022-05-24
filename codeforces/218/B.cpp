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
	lli n, m;
	cin >> m >> n;
	priority_queue<lli> mn, mx;
	for (int i = 0; i < n; i++) {
		lli num;
		cin >> num;
		mx.push(num);
		mn.push(num * -1);
	}
	lli max = 0;
	lli min = 0;
	while (m--) {
		lli maxTop = mx.top();
		mx.pop();
		max += maxTop;
		maxTop--;
		if (maxTop > 0) {
			mx.push(maxTop);
		}

		lli minTop = mn.top() * -1;
		mn.pop();
		min += minTop;
		minTop--;
		if (minTop > 0) {
			mn.push(minTop * -1);
		}
	}
	cout << max << " " << min;
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	// int t;
	// cin >> t;
	// for (int i = 0; i < t; i++)
	solve();
}
