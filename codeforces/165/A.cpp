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
    int a[n], b[n];
    int num = 0;
    int G = 0, H = 0, J = 0, K = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i] >> b[i];
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (a[i] == a[j] && b[i] > b[j])
            {
                G++;
            }
            else if (a[i] > a[j] && b[i] == b[j])
            {
                H++;
            }
            else if (a[i] < a[j] && b[i] == b[j])
            {
                J++;
            }
            else if (a[i] == a[j] && b[i] < b[j])
            {
                K++;
            }
        }
        if (G >= 1 && H >= 1 && J >= 1 && K >= 1)
        {
            num++;
        }
        G = 0, H = 0, J = 0, K = 0;
    }
    cout << num << endl;
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	// int t;
	// cin >> t;
	// for (int i = 0; i < t; i++)
	solve();
}
