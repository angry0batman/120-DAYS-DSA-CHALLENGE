#include <bits/stdc++.h>

using namespace std;


string evaluate_sequence(int length, const string& characters) {
    if (characters.front() != characters.back()) {
        return "YES";
    } else {
        return "NO";
    }
}


vector<string> evaluate_all_sequences(int test_cases, const vector<pair<int, string>>& sequences) {
    vector<string> results;
    for (int i = 0; i < test_cases; ++i) {
        int length = sequences[i].first;
        const string& characters = sequences[i].second;
        results.push_back(evaluate_sequence(length, characters));
    }
    return results;
}

int main() {
    int test_cases;
    cin >> test_cases;

    vector<pair<int, string>> sequences;

    for (int i = 0; i < test_cases; ++i) {
        int length;
        string characters;
        cin >> length;
        cin >> characters;
        sequences.push_back(make_pair(length, characters));
    }

    vector<string> results = evaluate_all_sequences(test_cases, sequences);

    for (const string& result : results) {
        cout << result << endl;
    }

    return 0;
}
