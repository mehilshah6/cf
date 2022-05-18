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

bool isSquare(int n){
	int val = sqrt(n);
	return val * val == n;
}

void solve() {
	int n;
	cin >> n;
	int count = 0;
	for (int i = 1; i <= n; i++) {
		for (int j = i; j <= n; j++) {
			lli sum = i * i + j * j;
			lli k = sqrt(sum);
			if (isSquare(sum) && k <= n  && i + j > k && j + k > i && i + k > j) {
				count++;
			}
		}
	}
	cout << count;
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	// int t;
	// cin >> t;
	// for (int i = 0; i < t; i++)
	solve();
}
