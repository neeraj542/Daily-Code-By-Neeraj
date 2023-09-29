#include<bits/stdc++.h>
using namespace std;
int mod = 1e9+7;
#define rep(i,a,b) for(int i=a;i<b;i++)
#define endl "\n"

void fastio(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}


void solve(int mat[][5]){
    int x,y;
    
    for(int i=0; i<5; i++){
        for(int j=0; j<5; j++){
            if(mat[i][j]==1){
                x=i;
                y=j;
            }
        }
    }

    int ans = abs(x-2) + abs(y-2);
    cout << ans << endl;
}
int main(){
	fastio();
	
    
    int mat[5][5];
    for(int i=0; i<5; i++){
        for(int j=0; j<5; j++){
            cin >> mat[i][j];
        }
    }

    solve(mat);
	return 0;

}