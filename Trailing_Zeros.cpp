#include <bits/stdc++.h>
#define ll long long
#define fastio ios::sync_with_stdio(0), cin.tie(0)
using namespace std;

void solve()
{
    int n;
    cin >> n;
    int cnt = 0;
    for(int i = 5; n / i >= 1; i *= 5)
    {
        cnt += n / i;
    }
    cout << cnt << '\n';
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