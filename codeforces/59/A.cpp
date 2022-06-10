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
	string s; cin >> s;
    int low = 0, hi = 0;
    for (char c : s) {
        if (c >= 97) low++;
        else hi++;
    }
    for (int i = 0; i < s.size(); ++i) {
        if (low >= hi) s[i] = tolower(s[i]);
        else s[i] = toupper(s[i]);
    }
    cout << s;
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	// int t;
	// cin >> t;
	// for (int i = 0; i < t; i++)
	solve();
}
