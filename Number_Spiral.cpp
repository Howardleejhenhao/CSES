#include <bits/stdc++.h>
#define ll long long
#define fastio ios::sync_with_stdio(0), cin.tie(0)
using namespace std;

void solve()
{
    ll x, y;
    cin >> x >> y;
    ll ans = 0;
    if(x > y)
    {
        if(x % 2)
        {
            ans += pow((x - 1), 2);
            ans += y;
        }
        else
        {
            ans += (x * x)- y + 1;
        }
    }
    else
    {
        if(y % 2)
        {
            ans += (y * y) - x + 1;
        }
        else
        {
            ans += pow((y - 1), 2);
            ans += y + y - x;
        }
    }
    cout << ans << '\n';
}

int main()
{
    fastio;
    int t = 1;
    cin >> t;
    while(t--)
    {
        solve();
    }
    return 0;
}