#include <bits/stdc++.h>
using namespace std;

int bin(int a, int b){
    if(b==0) return 1;
    long long num=bin(a,b/2);
    if(b&1) {
        return a*num*num;
    }
    else{
        return num*num;
    }
}

int main() {
    int a=2,b=13;
    cout<<bin(a,b)<<endl;
    cout<<pow(a,b)<<endl;
}
