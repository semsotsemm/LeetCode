#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string prefix = "";
        bool isMatching = true;

        for (int charIndex = 0; charIndex < strs[0].length() && isMatching; charIndex++) {
            for (int wordIndex = 0; wordIndex < strs.size() - 1 && isMatching; wordIndex++) {
                if (strs[wordIndex][charIndex] != strs[wordIndex + 1][charIndex]) {
                    isMatching = false;
                }
                if (strs[wordIndex][charIndex] == '\0') {
                    break;
                }
            }
            if (isMatching) {
                prefix += strs[0][charIndex];
            }
        }
        return prefix;
    }
};

void printVector(const vector<string>& words) {
    for (size_t i = 0; i < words.size(); i++) {
        cout << "\"" << words[i] << "\"";
        if (i < words.size() - 1) cout << ", ";
    }
}

int main() {
    Solution solution;
    vector<string> strs = { "flower", "flow", "flight" };
    cout << "Longest common prefix for a vector { ";
    printVector(strs);
    cout << " }: " << solution.longestCommonPrefix(strs) << "\n";
    strs = { "dog","racecar","car" };
    cout << "Longest common prefix for a vector { ";
    printVector(strs);
    cout << " }: " << solution.longestCommonPrefix(strs) << "\n";
}
