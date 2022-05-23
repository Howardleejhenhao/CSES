#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> v(n + 1, 0);
    for(int i = 0; i < n - 1; i++)
    {
        int in;
        cin >> in;
        v[in]++;
    }
    for(int i = 1; i <= n; i++)
    {
        if(v[i] == 0)
        {
            cout << i << '\n';
            return;
        }
    }
    
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