#include <bits/stdc++.h>
using namespace std;

const long long mod = 2760727302517;

long long F(const vector<long long>& A) {
    long long n = A.size();
    long long sum = 0;
    
    for (long long i = 0; i < n; i++) {
        for (long long j = i; j < n; j++) {
            long long diff = A[i] - A[j];
            sum = (sum + (diff * diff) % mod) % mod;
        }
    }
    
    return sum;
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        int n, Q;
        cin >> n >> Q;
        vector<long long> A(n);
        
        for (int i = 0; i < n; ++i) {
            cin >> A[i];
        }
        
        while (Q--) {
            int type;
            cin >> type;
            if (type == 1) {
                int x;
                long long v;
                cin >> x >> v;
                A[x-1] = v;
            } else if (type == 2) {
                int x;
                long long v;
                cin >> x >> v;
                A[x-1] += v;
            } else if (type == 3) {
                cout << F(A) << endl;
            }
        }
    }
    
    return 0;
}
