#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
#define F first
#define S second
#define all(a) a.begin(), a.end()
#define pb push_back

const int MOD = 1000000000 + 7;
int N = 1000000;
const int INF = INT_MAX;

void solve()
{
    int n;
    cin >> n;
    vector<int> c(n);
    for (auto &v : c)
        cin >> v;

    vector<vector<int>> dp(n + 1, vector<int>(n + 1, -1));
    auto rec = [&](auto &self, int l, int r)
    {
        if (l > r)
            return 0;
        if (l == r)
            return 1;

        if (dp[l][r] != -1)
            return dp[l][r];

        int ans = 1 + self(self, l + 1, r);
        if (l + 1 < n && c[l] == c[l + 1])
            ans = min(ans, 1 + self(self, l + 2, r));
        for (int i = l + 2; i <= r; i++)
        {
            if (c[l] == c[i])
            {
                ans = min(ans, self(self, l + 1, i - 1) + self(self, i + 1, r));
            }
        }

        return dp[l][r] = ans;
    };
    int ans = rec(rec, 0, n - 1);

    cout << ans << endl;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t = 1;
    // cin >> t;
    while (t--)
        solve();
    return 0;
}
