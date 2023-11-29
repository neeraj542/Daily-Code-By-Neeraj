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

bool checkPrime(int n)
{
	if (n <= 1)
	{
		return false;
	}
	for (int i = 2; i <= sqrt(n); ++i)
	{
		if (n % i == 0)
		{
			return false;
		}
	}
	return true;
}

void solve_fun(int health)
{
	int cnttt = 0, pwr = 1;
	while (health > 0)
	{
		if (checkPrime(health))
		{
			cnttt += 1;
			health = 0;
			break;
		}
		else
		{
			health -= pwr;
			pwr *= 2;
			cnttt += 1;
		}
	}

	if (health != 0)
	{
		cout << "-1" << endl;
	}
	else
	{
		cout << cnttt << endl;
	}
}
int main()
{
	fastio();
	int t;
	cin >> t;

	while (t--)
	{

		int h;
		cin >> h;

		solve_fun(h);
	}
	return 0;
}
