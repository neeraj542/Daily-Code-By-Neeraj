#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;

    while(t--){
        int n; cin >> n; 
        vector<int> arr(n);
        // for( int i: arr) cin >> arr[i];
        for(int i=0; i<n; i++){
            cin >> arr[i];
        }

        vector<int> newArr; //empty array 

        for(int i=0; i<n/2; i++){
            newArr.push_back(arr[i]);
            newArr.push_back(arr[n-i-1]);
        }

        if(n%2 == 1){
            newArr.push_back(arr[n/2]);
        }

        for(int i=0; i<n; i++){
            cout << newArr[i] << " ";
        } 
        cout << endl;
        
    }
    return 0;
}