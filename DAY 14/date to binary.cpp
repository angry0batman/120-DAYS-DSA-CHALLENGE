
class Solution {
public:
    string convertDateToBinary(string date) {
        int year = stoi(date.substr(0, 4));
        int month = stoi(date.substr(5, 2));
        int day = stoi(date.substr(8, 2));

        string yearBinary = bitset<12>(year).to_string();
        string monthBinary = bitset<4>(month).to_string();
        string dayBinary = bitset<5>(day).to_string();

        // Remove leading zeroes from the binary strings
        yearBinary = yearBinary.substr(yearBinary.find('1'));
        monthBinary = monthBinary.substr(monthBinary.find('1'));
        dayBinary = dayBinary.substr(dayBinary.find('1'));

        return yearBinary + "-" + monthBinary + "-" + dayBinary;
    }
};
