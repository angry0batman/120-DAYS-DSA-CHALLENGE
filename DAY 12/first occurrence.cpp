class Solution {
public:
    int strStr(string h, string n) {
        

        if (h.size() < n.size()) {
            return -1;  // If the haystack is smaller than the needle, it's impossible to find the needle
        }

        for (int i = 0; i <= h.size() - n.size(); ++i) {
            if (h.substr(i, n.size()) == n) {
                return i;  // Found the substring, return the starting index
            }
        }

        return -1;  // Needle not found
    }
};
