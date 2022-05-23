#include <bits/stdc++.h>
#define ll long long
#define fastio ios::sync_with_stdio(0), cin.tie(0)
using namespace std;

void solve()
{
    int n;
    cin >> n;
    for(int i = 1; i <= n; i++)
    {
        ll a = pow(i, 2) * (pow(i, 2) - 1) / 2;
        ll b = 4 * (i - 1) * (i - 2);
        cout << a - b << '\n';
    }
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