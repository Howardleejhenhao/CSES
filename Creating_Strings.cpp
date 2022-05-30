#include <bits/stdc++.h>
#define ll long long
#define fastio ios::sync_with_stdio(0), cin.tie(0)
using namespace std;

void solve()
{
    string s;
    cin >> s;
    sort(s.begin(), s.end());
    vector<string> sv;
    do{
        sv.push_back(s);
    } while(next_permutation(s.begin(), s.end()));
    cout << sv.size() << '\n';
    for(string s : sv) cout << s << '\n';
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