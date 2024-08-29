#include <bits/stdc++.h>
using namespace std;

int main() {
    srand(time(0));  
    int test;
    cin >> test;
    while (test--) {
        int n;
        cin >> n;

        while (true) {
            int a = rand()%(n-2)+1;  
            int b = n-a-1;
             


            if (b>0 && a!= b && a!= 1 && b!=1 && __gcd(a,b)==1) {
                cout <<a<<" "<<b<<" "<<1<<endl;
                break;
            }
        }
    }
    return 0;
}
