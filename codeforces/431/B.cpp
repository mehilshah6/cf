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
#define modulo(a, b) (a % b < 0 ? a % b + b : a % b)

void solve() {
	vector<vector<int>> matrix(5, vector<int>(5, 0));
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			cin >> matrix[i][j];
		}
	}
	int arr[] = {0, 1, 2, 3, 4};
	vector<string> s;
	do {
		string v = "";
		for (auto i : arr) {
			v += to_string(i);
		}
		s.push_back(v);
	} while (next_permutation(arr, arr + 5));
	int ans = -1;
	for (int i = 0; i < 120; i++) {
		int value = matrix[s[i][0] - '0'][s[i][1] - '0'] + matrix[s[i][1] - '0'][s[i][0] - '0'] + 2 * (matrix[s[i][2] - '0'][s[i][3] - '0'] + matrix[s[i][3] - '0'][s[i][2] - '0']);
		value += matrix[s[i][1] - '0'][s[i][2] - '0'] + matrix[s[i][2] - '0'][s[i][1] - '0'] + 2 * (matrix[s[i][3] - '0'][s[i][4] - '0'] + matrix[s[i][4] - '0'][s[i][3] - '0']);
		ans = max(ans, value);
	}
	cout << ans;
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	// int t;
	// cin >> t;
	// for (int i = 0; i < t; i++)
	solve();
}
