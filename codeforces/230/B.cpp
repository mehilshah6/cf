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
bool isPrime(lli n)
{
    // Corner case
	if (n <= 1)
		return false;

    // Check from 2 to square root of n
	for (lli i = 2; i <= sqrt(n); i++)
		if (n % i == 0)
			return false;

		return true;
	}
	void solve() {
		lli n;
		cin >> n;
		lli count = 0;
		unordered_map<lli, string> hm;
		for (lli i = 0; i < n; i++) {
			lli a;
			cin >> a;
			if (hm[a] != "") {
				cout << hm[a] << endl;
			} else {
				if (ceil((double)sqrt(a) == floor((double)sqrt(a)))) {
					bool ans = isPrime(sqrt(a));
					if (ans) {
						hm[a] = "YES";
						cout << "YES" << endl;
					} else {
						hm[a] = "NO";
						cout << "NO" << endl;
					}
				}
				else {
					hm[a] = "NO";
					cout << "NO" << endl;
				} 
			}
		}
	}
	int main() {
		ios::sync_with_stdio(false);
		cin.tie(0);
	// int t;
	// cin >> t;
	// for (int i = 0; i < t; i++)
		solve();
	}
