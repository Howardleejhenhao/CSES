#include <bits/stdc++.h>
#define ll long long
#define fastio ios::sync_with_stdio(0), cin.tie(0)
using namespace std;

const ll ma = 1e9 + 7;

ll exp(ll a, ll n, ll mo)
{
    if(n == 0) return 1;
    if(n % 2 == 0) return ((exp(a, n / 2, mo) % mo) * (exp(a, n / 2, mo) % mo)) % mo;
    else return (((exp(a, n - 1, mo) % mo) * a) % mo) % mo;
}

void solve()
{
    ll n;
    cin >> n;
    cout << exp(2, n, ma) << '\n';
}

int main()
{
    fastio;
    int t = 1;
    // cin >> t;
    while(t--)
    {
        solve();
    }
    return 0;
}