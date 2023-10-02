#include<bits/stdc++.h>
using namespace std;
int mod = 1e9+7;
#define rep(i,a,b) for(int i=a;i<b;i++)
#define endl "\n"

void fastio(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}

int main(){
	fastio();
    long long n;
    cin >> n;
    int cnt = 0;
    while (n != 0)
    {
        if (n % 10 == 4 || n % 10 == 7)
        {
            cnt += 1;
        }
        n /= 10;
    }
    if (cnt == 4 || cnt == 7)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}