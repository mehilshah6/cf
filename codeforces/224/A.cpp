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
	int s1, s2, s3;
	cin >> s1 >> s2 >> s3;
	double a = sqrt(s1 * s2 / s3);
	double b = sqrt(s1 * s3 / s2);
	double c = sqrt(s3 * s2 / s1);

	double sum = a + b + c;
	cout << 4 * sum;
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	// int t;
	// cin >> t;
	// for (int i = 0; i < t; i++)
	solve();
}
