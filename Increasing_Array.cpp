#include <bits/stdc++.h>
#define ll long long
using namespace std;




void solve()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for(auto & i : v) cin >> i;
    ll ans = 0;
    for(int i = 1; i < n; i++)
    {
        if(v[i] < v[i - 1])
        {
            while(v[i] < v[i - 1])
            {
                v[i]++;
                ans++;
            }
        }
    }
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