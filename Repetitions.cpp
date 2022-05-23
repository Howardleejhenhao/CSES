#include <bits/stdc++.h>

using namespace std;

void solve()
{
    string s;
    cin >> s;
    char c = 'z';
    int ans = 0;
    int cnt = 0;
    for(char i : s)
    {
        if(i != c)
        {
            c = i;
            ans = max(ans, cnt);
            cnt = 1;
        }
        else cnt++;
    }
    ans = max(ans, cnt);
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