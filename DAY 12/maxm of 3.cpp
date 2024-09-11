class Solution {
public:
    int maximumProduct(vector<int>&v) {
        int n=v.size();
        sort(v.begin(),v.end(),greater<int>());
        return max((v[0]*v[1]*v[2]),(v[n-1]*v[n-2]*v[0]));
    }
};
