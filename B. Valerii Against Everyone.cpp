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

    map<int, int>mp;
    bool ok = false;
    for(int i = 0; i < n; i++){
        int a;
        cin >> a;
        mp[a]++;
        if(mp[a] > 1){
            ok = true;
        }
    }

    if(ok){
        cout << "YES" << endl;
    }else cout << "NO" << endl;
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    int t = 1;
    cin >> t;
    while(t--) solve();
    return 0;
}
