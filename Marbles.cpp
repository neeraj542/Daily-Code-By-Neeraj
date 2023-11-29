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

void solve_marbles(int a, int b)
{
    if (a % b == 0)
    {
        cout << "0" << endl;
    }
    else
    {
        int cntt_1 = 0;
        int cntt_2 = 0;

        int c = a;
        int d = b;

        int got1 = 0;
        while (a >= b)
        {
            a--;
            b++;
            cntt_1++;
            if (a % b == 0)
            {
                got1 = 1;
                break;
            }
        }
        a = c;
        b = d;
        int got2 = 0;
        while (b > 0)
        {
            a++;
            b--;
            cntt_2++;
            if (a % b == 0)
            {
                got2 = 1;
                break;
            }
        }

        if (got2 == 1 && got1 == 1)
        {
            if (cntt_2 < cntt_1)
            {
                cout << cntt_2 << endl;
            }
            else
            {
                cout << cntt_1 << endl;
            }
        }
        else
        {
            if (got1 == 1)
            {
                cout << cntt_1 << endl;
            }
            else
            {
                cout << cntt_2 << endl;
            }
        }
    }
}
int main()
{
    fastio();
    int t;
    cin >> t;

    while (t--)
    {
        int a, b;
        cin >> a >> b;

        solve_marbles(a, b);
    }
    return 0;
}