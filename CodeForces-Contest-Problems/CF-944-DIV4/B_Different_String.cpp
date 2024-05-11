#include <iostream>
#include <string>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        string s;
        cin >> s;

        // Check if all characters are the same
        bool all_same = true;
        for (int i = 1; i < s.length(); ++i) {
            if (s[i] != s[0]) {
                all_same = false;
                break;
            }
        }

        if (all_same) {
            cout << "NO" << endl;
        } else {
            cout << "YES" << endl;

            // Rearrange the string by swapping adjacent characters
            for (int i = 0; i < s.length() - 1; ++i) {
                if (s[i] != s[i + 1]) {
                    swap(s[i], s[i + 1]);
                    break;
                }
            }

            cout << s << endl;
        }
    }

    return 0;
}