#include <bits/stdc++.h>
using namespace std;
int mod = 1e9 + 7;
#define rep(i, a, b) for (int i = a; i < b; i++)
#define endl "\n"

void fastio()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}

void solve_fun(int x, int n)
{
    x = x * 100;
    n = n - x;

    int cnt_crft = 0;
    while (n > 0)
    {
        cnt_crft = cnt_crft + 1;
        n = n - 100;
    }
    cout << cnt_crft << endl;
}
int main()
{
    fastio();
    int t;
    cin >> t;

    while (t--)
    {
        int x, n;
        cin >> x >> n;

        solve_fun(x, n);
    }
    return 0;
}