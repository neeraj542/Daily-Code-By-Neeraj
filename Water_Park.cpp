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
	int chefWeight=60, chefHeight=130;
	int w, h;
    cin >> w >> h;

    if(chefWeight<=w && chefHeight>=h)cout << "YES" << endl;
    else cout << "NO" << endl;
	return 0;
}