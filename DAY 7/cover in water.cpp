//Qn link-https://codeforces.com/problemset/problem/1900/A
#include <bits/stdc++.h>
using namespace std;

int fill(int n, vector<char> &v) {
    int countDots = 0;
    
    
    for(int i = 0; i <= n - 3; ++i) {
        if(v[i] == '.' && v[i+1] == '.' && v[i+2] == '.') {
            cout << 2 << endl;
            return 2;
        }
    }
    
   
    for(int i = 0; i < n; ++i) {
        if(v[i] == '.') {
            countDots++;
        }
    }
    
    cout << countDots << endl;
    return countDots;
}

int main() {
    int test;
    cin >> test;
    while(test--) {
        int n;
        cin >> n;
        vector<char> v(n);
        for(int i = 0; i < n; ++i) {
            cin >> v[i];
        }
        fill(n, v);
    }   
    return 0;
}
