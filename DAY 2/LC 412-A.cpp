

class Solution {
public:
    vector<int>getFinalState(vector<int>& nums, int k, int multiplier) {
        while(k--) {
            int min_index=search_min(nums);
            nums[min_index]*=multiplier;
        }
        return nums;
    }

private:
   
    int search_min(vector<int>&nums) {
        int min_index=0;
        for (int i=1; i<nums.size(); ++i) {
            if (nums[i]<nums[min_index]) {
                min_index=i;
            }
        }
        return min_index;
    }
};
