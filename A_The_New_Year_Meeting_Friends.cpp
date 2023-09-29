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
	
    int arr[3];
    for(int i=0; i<3; i++){
        cin >> arr[i];
    }
    sort(arr, arr+3);
    int ans = (arr[2] - arr[1]) + (arr[1]-arr[0]);


    cout << ans << endl;
	return 0;

}