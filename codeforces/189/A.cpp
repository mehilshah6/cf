#include <bits/stdc++.h>

using namespace std;
#define int long long

int dp[40001];

int d(int n, int x, int y, int z)
{
    if (n < 0)
        return INT_MIN;
    if (n == 0)
        return 0;
    if (dp[n] != -1)
        return dp[n];
    return dp[n] = max({1 + d(n - x, x, y, z), 1 + d(n - y, x, y, z), 1 + d(n - z, x, y, z)});
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, a, b, c;
    cin >> n >> a >> b >> c;
    memset(dp, -1, sizeof(dp));
    cout << d(n, a, b, c);
    return 0;
}