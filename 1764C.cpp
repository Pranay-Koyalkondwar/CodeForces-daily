#include<bits/stdc++.h>
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

    vector<int>a(n);
    for(auto &v : a) cin >> v;

    sort(all(a));

    if(a[0] == a.back()){
        cout << n / 2 << endl;
        return;
    }

    ll ans = 0;
    for(int i = 0; i < n; i++){
        if(a[i] < a[i + 1]){
            ll left = i + 1;
            ll right = n - i - 1;

            ans = max(ans, left * right);
        }
    }

    cout << ans << endl;
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    int t = 1;
    cin >> t;
    while(t--) solve();
    return 0;
}
