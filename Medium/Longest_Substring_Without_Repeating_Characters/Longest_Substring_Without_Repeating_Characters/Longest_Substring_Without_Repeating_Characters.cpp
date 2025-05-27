#include <iostream>
#include <string>

using namespace std;

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int lastIndex[256];
        for (int i = 0; i < 256; i++) {
            lastIndex[i] = -1;
        }
        int left = 0, maxLength = 0;
        for (int right = 0; right < s.length(); right++) {
            if (lastIndex[s[right]] >= left) {
                left = lastIndex[s[right]] + 1;
            }
            lastIndex[s[right]] = right;
            maxLength = max(maxLength, right - left + 1);
        }
        return maxLength;
    }
};

int main()
{
    string example1 = "abcabcbb";
    string example2 = "bbbbb";
    string example3 = "pwwkew";
    Solution sol;
    sol.lengthOfLongestSubstring(example1);
    cout << "Length of longest substring for string(" << example1 << "): " << sol.lengthOfLongestSubstring(example1) << "\n";
    cout << "Length of longest substring for string(" << example2 << "): " << sol.lengthOfLongestSubstring(example2) << "\n";
    cout << "Length of longest substring for string(" << example3 << "): " << sol.lengthOfLongestSubstring(example3) << "\n";
    return 0;
}