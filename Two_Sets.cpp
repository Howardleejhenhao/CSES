#include <bits/stdc++.h>
#define ll long long
#define fastio ios::sync_with_stdio(0), cin.tie(0)
using namespace std;

void solve()
{
    int n;
    cin >> n;
    int sum = n * (n + 1) / 2;
    if(sum % 2)
    {
        cout << "NO\n";
    }
    else
    {
        vector<int> v1, v2;
        v1.push_back(1);
        for(int i = 2; i < n; i++)
        {
            v2.push_back(i);
            i++;
            if(i >= n) break;
            v2.push_back(i);
            i++;
            if(i >= n) break;
            v1.push_back(i);
            i++;
            if(i >= n) break;
            v1.push_back(i);
        }
        v1.push_back(n);
        cout << v1.size() << '\n';
        for(int i : v1) cout << i << ' ';
        cout << '\n';
        cout << v2.size() << '\n';
        for(int i : v2) cout << i << ' ';
        cout << '\n';
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