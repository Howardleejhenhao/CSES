#include <bits/stdc++.h>
#define ll long long
#define fastio ios::sync_with_stdio(0), cin.tie(0)
using namespace std;

vector<int> v(30, 0);

void solve()
{
    string s;
    cin >> s;
    for(char i : s)
    {
        v[i - 'A']++;
    }
    int flag = 0;
    char mid;
    for(int i = 0; i < 30; i++)
    {
        if(v[i] % 2 == 1)
        {
            flag++;
            mid = i;
        }
    }
    cout << '\n';
    if(flag >= 2)
    {
        cout << "NO SOLUTION\n";
        return;
    }
    for(int i = 0; i < v.size(); i++)
    {
        if(i == mid - 'A')
        {
            continue;
        }
        for(int j = 0; j < v[i] / 2; j++)
        {
            cout << (char)(i + 'A');
        }
    }
    if(s.length() % 2 != 0)
    {
        cout << (char)(mid + 'A');
    }
    for(int i = v.size() - 1; i >= 0; i--)
    {
        if(i == mid - 'A')
        {
            continue;
        }
        for(int j = 0; j < v[i] / 2; j++)
        {
            cout << (char)(i + 'A');
        }
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