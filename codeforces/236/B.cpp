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

lli countDivisors(lli n) {
	lli count = 0;
	for (int i=1; i<=sqrt(n); i++)
	{
		if (n%i == 0)
		{
			if (n/i == i)
				count += 1;
            else
            	count += 2;
        }
    }
    return count;
}
void solve() {
	int a, b, c;
	cin >> a >> b >> c;
	lli ans = 0;		
	unordered_map<int, int> hm;
	for (int i = 1; i <= a; i++) {
		for (int j = 1; j <= b; j++) {
			for (int k = 1; k <= c; k++) {
				lli product = i * j * k;
				if (hm[product] == 0) {
					hm[product] = countDivisors(product);
					ans += hm[product];
				} else {
					ans += hm[product];
				}
			}
		}
	}
	cout << ans % 1073741824;
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	// int t;
	// cin >> t;
	// for (int i = 0; i < t; i++)
	solve();
}
