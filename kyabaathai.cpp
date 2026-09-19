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
    int x, y;
    cin >> x >> y;

    int z = x + y;
    for(int i = 29; i >= 0; i--){
        if((z >> i) & 1){
            if(z - y >= (1 << i)){
                z -= (1 << i);
            }
        }
    }

    cout << (x + y) << " " << z - y << endl;
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    int t = 1;
    cin >> t;
    while(t--) solve();
    return 0;
}