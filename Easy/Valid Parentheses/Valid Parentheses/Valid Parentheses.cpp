#include <iostream>
#include <stack>
#include <unordered_map>

using namespace std;

class Solution {
public:
    bool isValid(string s) {
        stack<char> bracketStack;
        unordered_map<char, char> bracketPairs = { {')', '('}, {']', '['}, {'}', '{'} };
        for (int i = 0; i < s.length(); i++) {
            char currentChar = s[i];
            if (bracketPairs.find(currentChar) == bracketPairs.end()) {
                bracketStack.push(currentChar);
            }
            else if (!bracketStack.empty() && bracketPairs[currentChar] == bracketStack.top()) {
                bracketStack.pop();
            }
            else {
                return false;
            }
        }
        return bracketStack.empty();
    }
};

int main() {
    Solution solution;
    string testCases[] = { "()", "()[]{}", "(]", "([])" };
    for (int i = 0; i < sizeof(testCases) / sizeof(testCases[0]); i++) {
        cout << "String: " << testCases[i];
        if (solution.isValid(testCases[i])) {
            cout << " is valid\n";
        }
        else {
            cout << " is not valid.\n";
        }
    }
    return 0;
}
