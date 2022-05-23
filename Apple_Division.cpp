#include <bits/stdc++.h>
#define ll long long
using namespace std;

vector<int> v(50);
ll ans = LONG_MAX;
ll total = 0;
int n;
void f(ll now, ll i)
{
    if(i == n)
    {
        ans = min(abs(total - now - now), ans);
        return;
    }
    f(now + v[i], i + 1);
    f(now, i + 1);
}

void solve()
{
    cin >> n;
    total = 0;
    for(int i = 0; i < n; i++)
    {
        cin >> v[i];
        total += v[i];
    }
    f(0, 0);
    cout << ans << '\n';
}

int main()
{
    int t = 1;
    // cin >> t;
    while(t--)
    {
        solve();
    }
    return 0;
}