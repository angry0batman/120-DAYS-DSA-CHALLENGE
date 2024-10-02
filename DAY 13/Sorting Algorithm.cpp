
class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        vector<int> v;
        vector<int> sortedArr = arr;
        sort(sortedArr.begin(), sortedArr.end());
        sortedArr.erase(unique(sortedArr.begin(), sortedArr.end()), sortedArr.end());
        
        for (int num : arr) {
            int rank = lower_bound(sortedArr.begin(), sortedArr.end(), num) - sortedArr.begin() + 1;
            v.push_back(rank);
        }
        
        return v;
    }
};
