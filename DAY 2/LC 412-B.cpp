class Solution {
public:
    bool isValidPair(int a, int b) {
        string strA=to_string(a);
        string strB=to_string(b);
        
        while (strA.length()<strB.length()) {
            strA="0"+strA;
        }
        while (strB.length()<strA.length()) {
            strB="0"+strB;
        }
        
        int mis_Count=0;
        int f_Index=-1;
        int s_Index=-1;
        
        for (int i = 0; i<strA.length();++i) {
            if (strA[i]!=strB[i]) {
                ++mis_Count;
                if (mis_Count==1) {
                    f_Index=i;
                } else if (mis_Count == 2) {
                    s_Index = i;
                } else {
                    return false;
                }
            }
        }
        
        if (mis_Count==2) {
            swap(strA[f_Index], strA[s_Index]);
            return strA==strB;
        }
        
        return false;
    }

    int countPairs(vector<int>& nums) {
        int size=nums.size();
        int valid_Count=0;
        
        for (int i = 0; i < size; ++i) {
            for (int j = i + 1; j < size; ++j) {
                if (nums[i] == nums[j] || isValidPair(nums[i], nums[j])) {
                    ++valid_Count;
                }
            }
        }
        
        return valid_Count;
    }
};
