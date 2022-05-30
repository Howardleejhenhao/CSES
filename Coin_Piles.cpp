#include <bits/stdc++.h>
#define ll long long
#define fastio ios::sync_with_stdio(0), cin.tie(0)
using namespace std;

void solve()
{
    int a, b;
    cin >> a >> b;
    if(b > a) swap(a, b);
    int z = a - b;
    if(b - z < 0)
    {
        cout << "NO\n";
        return;
    }
    if((b - z) % 3 == 0) cout << "YES\n";
    else cout << "NO\n";
    
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