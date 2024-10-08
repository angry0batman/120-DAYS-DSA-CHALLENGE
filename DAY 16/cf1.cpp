#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        
        int sum_efficiency = 0, efficiency;
        
        for (int i = 0; i < n - 1; ++i) {
            cin >> efficiency;
            sum_efficiency += efficiency;
        }
        
        cout << -sum_efficiency << endl;
    }
    
    return 0;
}
