// Problem Statement: Reverse a string using recursion in C++

#include <bits/stdc++.h>
using namespace std;

void revStr(string& str, int s, int e){
    //base case
    if(s>e){
        return;
    }
    //solve one case
    if(s<=e){
        swap(str[s], str[e]);
    }
    revStr(str, s+1, e-1);
}

int main(){
    string str;
    cin >> str;
    
    revStr(str, 0, str.length()-1);
    cout << str;
    return 0;
}
