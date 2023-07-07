// A. Plus One on the Subset
// CodeForces: https://codeforces.com/problemset/problem/1624/A

#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin>>t;
    while(t--){
        int n; cin >> n;
        int arr[n];
        int max = INT_MIN;
        int mini = INT_MAX;
        for(int i=0; i<n; i++){
            cin>>arr[i];
        }
        for(int i=0; i<n; i++){
            if(max<arr[i]){
                max=arr[i];
            }
            if(mini>arr[i]){
                mini = arr[i];
            }
        }
        // cout << max  << endl;
        // cout << mini << endl;

        int result = abs(max-mini);
        cout << result << endl;
    }
    return 0;
}