#include <bits/stdc++.h>
#define ll long long
#define fastio ios::sync_with_stdio(0), cin.tie(0)

using namespace std;
template<class Fun> class y_combinator_result {
    Fun fun_;
public:
    template<class T> explicit y_combinator_result(T &&fun): fun_(std::forward<T>(fun)) {}
    template<class ...Args> decltype(auto) operator()(Args &&...args) { return fun_(std::ref(*this), std::forward<Args>(args)...); }
};
template<class Fun> decltype(auto) y_combinator(Fun &&fun) { return y_combinator_result<std::decay_t<Fun>>(std::forward<Fun>(fun)); }
 
 
template<typename A, typename B> ostream& operator<<(ostream &os, const pair<A, B> &p) { return os << '(' << p.first << ", " << p.second << ')'; }
template<typename T_container, typename T = typename enable_if<!is_same<T_container, string>::value, typename T_container::value_type>::type> ostream& operator<<(ostream &os, const T_container &v) { os << '{'; string sep; for (const T &x : v) os << sep << x, sep = ", "; return os << '}'; }

void dbg_out() { cerr << endl; }
template<typename Head, typename... Tail> void dbg_out(Head H, Tail... T) { cerr << ' ' << H; dbg_out(T...); }

#ifndef HOWARD_DBG
#define dbg(...) cerr << "(" << #__VA_ARGS__ << "):", dbg_out(__VA_ARGS__)
#else
#define dbg(...)
#endif

void solve()
{
    int n, x;
    cin >> n >> x;
    vector<int> v(n);
    for(auto & i : v) cin >> i;
    sort(v.begin(), v.end());
    int now = 0;
    int out = 0;
    int cnt = 0;
    while(out < n)
    {
        auto it = upper_bound(v.begin(), v.end(), x - v[out]);
        if(it == v.end())
        {
            v[out] = 0;
            out++;
            cnt++;
        }
        else
        {
            v[out] = 0;
            *it = 0;
            out += 2;
            cnt++;
        }
        sort(v.begin(), v.end());
    }
    cout << cnt << '\n';
    return;
}

int main()
{
    ios::sync_with_stdio(false);
#ifndef HOWARD_DBG
    cin.tie(nullptr);
#endif


    int t = 1;
    // cin >> t;
    while(t--)
    {
        solve();
    }
    return 0;
}
