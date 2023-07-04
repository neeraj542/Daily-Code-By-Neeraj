#include <bits/stdc++.h>
using namespace std;

int main(){
    string s1;
    cin >> s1;


    if(s1.length()>0){
        for(int i=0; i<s1.length(); i++){
            if(s1[0]>='A' && s1[0] <='Z'){
                s1[0] = s1[0];
            }else{
                s1[0] = s1[0] - 32;
            }
        }
    }
    cout << s1;

    return 0;
}