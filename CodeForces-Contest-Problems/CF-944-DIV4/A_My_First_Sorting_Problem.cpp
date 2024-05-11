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
	int t; cin >>t;

	while(t--){
        int x, y;
        cin >> x >> y;

        if(x<=y){
            cout << x << " "<< y;
        }

        if(x>y){
            cout << y << " " << x;
        }cout << endl;
	}
	return 0;
}
