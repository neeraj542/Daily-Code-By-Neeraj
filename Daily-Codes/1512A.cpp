#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> nums(n);

        for (int i = 0; i < n; i++) {
            cin >> nums[i];
        }
        
        int uniqueNum = nums[0];
        for (int i = 1; i < n; i++) {
            if (nums[i] != uniqueNum) {
                if (i == n - 1 || nums[i + 1] == uniqueNum) {
                    cout << i + 1 << "\n";
                } else {
                    cout << i << "\n";
                }
                break;
            }
        }
    }
    
    return 0;
}
