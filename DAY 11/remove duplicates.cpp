class Solution{
public:
	std::string removeDuplicates(std::string str) {
    std::set<char> input;
    std::string output;

    for (char ch : str) {
        if (input.find(ch) == input.end()) {
            input.insert(ch);
            output += ch;
        }
    }

    return output;
}
};