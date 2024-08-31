/* Question link- https://codeforces.com/problemset/problem/1913/B */
#include <iostream>
#include <string>
using namespace std;

int main() {
    int test;
    cin >> test;
    while (test--) {
        string s;
        cin >> s;

        int count0 = 0, count1 = 0;

        for (char c : s) {
            if (c == '0') {
                count0++;
            } else {
                count1++;
            }
        }

        for (int i = 0; i <= s.length(); i++) {
            if (i == s.length() || (s[i] == '0' && count1 == 0) || (s[i] == '1' && count0 == 0)) {
                cout << s.length() - i << endl;
                break;
            }
            if (s[i] == '0') {
                count1--;
            } else {
                count0--;
            }
        }
    }
    return 0;
}
