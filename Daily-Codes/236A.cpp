#include <bits/stdc++.h>
using namespace std;

int main(){
    string str;
    cin >> str;

    int distCount = 0;

    for(int i=0; i<str.length(); i++){
        bool isDist = true;

        for(int j=0; j<i; j++){
            if(str[i]==str[j]){
                isDist = false;
                break;
            }
        }
        if(isDist){
            distCount++;
        }
    }

    if(distCount % 2 == 0){
        cout << "CHAT WITH HER!" << endl;
    }else{
        cout << "IGNORE HIM!" << endl;
    }
    return 0;
}