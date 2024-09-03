#include <bits/stdc++.h>
using namespace std;

long long mod_exp(long long a, long long x, long long n) {
    long long ans = 1;
    long long base = a % n;
    vector<long long> intermediates;

    while (x) {
        if (x & 1) {
            ans = (ans * base) % n;
        }
        intermediates.push_back(base);
        base = (base * base) % n;
        x >>= 1;
    }

    for (size_t i = 0; i < intermediates.size(); i++) {
        cout << intermediates[i] << endl;
    }

    return ans;
}

string to_binary(int x) {
    string binary;
    while (x > 0) {
        binary = (x % 2 == 0 ? "0" : "1") + binary;
        x /= 2;
    }
    return binary;
}

int main() {
    long long a, x, n;
    cin >> a >> x >> n;

    string binary = to_binary(x);
    cout << binary << endl;

    long long result = mod_exp(a, x, n);
    cout << result << endl;

    return 0;
}
