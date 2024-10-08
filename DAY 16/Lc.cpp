class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int count = 0;
        int length = flowerbed.size();
        
        for (int i = 0; i < length; i++) {
            if (flowerbed[i] == 0) {
                bool prev_empty = (i == 0) || (flowerbed[i - 1] == 0);
                bool next_empty = (i == length - 1) || (flowerbed[i + 1] == 0);
                
                if (prev_empty && next_empty) {
                    flowerbed[i] = 1;
                    count++;
                    if (count >= n) {
                        return true;
                    }
                }
            }
        }
        
        return count >= n;
    }
};
