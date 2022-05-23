#include <bits/stdc++.h>
#define ll long long
#define fastio ios::sync_with_stdio(0), cin.tie(0)
using namespace std;

void solve()
{
    int n;
    cin >> n;
    if(n <= 3 && n > 1)
    {
        cout << "NO SOLUTION\n";
        return;
    }
    for(int i = 2; i <= n; i += 2)
    {
        cout << i << ' ';
    }
    for(int i = 1; i <= n; i += 2)
    {
        cout << i << ' ';
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