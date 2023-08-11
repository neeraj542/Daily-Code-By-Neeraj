// Problem Statement: Given a string str = "abcddedg", and you have given a target character, find the last occurence of target= 'd'. Use recursion to solve this.

#include <bits/stdc++.h>
using namespace std;

void findLastOccurLTR(string str, char ch, int i, int& ans){
    //base case
    if(i>str.length()){
        return;
    }

    //ek case solve kar rha hoon, baki recursion sambhal lega 
    if(str[i]==ch){
        ans = i;
    }
    
    //recursive call
    findLastOccurLTR(str, ch, i+1, ans);
}

int main(){
    string str;
    cin >> str;
    char ch;
    cin >> ch;
    int ans = 0;
    findLastOccurLTR(str, ch, 0, ans);
    cout << "Index of Last Occurence of " << ch << " is " << ans; 
}
