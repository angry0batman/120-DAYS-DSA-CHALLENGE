string removeChars(string string1, string string2) {
        // code here
        string result = "";
        int n = string1.size();
        int m = string2.size();
        
        for (int i = 0; i < n; ++i) {
            bool found = false;
            for (int j = 0; j < m; ++j) {
                if (string1[i] == string2[j]) {
                    found = true;
                    break;
                }
            }
            if (!found) {
                result += string1[i];
            }
        }
        return result;
    }
