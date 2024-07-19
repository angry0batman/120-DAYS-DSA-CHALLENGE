Q151 

class Solution {
public:
    string reverseWords(string s) {
        vector<string> dummy;
        string str = "";
        

        for (int i = 0; i < s.length(); ++i) {
            if (s[i] == ' ') {
                if (!str.empty()) {
                    dummy.push_back(str);
                    str = "";
                }
            } else {
                str += s[i];
            }
        }

        if (!str.empty()) {
            dummy.push_back(str);
        }
        
   
        string result = "";
        for (int i = dummy.size() - 1; i >= 0; --i) {
            result += dummy[i];
            if (i > 0) {
                result += " ";
            }
        }
        
        return result;
    }
};
