#include <bits/stdc++.h>
using namespace std;

int computeResult(vector<int>& numbers) {
    sort(numbers.begin(), numbers.end());

    int start = 0;
    int end = numbers.size() - 1;
    bool toggle = true;

    while (start < end) {
        if (toggle) {
            start++;
        } else {
            end--;
        }
        toggle = !toggle;
    }

    return numbers[start];
}

vector<int> getInputData(int size) {
    vector<int> data(size);
    for (int i = 0; i < size; ++i) {
        cin >> data[i];
    }
    return data;
}

void processAllCases(int numCases) {
    while (numCases--) {
        int size;
        cin >> size;
        vector<int> data = getInputData(size);
        cout << computeResult(data) << "\n";
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int numCases;
    cin >> numCases;
    processAllCases(numCases);

    return 0;
}
