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

void solve_lucky(int totalB, int totalG, int k)
{
    totalB = totalB % k;
    totalG = totalG % k;

    int minC = min(totalB, totalG);

    totalB -= minC;
    totalG -= minC;

    if (totalB == 0)
        cout << totalG << endl;
    else
    {
        cout << totalB << endl;
    }
}

int main()
{
    fastio();
    int t;
    cin >> t;

    while (t--)
    {
        int n, x, k;
        cin >> n >> x >> k;

        int totalB = x;
        int totalG = n - x;

        solve_lucky(totalB, totalG, k);
    }
    return 0;
}