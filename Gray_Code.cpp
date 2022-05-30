#include <bits/stdc++.h>
#define ll long long
#define fastio ios::sync_with_stdio(0), cin.tie(0)
using namespace std;

void solve()
{
    int n;
    cin >> n;
    for(int i = 0; i < (1 << n); i++)
    {
        int now = i;
        string ans;
        while(now > 0)
        {
            ans = to_string(now % 2) + ans;
            now /= 2;
        }
        cout << setw(n) << setfill('0') << ans << endl;
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